cmake_minimum_required(VERSION 3.10)
 
project(GWBASIC VERSION 1.0)

add_definitions(-D_CRT_SECURE_NO_WARNINGS)

include_directories(. WinBGI)

add_subdirectory(WinBGI)

add_executable(GWBASIC
    ptoc.h
    cio.h
    array.h
    paslib.h
    GWBASIC.h
    conio2.h
    set.c
    cio.c
    paslib.c
    conio.c
    GWBASIC.cxx
    UTILS.cxx
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_GENERATOR_PLATFORM Win32)

target_link_libraries(GWBASIC PRIVATE WinBGI)

