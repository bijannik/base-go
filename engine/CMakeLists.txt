include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/gtp)
include_directories(${PROJECT_SOURCE_DIR}/sgf)
include_directories(${PROJECT_SOURCE_DIR}/utils)

set(SOURCE_FILES board.c board.h boardlib.c clock.c clock.h hash.c hash.h printutils.c)
add_library(Engine ${SOURCE_FILES})
