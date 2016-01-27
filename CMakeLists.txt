cmake_minimum_required(VERSION 3.3)
project(buzzwords)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp resources/buzzwords.txt Provider/BuzzwordProvider.cpp Provider/BuzzwordProvider.h Formatter/BuzzwordStringFormatter.cpp Formatter/BuzzwordStringFormatter.h Counter/BuzzwordCounter.cpp Counter/BuzzwordCounter.h Counter/WordCounter.cpp Counter/WordCounter.h Calculator/BuzzwordPercentCalculator.cpp Calculator/BuzzwordPercentCalculator.h)
add_executable(buzzwords ${SOURCE_FILES})
