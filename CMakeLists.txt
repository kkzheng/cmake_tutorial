cmake_minimum_required(VERSION 3.15)

project(pro_name)

# find all source file
 aux_source_directory(. DIR_SRCS)

# add sub directory
add_subdirectory(my_math)

add_executable(exe_name main.cc)
# add .h file find path
target_include_directories(exe_name PUBLIC ${CMAKE_SOURCE_DIR}/my_math)

target_link_libraries(exe_name my_power)
