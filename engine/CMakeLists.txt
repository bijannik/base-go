set(SOURCE_FILES board.c board.h boardlib.c clock.c clock.h hash.c hash.h printutils.c)
add_library(Engine STATIC ${SOURCE_FILES})

target_include_directories(Engine PUBLIC ${PROJECT_SOURCE_DIR}/sgf)
target_include_directories(Engine PUBLIC ${PROJECT_SOURCE_DIR}/utils)

target_link_libraries(Engine SGF Utils)
