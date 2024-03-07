cmake_minimum_required(VERSION 3.10)

project(week1)

add_executable(week1 main.c file_IO.c OFF_IO.c)

add_executable(week1_tests test/test_main.c test/test_cases.c)

# copy over data directory to build
add_custom_command(TARGET week1 POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/data
    ${CMAKE_BINARY_DIR}/data
)
