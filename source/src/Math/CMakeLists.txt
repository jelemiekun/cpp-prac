message(STATUS "Reading ${CMAKE_CURRENT_LIST_FILE}...")

add_library(Math ${CMAKE_CURRENT_SOURCE_DIR}/Math.cpp)
target_include_directories(Math PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(MathTest ${CMAKE_CURRENT_SOURCE_DIR}/MathTest.cpp)
target_include_directories(MathTest PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(MathTest Math)

if (TARGET MathTest)
  message(STATUS "MathTest target exists!")
  add_custom_target(MathTester ALL
    COMMAND MathTest "robert"
    COMMENT "Testing Math lib..."
    BYPRODUCTS math.dat
    USES_TERMINAL
    VERBATIM
  )
else()
  message(WARNING "MathTest target does not exist!")
endif()
