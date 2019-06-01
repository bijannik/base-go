# Utils Library
set(SOURCE_FILES config.h gg_utils.c gg_utils.h random.c random.h)
add_library(Utils STATIC ${SOURCE_FILES})

# Log Library
if (LOGGER_ENABLED)
    set(Log_SOURCE_FILES log.h log.cpp)
    add_library(Log STATIC ${Log_SOURCE_FILES})

    target_include_directories(Log PUBLIC ${PROJECT_SOURCE_DIR} ${Boost_INCLUDE_DIRS})
    target_compile_definitions(Log PUBLIC ${Boost_COMPILE_DEFINITIONS})
    target_link_libraries(Log ${Boost_LIBRARIES})
endif (LOGGER_ENABLED)
