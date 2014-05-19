cmake_minimum_required(VERSION 2.8.5)
project(cmake-helloworld)

set(BUILD_SHARED_LIBS OFF)
set(GLFW_BUILD_EXAMPLES OFF)
set(GLFW_BUILD_TESTS OFF)
set(GLFW_BUILD_DOCS OFF)
set(GLFW_INSTALL OFF)
set(GLFW_DOCUMENT_INTERNALS OFF)
add_subdirectory(lib/glfw EXCLUDE_FROM_ALL)

file(GLOB_RECURSE CODE
	${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

#add_library(cmake-helloworld STATIC
#	${CODE}
#)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/glfw/include)

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(main glfw ${GLFW_LIBRARIES})