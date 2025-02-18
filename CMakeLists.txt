cmake_minimum_required(VERSION 3.30)
project(LogikutchWish)

set(CMAKE_CXX_STANDARD 20)

set(SFML_DIR "SFML-3.0.0")

find_package(SFML 3 REQUIRED COMPONENTS Graphics System)

add_executable(LogikutchWish main.cpp)

target_link_libraries(LogikutchWish PRIVATE SFML::Graphics SFML::System)

