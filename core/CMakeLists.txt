set(SOURCE_FILES core.cpp core.h info.h)
add_library(Core STATIC ${SOURCE_FILES})

set(LIBRARIES Engine)
if (LOGGER_ENABLED)
    list(APPEND LIBRARIES Log)
endif (LOGGER_ENABLED)

target_include_directories(Core PUBLIC ${PROJECT_SOURCE_DIR})
target_link_libraries(Core ${LIBRARIES})
