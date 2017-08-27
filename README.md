# Multithreading

Demonstrates C++11 and onwards capabilities for std::thread and std::mutex usage in concurrent programming. Also demonstrates usage of std::unique_ptr and std::choro.

Uses CMake build system.

## Build instructions

$ git clone https://github.com/selesnie/Multithreading.git

$ cd Multithreading

$ mkdir build

$ cd build

$ cmake ..

$ make -j$(nproc)
