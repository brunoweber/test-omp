cmake_minimum_required(VERSION 3.5.1)

project(omp)

set(CFLAGS ${CMAKE_C_FLAGS})

find_package(OpenMP REQUIRED)
if(NOT OpenMP_FOUND)
  message(FATAL "OpenMP not found")
endif()

set(CMAKE_C_FLAGS ${CFLAGS})

add_executable(test-mono test.c)

set(CMAKE_C_FLAGS "${CFLAGS} -fopenmp")

add_executable(test-omp test_omp.c)

