cmake_minimum_required(VERSION 3.22)
project(cuda-cdt LANGUAGES CXX)

add_executable(cuda-cdt src/cpp/main.cpp)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/find")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(cuda)
include(cudnn)
include(tensorrt)

####### submodule #######
option(ENABLE_TRACY "Enable Tracy profiling" OFF)

set(SubmodulesDir submodules)
add_subdirectory(${SubmodulesDir}/stl_parser)

if (ENABLE_TRACY)
    add_library(TracyClient SHARED "${SubmodulesDir}/tracy/public/TracyClient.cpp")
endif ()

######## project ########
include(cdt)
