cmake_minimum_required(VERSION 2.8)
project(testSerialize)
include_directories("${PROJECT_SOURCES_DIR}/../library")
message(status "${PROJECT_SOURCES_DIR}")
message(status "Hello")
#add_subdirectory(library)
set(sources appMain.cpp
	Person.cpp
	)
set(headers Person.h)
add_executable(testSerialize
	${sources}
	${headers}
	)
