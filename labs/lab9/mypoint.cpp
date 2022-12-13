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