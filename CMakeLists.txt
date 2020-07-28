cmake_minimum_required(VERSION 3.16)
project(snake_game)

set(CMAKE_CXX_STANDARD 17)
set(SFML_DIR "/usr/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS graphics audio system window REQUIRED)

add_executable(snake_game src/main.cpp src/StartScreen.cpp src/StartScreen.h src/temp.cpp)

target_link_libraries(snake_game sfml-graphics sfml-audio sfml-system sfml-window)