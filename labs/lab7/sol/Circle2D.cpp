#include "Circle2D.h"

// 3) A static int data field numberOfCircles with a static get function getNumberOfCircles().
int Circle2D::numberOfCircles = 0;

// 4) A constructor that creates a circle with the specified x, y, and radius.
Circle2D::Circle2D(double x1, double y1, double radius1) : x(x1), y(y1), radius(radius1)
{
    numberOfCircles++;
}

// 5) A copy constructor Circle2D(const Circle2D & circle) that creates a circle with a given Circle2D object
Circle2D::Circle2D(const Circle2D &circle)
{
    x = circle.x;
    y = circle.y;
    radius = circle.radius;

    numberOfCircles++;
}

// 6) A destructor that updates numberOfCircles data field.
Circle2D::~Circle2D()
{
    numberOfCircles--;
}

// 1) constant get functions for the center coordinate of the circle
double Circle2D::getx() const
{
    return x;
}
double Circle2D::gety() const
{
    return y;
}
// 2) a constant get function for the radius
double Circle2D::getradius() const
{
    return radius;
}

// 3) a static get function getNumberOfCircles() for the static int data field numberOfCircles
int Circle2D::getNumberOfCircles()
{
    return numberOfCircles;
}

// 7) A constant function overlaps(const Circle2D& circle) that returns true if the specified circle overlaps with this circle.
bool Circle2D::overlaps(const Circle2D& circle) const
{
    return ( sqrt((x-circle.x)*(x-circle.x) + (y-circle.y)*(y-circle.y)) < (radius+circle.radius) );
}