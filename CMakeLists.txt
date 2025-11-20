cmake_minimum_required(VERSION 4.0)
project(idolTrainerGame)

set(CMAKE_CXX_STANDARD 26)

add_executable(idolTrainerGame src/main.cpp
        src/Idol.cpp
        src/Idol.h
        src/Shu.cpp
        src/Shu.h
        src/Miria.cpp
        src/Miria.h
        src/Yamato.cpp
        src/Yamato.h)
