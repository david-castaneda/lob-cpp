cmake_minimum_required(VERSION 3.25)
project(lob LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)  # helps clangd / editor tooling

add_executable(lob src/main.cpp src/book.cpp)
target_include_directories(lob PRIVATE include)
target_compile_options(lob PRIVATE -Wall -Wextra -Wpedantic -Wno-unused-parameter)