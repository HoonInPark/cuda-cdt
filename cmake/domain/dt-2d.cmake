get_filename_component(MODULE_NAME dt-2d.cmake NAME_WE)
message(STATUS "Configuring for ${MODULE_NAME}")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/module")

add_executable(${CMAKE_PROJECT_NAME}
        src/main.cpp
        src/dt-2d.h
        src/stl-generator.cpp
        src/ply-loader.cpp
)


#########################
######## library ########
include(cuda)
