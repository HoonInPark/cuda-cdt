cmake_minimum_required(VERSION 3.22)
project(cuda-cdt LANGUAGES CXX)

add_executable(${CMAKE_PROJECT_NAME}
        src/main.cpp)

#########################
########## env ##########
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/find")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/module")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")


#########################
####### submodule #######
set(SubmodulesDir submodules)

# tracy
option(ENABLE_TRACY "Enable Tracy profiling" OFF)
if (ENABLE_TRACY)
    add_library(TracyClient SHARED "${SubmodulesDir}/tracy/public/TracyClient.cpp")
endif ()

# stl parser
add_subdirectory(${SubmodulesDir}/stl_parser)


##########################
######### module #########
include(mesh-generator)
include(ply-loader)


##########################
######### domain #########
include(domain/dt-2d)
