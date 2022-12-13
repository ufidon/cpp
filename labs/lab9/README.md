# Problem 1
**Extend MyPoint:** 
The MyPoint class was created to model a point in a two-dimensional space. 

```C++
#include <iostream>
#include <cmath>

using namespace std;

class MyPoint
{
private:
    double x;
    double y;

public:
    MyPoint()
    {
        x = y = 0;
    }

    MyPoint(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    double getx() const
    {
        return x;
    }
    double gety() const
    {
        return y;
    }
    void setx(double x)
    {
        this->x = x;
    }
    void sety(double y)
    {
        this->y = y;
    }

    virtual double distance(const MyPoint &p2)
    {
        return sqrt((x - p2.x) * (x - p2.x) + (y - p2.y) * (y - p2.y));
    }

    friend istream &operator>>(istream &is, MyPoint &p);
    friend ostream &operator<<(ostream &os, const MyPoint &p);
};

istream &operator>>(istream &is, MyPoint &p)
{
    cout << "please enter x y: ";
    is >> p.x >> p.y;
    return is;
}
ostream &operator<<(ostream &os, const MyPoint &p)
{
    cout << "(x,y)="
         << "(" << p.x << "," << p.y << ")";
    return os;
}
```

The MyPoint class has the properties x and y that represent x- and y-coordinates, two get and two set functions for x and y, the virtual function for returning the 

$$distance =\sqrt{(x_1 − x_2)^2 + (y_1 − y_2)^2}$$

between two points, friend extraction operator («) and friend insertion operator (»).


**Create a class named ThreeDPoint** to model a point in a three-dimensional space. Let ThreeDPoint be derived from MyPoint with the following additional features:

* A data field named z that represents the z-coordinate.
* A no-arg constructor that constructs a point with coordinates (0, 0, 0).
* A constructor that constructs a point with three specified coordinates.
* A constant get function that returns the z value.
* A constant distance(const MyPoint& p) function to return the distance between this point and the other point in the three-dimensional space using dynamic casting.
  * If a ThreeDPoint object p passed into the distance function, 
    $$distance = \sqrt{(x_1 − x_2)^2 + (y_1 − y_2)^2 + (z_1 − z_2)^2}$$
  * If a MyPoint object p passed into the distance function, 
    $$distance = \sqrt{(x_1 − x_2)^2 + (y_1 − y_2)^2 + (z_1 − 0)^2}$$
i.e. create a ThreeDPoint object out of p by setting its z to be 0.

Write a test program that prints as the sample output below.



