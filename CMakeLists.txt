cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

set(PROJ_NAME "cross_os_mmap")
project (${PROJ_NAME})

set(PROJECT_ROOT_DIR ${PROJECT_SOURCE_DIR})

add_executable(${PROJ_NAME} "${PROJECT_ROOT_DIR}/cross_os_mmap.cpp")