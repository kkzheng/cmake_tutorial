cmake_minimum_required(VERSION 3.15)

project(pro_name)

# find all source file
# aux_source_directory(. DIR_SRCS)

# add sub directory
add_library(my_power my_power.cc)
target_include_directories(my_power PUBLIC ${CMAKE_SOURCE_DIR}/my_math)

add_executable(exe_name main.cc)

target_link_libraries(exe_name my_power)
