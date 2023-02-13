cmake_minimum_required(VERSION 3.15)
project(greeter)

set(CMAKE_CXX_STANDARD 17)


add_executable(main main.cpp)
target_include_directories(main PUBLIC "${CMAKE_SOURCE_DIR}/include")

add_executable(main2 main2.cpp )
target_include_directories(main2 PUBLIC "${CMAKE_SOURCE_DIR}/include")
