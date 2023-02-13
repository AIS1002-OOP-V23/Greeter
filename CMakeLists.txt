cmake_minimum_required(VERSION 3.15)
project(greeter)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)


add_executable(main main.cpp)
target_link_libraries(main PUBLIC greeter)

add_executable(main2 main2.cpp )
target_link_libraries(main2 PUBLIC greeter)
