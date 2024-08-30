cmake_minimum_required(VERSION 3.5)

project(app)

include_directories(lib)
include_directories(samplse)


add_subdirectory(lib)

file(GLOB SRCS "samples")

add_executable(app main.c ${SRCS})
link_libraries(app)