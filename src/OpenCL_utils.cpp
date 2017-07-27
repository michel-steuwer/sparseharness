#include "OpenCL_utils.h"
cl::Context OpenCL::context;
cl::CommandQueue OpenCL::queue;
std::vector<cl::Device> OpenCL::devices;

std::size_t OpenCL::device_max_workgroup_size;
std::vector<size_t> OpenCL::device_max_work_item_sizes;

cl_ulong OpenCL::device_local_mem_size;

int OpenCL::iterations;