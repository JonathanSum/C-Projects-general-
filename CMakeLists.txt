cmake_minimum_required(VERSION 3.13)
project(3A)

set(CMAKE_CXX_STANDARD 14)

#add_executable(3A main.cpp t1.cpp t1.h cmake-build-debug/Rational.h Rational.h Rational.cpp Rational.h)
#add_executable(3A main.cpp Date.cpp Date.h)
add_executable(3A main.cpp bboard.cpp bboard.h user.cpp user.h message.cpp message.h)