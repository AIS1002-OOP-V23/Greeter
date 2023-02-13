
add_library(greeter greeter/Greeter.cpp)
target_include_directories(greeter PUBLIC "${CMAKE_SOURCE_DIR}/include")
