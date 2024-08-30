cmake_minimum_required(VERSION 3.5)

project(app)

include_directories(lib)
include_directories(samples)


add_subdirectory(lib)

file(GLOB SRCS "samples/*.c")

add_executable(app main.c ${SRCS})
target_link_libraries(app libc)
