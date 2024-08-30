file(GLOB LIB_SRCS *.c)

add_library(libc OBJECT ${LIB_SRCS})