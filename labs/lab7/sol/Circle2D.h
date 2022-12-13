#ifndef _CIRCLE2D_
#define _CIRCLE2D_

#include <iostream>
#include <cmath>

using namespace std;

class Circle2D
{
private:
    /* data */
    // 1) Two private double data fields named x and y that specify the center of the circle with constant get functions.
    double x;
    double y;
    // 2) A double data field radius with a constant get function.
    double radius;
    // 3) A static int data field numberOfCircles with a static get function getNumberOfCircles().
    static int numberOfCircles;

public:
    // 4) A constructor that creates a circle with the specified x, y, and radius.
    Circle2D(double x1, double y1, double radius1);
    // 5) A copy constructor Circle2D(const Circle2D & circle) that creates a circle with a given Circle2D object
    Circle2D(const Circle2D &circle);
    // 6) A destructor that updates numberOfCircles data field.
    ~Circle2D();

    // 1) constant get functions for the center coordinate of the circle
    double getx() const;
    double gety() const;
    // 2) a constant get function for the radius
    double getradius() const;

    // 3) a static get function getNumberOfCircles() for the static int data field numberOfCircles
    static int getNumberOfCircles();

    // 7) A constant function overlaps(const Circle2D& circle) that returns true if the specified circle overlaps with this circle.
    bool overlaps(const Circle2D& circle) const;
};


#endif // _CIRCLE2D_