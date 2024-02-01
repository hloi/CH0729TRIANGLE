/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_newCxxTest_init = false;
#include "..\newCxxTest.h"

static newCxxTest suite_newCxxTest;

static CxxTest::List Tests_newCxxTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_newCxxTest( "C:/Users/hloi/CLionProjects/CSC109/SP24/CH0729TRIANGLE/newCxxTest.h", 21, "newCxxTest", suite_newCxxTest, Tests_newCxxTest );

static class TestDescription_suite_newCxxTest_testMyFunction : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testMyFunction() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 27, "testMyFunction" ) {}
 void runTest() { suite_newCxxTest.testMyFunction(); }
} testDescription_suite_newCxxTest_testMyFunction;

static class TestDescription_suite_newCxxTest_testEqualOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testEqualOperator() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 39, "testEqualOperator" ) {}
 void runTest() { suite_newCxxTest.testEqualOperator(); }
} testDescription_suite_newCxxTest_testEqualOperator;

static class TestDescription_suite_newCxxTest_testNotEqualOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testNotEqualOperator() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 52, "testNotEqualOperator" ) {}
 void runTest() { suite_newCxxTest.testNotEqualOperator(); }
} testDescription_suite_newCxxTest_testNotEqualOperator;

static class TestDescription_suite_newCxxTest_testLessOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testLessOperator() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 65, "testLessOperator" ) {}
 void runTest() { suite_newCxxTest.testLessOperator(); }
} testDescription_suite_newCxxTest_testLessOperator;

static class TestDescription_suite_newCxxTest_testGEOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testGEOperator() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 78, "testGEOperator" ) {}
 void runTest() { suite_newCxxTest.testGEOperator(); }
} testDescription_suite_newCxxTest_testGEOperator;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
