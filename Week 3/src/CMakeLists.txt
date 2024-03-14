add_subdirectory(Camera)
add_subdirectory(OFF)
add_subdirectory(Math)

SET(SOURCES
    ${CAMERA_SRC}
    ${IO_SRC}
    ${MATH_SRC}
    ${OFF_SRC}
    PARENT_SCOPE)

SET(SRC_INCLUDE_DIRS
    ${CAMERA_INCLUDE_DIR}
    ${IO_INCLUDE_DIR}
    ${MATH_INCLUDE_DIR}
    ${OFF_INCLUDE_DIR}
    PARENT_SCOPE
)