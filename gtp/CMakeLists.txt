include_directories("${CMAKE_CURRENT_SOURCE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/core")
include_directories("${PROJECT_SOURCE_DIR}/engine")
include_directories("${PROJECT_SOURCE_DIR}/utils")

set(SOURCE_FILES gtp.c gtp.h play_gtp.c)
add_library(GTP ${SOURCE_FILES})
