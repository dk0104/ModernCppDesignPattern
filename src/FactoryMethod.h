//
// Created by toor on 6/26/18.
//

#ifndef MODERNCPPDESIGNPATTERN_FACTORYMETHOD_H
#define MODERNCPPDESIGNPATTERN_FACTORYMETHOD_H

class Point
{
    public:
    static Point NewCartesian(float x ,float y);
    static Point NewPolar(float r, float theta);
    //friend std::ostream& operator<<(std::ostream& os,const Point& obj);
    float x, y;

    private:
    Point(const float x,const float y);
};

#endif //MODERNCPPDESIGNPATTERN_FACTORYMETHOD_H
