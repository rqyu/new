cmake_minimum_required(VERSION 3.9)
project(classnotes)

set(CMAKE_CXX_STANDARD 11)

add_executable(classnotes main.cpp GameCharacter.cpp GameCharacter.h Monster.cpp Monster.h Vampire.cpp Vampire.h)