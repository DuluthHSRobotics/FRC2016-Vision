cmake_minimum_required(VERSION 2.8)
project(FRCVision)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

subdirs(NetworkTables Vision)

