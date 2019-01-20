set(SGFGen_SOURCE_FILES sgfgen.c)
add_executable(SGFGen ${SGFGen_SOURCE_FILES})

set(SGF_SOURCE_FILES sgf_properties.h sgf_utils.c sgfnode.c sgftree.c sgftree.h)
add_library(SGF STATIC ${SGF_SOURCE_FILES})
target_include_directories(SGF PRIVATE ${PROJECT_SOURCE_DIR}/utils)
target_link_libraries(SGF Utils)
