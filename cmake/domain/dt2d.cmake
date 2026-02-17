get_filename_component(MODULE_NAME dt2d.cmake NAME_WE)
message(STATUS "Configuring for ${MODULE_NAME}")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/module")

target_sources(${CMAKE_PROJECT_NAME} PRIVATE
        src/DT2D.cpp
)

######## library ########
include(cuda)
