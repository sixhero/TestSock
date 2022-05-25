cmake_minimum_required(VERSION 3.22.0)

project(TestSock)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(subproject)

add_subdirectory(src)

#add_subdirectory(subproject)

