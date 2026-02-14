# --- CUDNN ---
find_package(CUDNN)

if (CUDNN_FOUND)
    message(STATUS "CUDNN Version: ${CUDNN_VERSION}")

    target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE
            ${CUDNN_INCLUDE_PATH}
    )
    target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE
            ${CUDNN_LIBRARY_PATH}
    )
else ()
    message(FATAL_ERROR "CUDNN not found")
endif ()
