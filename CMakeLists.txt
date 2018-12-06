cmake_minimum_required(VERSION 3.0)

project(lrc_parser VERSION 1.0.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

include_directories(single_include)

set(SOURCES
  main.cpp
)

add_executable(
    ${PROJECT_NAME}
    ${SOURCES}
)


