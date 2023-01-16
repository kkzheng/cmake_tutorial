cmake_minimum_required(VERSION 3.15)

project(pro_name)

# find all source file
aux_source_directory(. DIR_SRCS)

add_executable(exe_name ${DIR_SRCS})
