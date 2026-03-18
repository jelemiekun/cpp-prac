cmake_minimum_required(VERSION 3.20)

project (Practicing LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(exeName myExe)

add_subdirectory(src/Sandbox/glad)
add_subdirectory(src/Sandbox/System)

add_executable(${exeName} src/main.cpp)
target_include_directories(${exeName} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(${exeName} PRIVATE glad System)
