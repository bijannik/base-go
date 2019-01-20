set(SOURCE_FILES core.c core.h info.h)
add_library(Core STATIC ${SOURCE_FILES})

target_include_directories(Core PUBLIC ${PROJECT_SOURCE_DIR})

set(LIBRARIES Engine)
target_link_libraries(Core ${LIBRARIES})
