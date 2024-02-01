/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "Triangle.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testMyFunction() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        Triangle triangle1;
        triangle1.SetBase(5);
        triangle1.SetHeight(10);
        double area = triangle1.GetArea();
        TS_ASSERT_DELTA(area, 25, 0.000001);
        triangle1.PrintInfo();


    }

    void testEqualOperator() {
        Triangle triangle1;
        Triangle triangle2;

        triangle1.SetHeight(10);
        triangle1.SetBase(5);

        triangle2.SetHeight(10);
        triangle2.SetBase(5);

        TS_ASSERT(triangle1 == triangle2);
    }

    void testNotEqualOperator() {
        Triangle triangle1;
        Triangle triangle2;

        triangle1.SetHeight(10);
        triangle1.SetBase(5);

        triangle2.SetHeight(5);
        triangle2.SetBase(10);

        TS_ASSERT(triangle1 != triangle2);
    }

    void testLessOperator() {
        Triangle triangle1;
        Triangle triangle2;

        triangle1.SetHeight(5);
        triangle1.SetBase(5);

        triangle2.SetHeight(5);
        triangle2.SetBase(10);

        TS_ASSERT(triangle1 < triangle2);
    }

    void testGEOperator() {
        Triangle triangle1;
        Triangle triangle2;

        triangle1.SetHeight(5);
        triangle1.SetBase(5);

        triangle2.SetHeight(5);
        triangle2.SetBase(10);

        TS_ASSERT(triangle2 >= triangle1);
    }
};
#endif /* NEWCXXTEST_H */
