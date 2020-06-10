#include "tcp_server.h"

#ifdef LOG_TAG
#undef LOG_TAG
#endif
#define LOG_TAG "tcp_server.cpp"

TCPServer::~TCPServer() {
  recv_threads_.clear();
  accept_threads_.clear();
}

int TCPServer::Send(int cilent_socket, char *buff, int size) {
  return send(cilent_socket, buff, size, 0);
}

int TCPServer::Recvieve(int cilent_socket) {
  LOG_INFO("TCPServer::Recvieve\n");
  char buffer[MAXPACKETSIZE];
  int size = sizeof(buffer);
  while (1) {
    int length = recv(cilent_socket, buffer, size, 0);
    LOG_INFO("socket recvieve length: %d\n", length);
    if (length <= 0) {
      LOG_ERROR("socket recvieve exit\n");
      break;
    }
    if (callback_) {
      callback_(cilent_socket, buffer, length);
    }
  }
  return 0;
}

void TCPServer::Accepted() {
  LOG_INFO("TCPServer::Accepted\n");
  while (1) {
    int cilent_socket;
    socklen_t sosize = sizeof(clientAddress);
    cilent_socket = accept(sockfd, (struct sockaddr *)&clientAddress, &sosize);
    if (cilent_socket < 0) {
      LOG_ERROR("Error socket accept failed\n");
      continue;
    }
    LOG_INFO("socket accept ip %s\n", inet_ntoa(clientAddress.sin_addr));

    std::shared_ptr<std::thread> recv_thread;
    recv_thread =
        make_shared<thread>(&TCPServer::Recvieve, this, cilent_socket);
    recv_threads_.emplace_back(recv_thread);
  }
}

int TCPServer::Process(int port) {
  LOG_INFO("TCPServer::Process\n");
  int opt = 1;
  sockfd = socket(AF_INET, SOCK_STREAM, 0);
  memset(&serverAddress, 0, sizeof(serverAddress));
  if (setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt,
                 sizeof(opt))) {
    LOG_ERROR("Error setsockopt\n");
    exit(EXIT_FAILURE);
  }

  serverAddress.sin_family = AF_INET;
  serverAddress.sin_addr.s_addr = htonl(INADDR_ANY);
  serverAddress.sin_port = htons(port);
  if ((::bind(sockfd, (struct sockaddr *)&serverAddress,
              sizeof(serverAddress))) < 0) {
    LOG_ERROR("Error bind\n");
    exit(EXIT_FAILURE);
  }
  if (listen(sockfd, 5) < 0) {
    LOG_ERROR("Error listen\n");
    exit(EXIT_FAILURE);
  }

  std::shared_ptr<std::thread> accept_thread;
  accept_thread = make_shared<thread>(&TCPServer::Accepted, this);
  accept_threads_.emplace_back(accept_thread);

  return 0;
}
