cmake_minimum_required(VERSION 3.17)
project(c_revisit C)

set(CMAKE_C_STANDARD 99)

add_executable(c_revisit main.c)
add_executable(c_revisit_introduction introduction.c)
add_executable(c_revisit_add2integers Add2Integers.c)
add_executable(c_revisit_promptadd2integers PromptAdd2Integers.c)
add_executable(c_revisit_circleComputation CircleComputation.c)
add_executable(c_revisit_testArithmetics TestArithmetics.c)
add_executable(c_revisit_sumOddEven SumOddEven.c)
add_executable(c_revisit_convertTemperature ConvertTemperature.c)
add_executable(c_revisit_testCastingAverage TestCastingAverage.c)
add_executable(c_revisit_population population.c)
add_executable(c_revisit_cash cash.c)

