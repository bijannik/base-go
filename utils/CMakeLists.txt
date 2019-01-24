# Utils Library
set(SOURCE_FILES config.h gg_utils.c gg_utils.h random.c random.h)
add_library(Utils STATIC ${SOURCE_FILES})

# Log Library
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREAD OFF)
set(Boost_COMPILE_DEFINITIONS BOOST_LOG_DYN_LINK)
find_package(Boost 1.67.0 REQUIRED COMPONENTS log)

set(Log_SOURCE_FILES log.h log.cpp)
add_library(Log STATIC ${Log_SOURCE_FILES})

target_include_directories(Log PUBLIC ${Boost_INCLUDE_DIRS})
target_compile_definitions(Log PUBLIC ${Boost_COMPILE_DEFINITIONS})
target_link_libraries(Log ${Boost_LIBRARIES})
