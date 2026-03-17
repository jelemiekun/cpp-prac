cmake_minimum_required(VERSION 3.20)

project (Practicing LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(exeName myExe)

add_library(GSF src/Timer.cpp src/GTN.cpp src/Util.cpp) # Game Source Files

add_executable(${exeName} src/main.cpp)

target_link_libraries(${exeName} PRIVATE GSF)

target_include_directories(GSF PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
