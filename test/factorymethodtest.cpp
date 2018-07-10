#include "gtest/gtest.h"
#include "Factory/FactoryMethod.h"

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
        auto result_x = 5*cos(M_PI_4);

        EXPECT_FLOAT_EQ(point.x,result_x);
    }
}

