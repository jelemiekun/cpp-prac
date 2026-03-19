cmake_minimum_required(VERSION 3.20)

project(MyProject LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(${CMAKE_SOURCE_DIR}/src/Math)

add_executable(myExe src/main.cpp)
target_link_libraries(myExe Math)
