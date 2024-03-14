add_subdirectory(freeglut)

target_include_directories(${PROJECT_NAME} SYSTEM PUBLIC
    freeglut/include)