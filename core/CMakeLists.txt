include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/engine)

set(SOURCE_FILES core.c core.h info.h)
add_library(Core ${SOURCE_FILES})
