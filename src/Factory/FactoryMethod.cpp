//
// Created by toor on 6/26/18.
//

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

#include "FactoryMethod.h"

Point Point::NewCartesian(float x, float y)
{
    return {x,y};
}

Point Point::NewPolar(float r, float theta)
{
    return{r*cos(theta),r*sin(theta)};
}

//std::ostream& Point::operator<<(std::ostream &os, const Point &obj)
//{
//    return os << "x: " << obj.x << "y: " << obj.y ;
//}

Point::Point(const float x, const float y):
    x{x},y{y}
{
}
