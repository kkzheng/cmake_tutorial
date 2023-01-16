cmake_minimum_required(VERSION 3.15)

project(pro_name)

configure_file(
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${PROJECT_SOURCE_DIR}/config.h"
)

option (USE_MYMATH "Use provided math implementation" ON)

if (USE_MYMATH)
  # add sub directory
  include_directories("${PROJECT_SOURCE_DIR}/my_math")
  add_subdirectory(my_math)
  set(EXTRA_LIBS ${EXTRA_LIBS} my_power)
endif (USE_MYMATH)

# find all source file
aux_source_directory(. DIR_SRCS)

add_executable(exe_name main.cc)
# add .h file find path
#target_include_directories(exe_name PUBLIC ${CMAKE_SOURCE_DIR}/my_math)

target_link_libraries(exe_name ${EXTRA_LIBS})

# make build & cd build & cmake .. -DUSE_MYMATH=ON
