get_filename_component(MODULE_NAME ${CMAKE_CURRENT_LIST_FILE} NAME_WE)
message(STATUS "Configuring for ${MODULE_NAME}")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/module")

include(ply-loader)
include(mesh-generator)
