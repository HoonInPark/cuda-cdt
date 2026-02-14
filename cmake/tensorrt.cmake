# --- TensorRT ---
find_package(TensorRT)

if (TensorRT_FOUND)
    message(STATUS "TensorRT Version: ${TensorRT_VERSION_STRING}")

    target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE
            ${TensorRT_INCLUDE_DIRS}
    )
    target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE
            ${TensorRT_LIBRARIES}
    )
else ()
    message(FATAL_ERROR "TensorRT not found")
endif ()
