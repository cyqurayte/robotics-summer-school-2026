cmake_minimum_required(VERSION 3.10)
project(my_robot)

add_executable(my_robot main.cpp)
target_link_libraries(my_robot robot_control_ffi pthread dl)
