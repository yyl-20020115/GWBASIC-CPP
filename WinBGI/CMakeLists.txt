cmake_minimum_required(VERSION 3.10)
project(WinBGI VERSION 4.0.0 LANGUAGES CXX)
 
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
 
set(CMAKE_GENERATOR_PLATFORM Win32)
 
add_library(WinBGI
    graphics.h
    winbgi.cxx
)
 
target_include_directories(WinBGI PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)