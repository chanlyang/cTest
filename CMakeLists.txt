cmake_minimum_required(VERSION 3.17)
project(cTest C)

set(CMAKE_C_STANDARD 11)

add_executable(cTest main.c number_type.c variable.c constant.c access_modifer.c array.c enum.c)