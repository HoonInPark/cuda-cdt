get_filename_component(MODULE_NAME dt-2d.cmake NAME_WE)
message(STATUS "Configuring for ${MODULE_NAME}")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/module")

target_sources(${CMAKE_PROJECT_NAME} PRIVATE
        src/dt-2d.cpp
)


#########################
######## library ########
include(cuda)
