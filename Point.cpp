#include "Point.h"
#include <cmath>

Point::Point() : x(0), y(0) {};
Point::Point(double x, double y) : x(x), y(y) {};

Point Point::operator+(const Point& other) const
{
    Point p(this->x + other.x, this->y + other.y);
    return p;
}

Point& Point::operator+=(const Point& other)
{
    this->x += other.x;
    this->y += other.y;
    return *this;
}

double Point::distance(Point& other)
{
    return sqrt((this->x)*(other.x) + (this->y)*(other.y)); 
}

double Point::getX() const
{
    return this->x;
}
double Point::getY() const
{
    return this->y;
}