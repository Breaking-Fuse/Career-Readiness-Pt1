// CareerReadinessPt1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// by David Castillo

#include <iostream>

struct Rect {
    float minX;
    float minY;
    float maxX;
    float maxY;
};

float DistanceToRect(float x, float y, Rect& rect) {
    

    float x_ = 0; // distance of x to min/max X
    float y_ = 0; // distance of y to min/max Y

    // x is greater than top of rectangle
    if (x > rect.maxX) x_ = x - rect.maxX;
    // x is less than bottom of rectangle
    else if (x < rect.minX) x_ = rect.minX - x;
    //x is located exactly at top, bottom, or inside the rectangle
    else {
        x_ = 0;
    }

    // y is greater than top of rectangle
    if (y > rect.maxY) y_ = y - rect.maxY;
    // y is less than bottom of rectangle
    else if (y < rect.minY) y_ = rect.minY - y;
    // y is located exactly at top, bottom, or inside the rectangle
    else {
        y_ = 0;
    }

    //average of x and y's distance
    std::cout << "x's Distance:" << x_ << std::endl;
    std::cout << "y's Distance:" << y_ << std::endl;
    //if x or y was equal to respective min/max, only add distance of other value
    if (x_ == 0 && y_ != 0) return y_;
    else if (y_ == 0 && x_ != 0) return x_;
    else {
        return (x_ + y_) / 2;
    }
};

int main()
{
    Rect rectangle;
    int x, y;

    //TO DO: Randomize rectangle and (x,y) coordinate
    rectangle.minX = -500;
    rectangle.minY = -250;
    rectangle.maxX = 500;
    rectangle.maxY = 250;
    x = 505;
    y = 255;

    std::cout << "Point" <<"("<< x << "," << y <<")"<< "\'s Distance to Rectangle: " << DistanceToRect(x, y, rectangle) << std::endl;

}