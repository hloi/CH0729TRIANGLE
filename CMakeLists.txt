cmake_minimum_required(VERSION 3.27)
project(CH0729TRIANGLE)

set(CMAKE_CXX_STANDARD 17)

set(CXXTEST_INCLUDE_DIR c:/cxxtest-4.4)

set(CXXTEST_PYTHON_TESTGEN_EXECUTABLE c:/cxxtest-4.4/bin/cxxtestgen)

find_package(CxxTest REQUIRED)

if(CXXTEST_FOUND)
    include_directories(${CXXTEST_INCLUDE_DIR})
    enable_testing()

    CXXTEST_ADD_TEST(unittest
            runner.cpp  # THIS IS GENERATED BUT YOU NEED TO ADD IT HERE
            ${CMAKE_CURRENT_SOURCE_DIR}/Triangle.cpp  # add source files
            ${CMAKE_CURRENT_SOURCE_DIR}/newCxxTest.h  # YOUR TEST DESCRIPTION FILE
    )

endif()

add_executable(CH0729TRIANGLE runner.cpp
        Triangle.cpp
        Triangle.h
        newCxxTest.h)
