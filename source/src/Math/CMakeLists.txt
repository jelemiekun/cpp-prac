message(STATUS "Reading math library...")

add_library(Math "${CMAKE_CURRENT_SOURCE_DIR}/Math.cpp")
target_include_directories(Math PUBLIC "${CMAKE_SOURCE_DIR}/include/Math")
