#include "gtest/gtest.h"
#include "FactoryMethod.h"

#include <cmath>

namespace TestSuit {
    class FactoryMethodTest: public ::testing::Test
    {
    protected:
        virtual void SetUp(){};
        virtual void TearDown(){};
    };

    TEST_F(FactoryMethodTest,GetDegreeCoord){
        auto point = Point::NewPolar(5,M_PI_4);
        EXPECT_EQ(point.x,3.53553);
        EXPECT_EQ(point.y,3.53553);
    }
}

