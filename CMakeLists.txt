cmake_minimum_required(VERSION 3.21.2)
project(set6)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
add_executable(app main.cpp player.cpp)

target_link_libraries(app PRIVATE Qt6::Widgets)
