cmake_minimum_required(VERSION 3.5)
project(Multithreading)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp AnimalDataProvider.cpp DataProvider.cpp)

add_executable(Multithreading ${SOURCE_FILES})
target_link_libraries(Multithreading pthread)