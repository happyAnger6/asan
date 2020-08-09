cmake_minimum_required(VERSION 2.8)

project(asan_tutorial)

set(ASAN_CFLAGS "-fsanitize=address" )
set(ASAN_LDFLAGS "-fsanitize=address -g1")
set(CMAKE_C_FLAGS "${ASAN_CFLAGS}")
set(CMAKE_C_LDFLAGS "${ASAN_LDFLAGS}")

add_subdirectory(double_free)
add_subdirectory(use_after_free)
add_subdirectory(libs)

include_directories(include)
add_executable(asan_test asan_test.c)
target_link_libraries(asan_test asan_mem)
