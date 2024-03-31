cmake_minimum_required(VERSION 3.10)
project(seaView)

add_executable(seaView main.cpp)

target_link_libraries(seaView gtest)