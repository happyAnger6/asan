cmake_minimum_required(VERSION 2.8)

project(asan_tutorial)

#set(ASAN_CFLAGS "-fsanitize=address" )
#set(ASAN_LDFLAGS "-fsanitize=address -g1")
#set(CMAKE_C_FLAGS "${ASAN_CFLAGS}")

add_subdirectory(double_free)

#add_library(func1 SHARED func1.c)
#target_link_libraries(func1 func2)
#add_library(func2 SHARED func2.c)

add_executable(asan_test asan_test.c)
#target_link_libraries(asan_test func1)
