//
// AUTOGENERATED, DO NOT EDIT
//
#ifndef OPENCV_CORE_OCL_RUNTIME_OPENCL_CORE_HPP
    #error "Invalid usage"
#endif

// generated by parser_cl.py
#define clBuildProgram clBuildProgram_
#define clCompileProgram clCompileProgram_
#define clCreateBuffer clCreateBuffer_
#define clCreateCommandQueue clCreateCommandQueue_
#define clCreateContext clCreateContext_
#define clCreateContextFromType clCreateContextFromType_
#define clCreateImage clCreateImage_
#define clCreateImage2D clCreateImage2D_
#define clCreateImage3D clCreateImage3D_
#define clCreateKernel clCreateKernel_
#define clCreateKernelsInProgram clCreateKernelsInProgram_
#define clCreateProgramWithBinary clCreateProgramWithBinary_
#define clCreateProgramWithBuiltInKernels clCreateProgramWithBuiltInKernels_
#define clCreateProgramWithSource clCreateProgramWithSource_
#define clCreateSampler clCreateSampler_
#define clCreateSubBuffer clCreateSubBuffer_
#define clCreateSubDevices clCreateSubDevices_
#define clCreateUserEvent clCreateUserEvent_
#define clEnqueueBarrier clEnqueueBarrier_
#define clEnqueueBarrierWithWaitList clEnqueueBarrierWithWaitList_
#define clEnqueueCopyBuffer clEnqueueCopyBuffer_
#define clEnqueueCopyBufferRect clEnqueueCopyBufferRect_
#define clEnqueueCopyBufferToImage clEnqueueCopyBufferToImage_
#define clEnqueueCopyImage clEnqueueCopyImage_
#define clEnqueueCopyImageToBuffer clEnqueueCopyImageToBuffer_
#define clEnqueueFillBuffer clEnqueueFillBuffer_
#define clEnqueueFillImage clEnqueueFillImage_
#define clEnqueueMapBuffer clEnqueueMapBuffer_
#define clEnqueueMapImage clEnqueueMapImage_
#define clEnqueueMarker clEnqueueMarker_
#define clEnqueueMarkerWithWaitList clEnqueueMarkerWithWaitList_
#define clEnqueueMigrateMemObjects clEnqueueMigrateMemObjects_
#define clEnqueueNDRangeKernel clEnqueueNDRangeKernel_
#define clEnqueueNativeKernel clEnqueueNativeKernel_
#define clEnqueueReadBuffer clEnqueueReadBuffer_
#define clEnqueueReadBufferRect clEnqueueReadBufferRect_
#define clEnqueueReadImage clEnqueueReadImage_
#define clEnqueueTask clEnqueueTask_
#define clEnqueueUnmapMemObject clEnqueueUnmapMemObject_
#define clEnqueueWaitForEvents clEnqueueWaitForEvents_
#define clEnqueueWriteBuffer clEnqueueWriteBuffer_
#define clEnqueueWriteBufferRect clEnqueueWriteBufferRect_
#define clEnqueueWriteImage clEnqueueWriteImage_
#define clFinish clFinish_
#define clFlush clFlush_
#define clGetCommandQueueInfo clGetCommandQueueInfo_
#define clGetContextInfo clGetContextInfo_
#define clGetDeviceIDs clGetDeviceIDs_
#define clGetDeviceInfo clGetDeviceInfo_
#define clGetEventInfo clGetEventInfo_
#define clGetEventProfilingInfo clGetEventProfilingInfo_
#define clGetExtensionFunctionAddress clGetExtensionFunctionAddress_
#define clGetExtensionFunctionAddressForPlatform clGetExtensionFunctionAddressForPlatform_
#define clGetImageInfo clGetImageInfo_
#define clGetKernelArgInfo clGetKernelArgInfo_
#define clGetKernelInfo clGetKernelInfo_
#define clGetKernelWorkGroupInfo clGetKernelWorkGroupInfo_
#define clGetMemObjectInfo clGetMemObjectInfo_
#define clGetPlatformIDs clGetPlatformIDs_
#define clGetPlatformInfo clGetPlatformInfo_
#define clGetProgramBuildInfo clGetProgramBuildInfo_
#define clGetProgramInfo clGetProgramInfo_
#define clGetSamplerInfo clGetSamplerInfo_
#define clGetSupportedImageFormats clGetSupportedImageFormats_
#define clLinkProgram clLinkProgram_
#define clReleaseCommandQueue clReleaseCommandQueue_
#define clReleaseContext clReleaseContext_
#define clReleaseDevice clReleaseDevice_
#define clReleaseEvent clReleaseEvent_
#define clReleaseKernel clReleaseKernel_
#define clReleaseMemObject clReleaseMemObject_
#define clReleaseProgram clReleaseProgram_
#define clReleaseSampler clReleaseSampler_
#define clRetainCommandQueue clRetainCommandQueue_
#define clRetainContext clRetainContext_
#define clRetainDevice clRetainDevice_
#define clRetainEvent clRetainEvent_
#define clRetainKernel clRetainKernel_
#define clRetainMemObject clRetainMemObject_
#define clRetainProgram clRetainProgram_
#define clRetainSampler clRetainSampler_
#define clSetEventCallback clSetEventCallback_
#define clSetKernelArg clSetKernelArg_
#define clSetMemObjectDestructorCallback clSetMemObjectDestructorCallback_
#define clSetUserEventStatus clSetUserEventStatus_
#define clUnloadCompiler clUnloadCompiler_
#define clUnloadPlatformCompiler clUnloadPlatformCompiler_
#define clWaitForEvents clWaitForEvents_

#if defined __APPLE__
    #define CL_SILENCE_DEPRECATION
    #include <OpenCL/cl.h>
#else
    #include <CL/cl.h>
#endif

// generated by parser_cl.py
#undef clBuildProgram
#define clBuildProgram clBuildProgram_pfn
#undef clCompileProgram
#define clCompileProgram clCompileProgram_pfn
#undef clCreateBuffer
#define clCreateBuffer clCreateBuffer_pfn
#undef clCreateCommandQueue
#define clCreateCommandQueue clCreateCommandQueue_pfn
#undef clCreateContext
#define clCreateContext clCreateContext_pfn
#undef clCreateContextFromType
#define clCreateContextFromType clCreateContextFromType_pfn
#undef clCreateImage
#define clCreateImage clCreateImage_pfn
#undef clCreateImage2D
#define clCreateImage2D clCreateImage2D_pfn
#undef clCreateImage3D
#define clCreateImage3D clCreateImage3D_pfn
#undef clCreateKernel
#define clCreateKernel clCreateKernel_pfn
#undef clCreateKernelsInProgram
#define clCreateKernelsInProgram clCreateKernelsInProgram_pfn
#undef clCreateProgramWithBinary
#define clCreateProgramWithBinary clCreateProgramWithBinary_pfn
#undef clCreateProgramWithBuiltInKernels
#define clCreateProgramWithBuiltInKernels clCreateProgramWithBuiltInKernels_pfn
#undef clCreateProgramWithSource
#define clCreateProgramWithSource clCreateProgramWithSource_pfn
#undef clCreateSampler
#define clCreateSampler clCreateSampler_pfn
#undef clCreateSubBuffer
#define clCreateSubBuffer clCreateSubBuffer_pfn
#undef clCreateSubDevices
#define clCreateSubDevices clCreateSubDevices_pfn
#undef clCreateUserEvent
#define clCreateUserEvent clCreateUserEvent_pfn
#undef clEnqueueBarrier
#define clEnqueueBarrier clEnqueueBarrier_pfn
#undef clEnqueueBarrierWithWaitList
#define clEnqueueBarrierWithWaitList clEnqueueBarrierWithWaitList_pfn
#undef clEnqueueCopyBuffer
#define clEnqueueCopyBuffer clEnqueueCopyBuffer_pfn
#undef clEnqueueCopyBufferRect
#define clEnqueueCopyBufferRect clEnqueueCopyBufferRect_pfn
#undef clEnqueueCopyBufferToImage
#define clEnqueueCopyBufferToImage clEnqueueCopyBufferToImage_pfn
#undef clEnqueueCopyImage
#define clEnqueueCopyImage clEnqueueCopyImage_pfn
#undef clEnqueueCopyImageToBuffer
#define clEnqueueCopyImageToBuffer clEnqueueCopyImageToBuffer_pfn
#undef clEnqueueFillBuffer
#define clEnqueueFillBuffer clEnqueueFillBuffer_pfn
#undef clEnqueueFillImage
#define clEnqueueFillImage clEnqueueFillImage_pfn
#undef clEnqueueMapBuffer
#define clEnqueueMapBuffer clEnqueueMapBuffer_pfn
#undef clEnqueueMapImage
#define clEnqueueMapImage clEnqueueMapImage_pfn
#undef clEnqueueMarker
#define clEnqueueMarker clEnqueueMarker_pfn
#undef clEnqueueMarkerWithWaitList
#define clEnqueueMarkerWithWaitList clEnqueueMarkerWithWaitList_pfn
#undef clEnqueueMigrateMemObjects
#define clEnqueueMigrateMemObjects clEnqueueMigrateMemObjects_pfn
#undef clEnqueueNDRangeKernel
#define clEnqueueNDRangeKernel clEnqueueNDRangeKernel_pfn
#undef clEnqueueNativeKernel
#define clEnqueueNativeKernel clEnqueueNativeKernel_pfn
#undef clEnqueueReadBuffer
#define clEnqueueReadBuffer clEnqueueReadBuffer_pfn
#undef clEnqueueReadBufferRect
#define clEnqueueReadBufferRect clEnqueueReadBufferRect_pfn
#undef clEnqueueReadImage
#define clEnqueueReadImage clEnqueueReadImage_pfn
#undef clEnqueueTask
#define clEnqueueTask clEnqueueTask_pfn
#undef clEnqueueUnmapMemObject
#define clEnqueueUnmapMemObject clEnqueueUnmapMemObject_pfn
#undef clEnqueueWaitForEvents
#define clEnqueueWaitForEvents clEnqueueWaitForEvents_pfn
#undef clEnqueueWriteBuffer
#define clEnqueueWriteBuffer clEnqueueWriteBuffer_pfn
#undef clEnqueueWriteBufferRect
#define clEnqueueWriteBufferRect clEnqueueWriteBufferRect_pfn
#undef clEnqueueWriteImage
#define clEnqueueWriteImage clEnqueueWriteImage_pfn
#undef clFinish
#define clFinish clFinish_pfn
#undef clFlush
#define clFlush clFlush_pfn
#undef clGetCommandQueueInfo
#define clGetCommandQueueInfo clGetCommandQueueInfo_pfn
#undef clGetContextInfo
#define clGetContextInfo clGetContextInfo_pfn
#undef clGetDeviceIDs
#define clGetDeviceIDs clGetDeviceIDs_pfn
#undef clGetDeviceInfo
#define clGetDeviceInfo clGetDeviceInfo_pfn
#undef clGetEventInfo
#define clGetEventInfo clGetEventInfo_pfn
#undef clGetEventProfilingInfo
#define clGetEventProfilingInfo clGetEventProfilingInfo_pfn
#undef clGetExtensionFunctionAddress
#define clGetExtensionFunctionAddress clGetExtensionFunctionAddress_pfn
#undef clGetExtensionFunctionAddressForPlatform
#define clGetExtensionFunctionAddressForPlatform clGetExtensionFunctionAddressForPlatform_pfn
#undef clGetImageInfo
#define clGetImageInfo clGetImageInfo_pfn
#undef clGetKernelArgInfo
#define clGetKernelArgInfo clGetKernelArgInfo_pfn
#undef clGetKernelInfo
#define clGetKernelInfo clGetKernelInfo_pfn
#undef clGetKernelWorkGroupInfo
#define clGetKernelWorkGroupInfo clGetKernelWorkGroupInfo_pfn
#undef clGetMemObjectInfo
#define clGetMemObjectInfo clGetMemObjectInfo_pfn
#undef clGetPlatformIDs
#define clGetPlatformIDs clGetPlatformIDs_pfn
#undef clGetPlatformInfo
#define clGetPlatformInfo clGetPlatformInfo_pfn
#undef clGetProgramBuildInfo
#define clGetProgramBuildInfo clGetProgramBuildInfo_pfn
#undef clGetProgramInfo
#define clGetProgramInfo clGetProgramInfo_pfn
#undef clGetSamplerInfo
#define clGetSamplerInfo clGetSamplerInfo_pfn
#undef clGetSupportedImageFormats
#define clGetSupportedImageFormats clGetSupportedImageFormats_pfn
#undef clLinkProgram
#define clLinkProgram clLinkProgram_pfn
#undef clReleaseCommandQueue
#define clReleaseCommandQueue clReleaseCommandQueue_pfn
#undef clReleaseContext
#define clReleaseContext clReleaseContext_pfn
#undef clReleaseDevice
#define clReleaseDevice clReleaseDevice_pfn
#undef clReleaseEvent
#define clReleaseEvent clReleaseEvent_pfn
#undef clReleaseKernel
#define clReleaseKernel clReleaseKernel_pfn
#undef clReleaseMemObject
#define clReleaseMemObject clReleaseMemObject_pfn
#undef clReleaseProgram
#define clReleaseProgram clReleaseProgram_pfn
#undef clReleaseSampler
#define clReleaseSampler clReleaseSampler_pfn
#undef clRetainCommandQueue
#define clRetainCommandQueue clRetainCommandQueue_pfn
#undef clRetainContext
#define clRetainContext clRetainContext_pfn
#undef clRetainDevice
#define clRetainDevice clRetainDevice_pfn
#undef clRetainEvent
#define clRetainEvent clRetainEvent_pfn
#undef clRetainKernel
#define clRetainKernel clRetainKernel_pfn
#undef clRetainMemObject
#define clRetainMemObject clRetainMemObject_pfn
#undef clRetainProgram
#define clRetainProgram clRetainProgram_pfn
#undef clRetainSampler
#define clRetainSampler clRetainSampler_pfn
#undef clSetEventCallback
#define clSetEventCallback clSetEventCallback_pfn
#undef clSetKernelArg
#define clSetKernelArg clSetKernelArg_pfn
#undef clSetMemObjectDestructorCallback
#define clSetMemObjectDestructorCallback clSetMemObjectDestructorCallback_pfn
#undef clSetUserEventStatus
#define clSetUserEventStatus clSetUserEventStatus_pfn
#undef clUnloadCompiler
#define clUnloadCompiler clUnloadCompiler_pfn
#undef clUnloadPlatformCompiler
#define clUnloadPlatformCompiler clUnloadPlatformCompiler_pfn
#undef clWaitForEvents
#define clWaitForEvents clWaitForEvents_pfn

// generated by parser_cl.py
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clBuildProgram)(cl_program, cl_uint, const cl_device_id*, const char*,
                                                             void(CL_CALLBACK*)(cl_program, void*), void*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clCompileProgram)(cl_program, cl_uint, const cl_device_id*, const char*,
                                                               cl_uint, const cl_program*, const char**,
                                                               void(CL_CALLBACK*)(cl_program, void*), void*);
extern CL_RUNTIME_EXPORT cl_mem(CL_API_CALL* clCreateBuffer)(cl_context, cl_mem_flags, size_t, void*, cl_int*);
extern CL_RUNTIME_EXPORT cl_command_queue(CL_API_CALL* clCreateCommandQueue)(cl_context, cl_device_id,
                                                                             cl_command_queue_properties, cl_int*);
extern CL_RUNTIME_EXPORT cl_context(CL_API_CALL* clCreateContext)(
    const cl_context_properties*, cl_uint, const cl_device_id*,
    void(CL_CALLBACK*)(const char*, const void*, size_t, void*), void*, cl_int*);
extern CL_RUNTIME_EXPORT cl_context(CL_API_CALL* clCreateContextFromType)(const cl_context_properties*, cl_device_type,
                                                                          void(CL_CALLBACK*)(const char*, const void*,
                                                                                             size_t, void*),
                                                                          void*, cl_int*);
extern CL_RUNTIME_EXPORT cl_mem(CL_API_CALL* clCreateImage)(cl_context, cl_mem_flags, const cl_image_format*,
                                                            const cl_image_desc*, void*, cl_int*);
extern CL_RUNTIME_EXPORT cl_mem(CL_API_CALL* clCreateImage2D)(cl_context, cl_mem_flags, const cl_image_format*, size_t,
                                                              size_t, size_t, void*, cl_int*);
extern CL_RUNTIME_EXPORT cl_mem(CL_API_CALL* clCreateImage3D)(cl_context, cl_mem_flags, const cl_image_format*, size_t,
                                                              size_t, size_t, size_t, size_t, void*, cl_int*);
extern CL_RUNTIME_EXPORT cl_kernel(CL_API_CALL* clCreateKernel)(cl_program, const char*, cl_int*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clCreateKernelsInProgram)(cl_program, cl_uint, cl_kernel*, cl_uint*);
extern CL_RUNTIME_EXPORT cl_program(CL_API_CALL* clCreateProgramWithBinary)(cl_context, cl_uint, const cl_device_id*,
                                                                            const size_t*, const unsigned char**,
                                                                            cl_int*, cl_int*);
extern CL_RUNTIME_EXPORT cl_program(CL_API_CALL* clCreateProgramWithBuiltInKernels)(cl_context, cl_uint,
                                                                                    const cl_device_id*, const char*,
                                                                                    cl_int*);
extern CL_RUNTIME_EXPORT cl_program(CL_API_CALL* clCreateProgramWithSource)(cl_context, cl_uint, const char**,
                                                                            const size_t*, cl_int*);
extern CL_RUNTIME_EXPORT cl_sampler(CL_API_CALL* clCreateSampler)(cl_context, cl_bool, cl_addressing_mode,
                                                                  cl_filter_mode, cl_int*);
extern CL_RUNTIME_EXPORT cl_mem(CL_API_CALL* clCreateSubBuffer)(cl_mem, cl_mem_flags, cl_buffer_create_type,
                                                                const void*, cl_int*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clCreateSubDevices)(cl_device_id, const cl_device_partition_property*,
                                                                 cl_uint, cl_device_id*, cl_uint*);
extern CL_RUNTIME_EXPORT cl_event(CL_API_CALL* clCreateUserEvent)(cl_context, cl_int*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueBarrier)(cl_command_queue);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueBarrierWithWaitList)(cl_command_queue, cl_uint, const cl_event*,
                                                                           cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueCopyBuffer)(cl_command_queue, cl_mem, cl_mem, size_t, size_t,
                                                                  size_t, cl_uint, const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueCopyBufferRect)(cl_command_queue, cl_mem, cl_mem, const size_t*,
                                                                      const size_t*, const size_t*, size_t, size_t,
                                                                      size_t, size_t, cl_uint, const cl_event*,
                                                                      cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueCopyBufferToImage)(cl_command_queue, cl_mem, cl_mem, size_t,
                                                                         const size_t*, const size_t*, cl_uint,
                                                                         const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueCopyImage)(cl_command_queue, cl_mem, cl_mem, const size_t*,
                                                                 const size_t*, const size_t*, cl_uint, const cl_event*,
                                                                 cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueCopyImageToBuffer)(cl_command_queue, cl_mem, cl_mem,
                                                                         const size_t*, const size_t*, size_t, cl_uint,
                                                                         const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueFillBuffer)(cl_command_queue, cl_mem, const void*, size_t, size_t,
                                                                  size_t, cl_uint, const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueFillImage)(cl_command_queue, cl_mem, const void*, const size_t*,
                                                                 const size_t*, cl_uint, const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT void*(CL_API_CALL* clEnqueueMapBuffer)(cl_command_queue, cl_mem, cl_bool, cl_map_flags, size_t,
                                                                size_t, cl_uint, const cl_event*, cl_event*, cl_int*);
extern CL_RUNTIME_EXPORT void*(CL_API_CALL* clEnqueueMapImage)(cl_command_queue, cl_mem, cl_bool, cl_map_flags,
                                                               const size_t*, const size_t*, size_t*, size_t*, cl_uint,
                                                               const cl_event*, cl_event*, cl_int*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueMarker)(cl_command_queue, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueMarkerWithWaitList)(cl_command_queue, cl_uint, const cl_event*,
                                                                          cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueMigrateMemObjects)(cl_command_queue, cl_uint, const cl_mem*,
                                                                         cl_mem_migration_flags, cl_uint,
                                                                         const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueNDRangeKernel)(cl_command_queue, cl_kernel, cl_uint,
                                                                     const size_t*, const size_t*, const size_t*,
                                                                     cl_uint, const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueNativeKernel)(cl_command_queue, void(CL_CALLBACK*)(void*), void*,
                                                                    size_t, cl_uint, const cl_mem*, const void**,
                                                                    cl_uint, const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueReadBuffer)(cl_command_queue, cl_mem, cl_bool, size_t, size_t,
                                                                  void*, cl_uint, const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueReadBufferRect)(cl_command_queue, cl_mem, cl_bool, const size_t*,
                                                                      const size_t*, const size_t*, size_t, size_t,
                                                                      size_t, size_t, void*, cl_uint, const cl_event*,
                                                                      cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueReadImage)(cl_command_queue, cl_mem, cl_bool, const size_t*,
                                                                 const size_t*, size_t, size_t, void*, cl_uint,
                                                                 const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueTask)(cl_command_queue, cl_kernel, cl_uint, const cl_event*,
                                                            cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueUnmapMemObject)(cl_command_queue, cl_mem, void*, cl_uint,
                                                                      const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueWaitForEvents)(cl_command_queue, cl_uint, const cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueWriteBuffer)(cl_command_queue, cl_mem, cl_bool, size_t, size_t,
                                                                   const void*, cl_uint, const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueWriteBufferRect)(cl_command_queue, cl_mem, cl_bool, const size_t*,
                                                                       const size_t*, const size_t*, size_t, size_t,
                                                                       size_t, size_t, const void*, cl_uint,
                                                                       const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clEnqueueWriteImage)(cl_command_queue, cl_mem, cl_bool, const size_t*,
                                                                  const size_t*, size_t, size_t, const void*, cl_uint,
                                                                  const cl_event*, cl_event*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clFinish)(cl_command_queue);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clFlush)(cl_command_queue);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetCommandQueueInfo)(cl_command_queue, cl_command_queue_info, size_t,
                                                                    void*, size_t*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetContextInfo)(cl_context, cl_context_info, size_t, void*, size_t*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetDeviceIDs)(cl_platform_id, cl_device_type, cl_uint, cl_device_id*,
                                                             cl_uint*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetDeviceInfo)(cl_device_id, cl_device_info, size_t, void*, size_t*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetEventInfo)(cl_event, cl_event_info, size_t, void*, size_t*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetEventProfilingInfo)(cl_event, cl_profiling_info, size_t, void*,
                                                                      size_t*);
extern CL_RUNTIME_EXPORT void*(CL_API_CALL* clGetExtensionFunctionAddress)(const char*);
extern CL_RUNTIME_EXPORT void*(CL_API_CALL* clGetExtensionFunctionAddressForPlatform)(cl_platform_id, const char*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetImageInfo)(cl_mem, cl_image_info, size_t, void*, size_t*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetKernelArgInfo)(cl_kernel, cl_uint, cl_kernel_arg_info, size_t, void*,
                                                                 size_t*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetKernelInfo)(cl_kernel, cl_kernel_info, size_t, void*, size_t*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetKernelWorkGroupInfo)(cl_kernel, cl_device_id,
                                                                       cl_kernel_work_group_info, size_t, void*,
                                                                       size_t*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetMemObjectInfo)(cl_mem, cl_mem_info, size_t, void*, size_t*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetPlatformIDs)(cl_uint, cl_platform_id*, cl_uint*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetPlatformInfo)(cl_platform_id, cl_platform_info, size_t, void*,
                                                                size_t*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetProgramBuildInfo)(cl_program, cl_device_id, cl_program_build_info,
                                                                    size_t, void*, size_t*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetProgramInfo)(cl_program, cl_program_info, size_t, void*, size_t*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetSamplerInfo)(cl_sampler, cl_sampler_info, size_t, void*, size_t*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clGetSupportedImageFormats)(cl_context, cl_mem_flags, cl_mem_object_type,
                                                                         cl_uint, cl_image_format*, cl_uint*);
extern CL_RUNTIME_EXPORT cl_program(CL_API_CALL* clLinkProgram)(cl_context, cl_uint, const cl_device_id*, const char*,
                                                                cl_uint, const cl_program*,
                                                                void(CL_CALLBACK*)(cl_program, void*), void*, cl_int*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clReleaseCommandQueue)(cl_command_queue);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clReleaseContext)(cl_context);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clReleaseDevice)(cl_device_id);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clReleaseEvent)(cl_event);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clReleaseKernel)(cl_kernel);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clReleaseMemObject)(cl_mem);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clReleaseProgram)(cl_program);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clReleaseSampler)(cl_sampler);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clRetainCommandQueue)(cl_command_queue);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clRetainContext)(cl_context);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clRetainDevice)(cl_device_id);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clRetainEvent)(cl_event);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clRetainKernel)(cl_kernel);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clRetainMemObject)(cl_mem);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clRetainProgram)(cl_program);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clRetainSampler)(cl_sampler);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clSetEventCallback)(cl_event, cl_int,
                                                                 void(CL_CALLBACK*)(cl_event, cl_int, void*), void*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clSetKernelArg)(cl_kernel, cl_uint, size_t, const void*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clSetMemObjectDestructorCallback)(cl_mem,
                                                                               void(CL_CALLBACK*)(cl_mem, void*),
                                                                               void*);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clSetUserEventStatus)(cl_event, cl_int);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clUnloadCompiler)();
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clUnloadPlatformCompiler)(cl_platform_id);
extern CL_RUNTIME_EXPORT cl_int(CL_API_CALL* clWaitForEvents)(cl_uint, const cl_event*);
