cmake_minimum_required(VERSION 2.8.5)
project(cmake-helloworld)

add_subdirectory(lib/glfw EXCLUDE_FROM_ALL)

file(GLOB_RECURSE CODE
	${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/glfw/include)

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(main glfw ${GLFW_LIBRARIES})