set(ASAN_CFLAGS "-fsanitize=address" )
set(ASAN_LDFLAGS "-fsanitize=address -g1")
set(CMAKE_C_FLAGS "${ASAN_CFLAGS}")

add_executable(double_free double_free.c)
