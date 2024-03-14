cmake_minimum_required(VERSION 3.10)

project(week3)

find_package(OpenGL REQUIRED)

option(FREEGLUT_BUILD_DEMOS OFF)
option(FREEGLUT_BUILD_SHARED_LIBS OFF)

add_subdirectory(src)
include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/main.c ${SOURCES})

target_include_directories(${PROJECT_NAME}
    PUBLIC ${CMAKE_SOURCE_DIR}/src # Project-wide include dir
    PRIVATE ${SRC_INCLUDE_DIRS})

# target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/ ${SRC_INCLUDE_DIRS})
add_subdirectory(lib)

target_link_libraries(${PROJECT_NAME} PUBLIC freeglut_static)