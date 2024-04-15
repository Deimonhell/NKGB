cmake_minimum_required(VERSION 3.2)

project(NKGB)

set(CMAKE_CXX_FLAFS "${CMAKE_FLAFS} -std=c++14")

file(GLOB
	SRC "./src/*.cpp")

add_executable(${PROJECT_NAME} ${SRC})