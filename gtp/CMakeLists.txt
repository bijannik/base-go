set(SOURCE_FILES gtp.c gtp.h play_gtp.c)
add_library(GTP STATIC ${SOURCE_FILES})

target_include_directories(GTP PUBLIC ${PROJECT_SOURCE_DIR}/core)
target_include_directories(GTP PUBLIC ${PROJECT_SOURCE_DIR}/engine)
target_include_directories(GTP PUBLIC ${PROJECT_SOURCE_DIR}/utils)

target_link_libraries(GTP Core Engine Utils)
