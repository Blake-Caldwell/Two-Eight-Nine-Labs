cmake_minimum_required(VERSION 3.10)

# Project Name
project(week1)

# Source Files
add_executable(week1 main.c OFF_IO.c)

# Data Folder Copying (during build)
add_custom_command(TARGET week1 POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/data
    ${CMAKE_BINARY_DIR}/data
)
