get_filename_component(MODULE_NAME ${CMAKE_CURRENT_LIST_FILE} NAME_WE)
message(STATUS "Configuring for ${MODULE_NAME}")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/module")

######## library ########
include(cuda)

target_sources(${CMAKE_PROJECT_NAME} PRIVATE
        src/DT2D.cpp
)