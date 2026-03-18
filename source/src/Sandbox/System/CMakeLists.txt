message(STATUS "Reading src\/Sandbox\/System folder")
add_library(System System.cpp)
target_include_directories(System PUBLIC "${CMAKE_SOURCE_DIR}/include")
