/*
Define the Rectangle2D class that contains:
• Two double data fields named x and y that specify the center of the rectangle with
constant get and set functions. (Assume that the rectangle sides are parallel to x- or yaxes.)
• The double data fields width and height with constant get and set functions.
• A no-arg constructor that creates a default rectangle with (0, 0) for (x, y) and 1 for both
width and height.
• A constructor that creates a rectangle with the specified x, y, width, and height.
• A constant function contains(double x, double y) that returns true if the specified point
(x, y) is inside this rectangle. See Figure a.
• A constant function contains(const Rectangle2D &r) that returns true if the specified
rectangle is inside this rectangle. See Figure b.
• A constant function overlaps(const Rectangle2D &r) that returns true if the specified
rectangle overlaps with this rectangle. See Figure c
*/

#include <iostream>
using namespace std;

class Rectangle2D
{
private:
    /* data */
    // Two double data fields named x and y that specify the center of the rectangle with
    // constant get and set functions. (Assume that the rectangle sides are parallel to x- or yaxes.)
    double x;
    double y;
    // The double data fields width and height with constant get and set functions.
    double width;
    double height;

public:
    // Two double data fields named x and y that specify the center of the rectangle with
    // constant get and set functions. (Assume that the rectangle sides are parallel to x- or yaxes.)
    double getx(void) const;
    double gety(void) const;
    void setx(double x);
    void sety(double y);

    // The double data fields width and height with constant get and set functions.
    double getwidth(void) const;
    double getheight(void) const;
    void setwidth(double w);
    void setheight(double h);

    // A no-arg constructor that creates a default rectangle with (0, 0) for (x, y) and 1 for both width and height.
    Rectangle2D();
    // A constructor that creates a rectangle with the specified x, y, width, and height.
    Rectangle2D(double x, double y, double w, double h);

    // A constant function contains(double x, double y) that returns true
    // if the specified point (x, y) is inside this rectangle. See Figure a.
    bool contains(double x, double y) const;
    // A constant function contains(const Rectangle2D &r) that returns true
    // if the specified rectangle is inside this rectangle. See Figure b.
    bool contains(const Rectangle2D &r) const;
    //  A constant function overlaps(const Rectangle2D &r) that returns true
    // if the specified rectangle overlaps with this rectangle. See Figure c
    bool overlaps(const Rectangle2D &r) const;
};

// Two double data fields named x and y that specify the center of the rectangle with
// constant get and set functions. (Assume that the rectangle sides are parallel to x- or yaxes.)
double Rectangle2D::getx(void) const
{
    return x;
}
double Rectangle2D::gety(void) const
{
    return y;
}
void Rectangle2D::setx(double x)
{
    this->x = x;
}
void Rectangle2D::sety(double y)
{
    this->y = y;
}

// The double data fields width and height with constant get and set functions.
double Rectangle2D::getwidth(void) const
{
    return width;
}
double Rectangle2D::getheight(void) const
{
    return height;
}
void Rectangle2D::setwidth(double w)
{
    width = w;
}
void Rectangle2D::setheight(double h)
{
    height = h;
}

Rectangle2D::Rectangle2D(/* no-arg */)
{
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

// A constructor that creates a rectangle with the specified x, y, width, and height.
Rectangle2D::Rectangle2D(double x, double y, double w, double h)
{
    this->x = x;
    this->y = y;
    width = w;
    height = h;
}

// if the specified point (x, y) is inside this rectangle. See Figure a.
bool Rectangle2D::contains(double x, double y) const
{
    bool xin, yin;
    xin = (x > this->x - width / 2) && (x < this->x + width / 2);
    yin = (y > this->y - height / 2) && (y < this->y + height / 2);

    return xin && yin;
}

// A constant function contains(const Rectangle2D &r) that returns true
// if the specified rectangle is inside this rectangle. See Figure b.
bool Rectangle2D::contains(const Rectangle2D &r) const
{
    bool xin, yin;

    xin = (r.getx() - r.getwidth() / 2 > x - width / 2) && (r.getx() + r.getwidth() / 2 < x + width / 2);
    yin = (r.gety() - r.getheight() / 2 > y - height / 2) && (r.gety() + r.getheight() / 2 < y + height / 2);

    return xin && yin;
}
//  A constant function overlaps(const Rectangle2D &r) that returns true
// if the specified rectangle overlaps with this rectangle. See Figure c
// !(x2<another.getx1() || x1>another.getx2() || y2<another.gety1() || y1>another.gety2())
bool Rectangle2D::overlaps(const Rectangle2D &r) const
{
    return !((x + width / 2 < r.getx() - r.getwidth() / 2) ||
             (x - width / 2 > r.getx() + r.getwidth() / 2) ||
             (y + height / 2 < r.gety() - r.getheight() / 2) ||
             (y - height / 2 > r.gety() + r.getheight() / 2));
}

/*
Write a test program that creates three Rectangle2D objects r1(2, 2, 5.5, 4.9), r2(4, 5,
10.5, 3.2), and r3(3, 5, 2.3, 5.4), and displays the result of r1.contains(3, 3),
r1.contains(r2), and r1.overlaps(r3).
*/
int main()
{
    // creates three Rectangle2D objects r1(2, 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2), and r3(3, 5, 2.3, 5.4)
    Rectangle2D r1(2, 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2), r3(3, 5, 2.3, 5.4);

    // displays the result of r1.contains(3, 3), r1.contains(r2), and r1.overlaps(r3)
    cout << "r1.contains(3,3): " << r1.contains(3, 3) << endl;
    cout << "r1.contains(r2): " << r1.contains(r2) << endl;
    cout << "r1.overlaps(r3): " << r1.overlaps(r3) << endl;
}