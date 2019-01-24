cmake_minimum_required(VERSION 3.12)
project("Base Go")

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(core)
add_subdirectory(engine)
add_subdirectory(gtp)
add_subdirectory(sgf)
add_subdirectory(utils)

add_executable(BaseGo main.cpp)
target_include_directories(BaseGo PUBLIC ${PROJECT_SOURCE_DIR})
target_link_libraries(BaseGo GTP Log)
