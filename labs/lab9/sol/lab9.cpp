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

class ThreeDPoint : public MyPoint
{
private:
    double z;

public:
    ThreeDPoint()
    {
        z = 0;
        // cout << "(x,y,z)=" <<"("<< getx() << "," << gety() << "," << z <<")" << endl;
    }
    ThreeDPoint(double x, double y, double z) : MyPoint(x, y)
    {
        this->z = z;
        // cout << "(x,y,z)=" << "(" << getx() << "," << gety() << "," << z << ")" << endl;
    }

    double getz() const
    {
        return z;
    }
    void setz(double z)
    {
        this->z = z;
    }

    double distance(const MyPoint &p2)
    {
        // https://stackoverflow.com/questions/1276847/difference-in-behavior-while-using-dynamic-cast-with-reference-and-pointers
        // https://stackoverflow.com/questions/23820885/can-not-use-dynamic-cast-to-a-const-object
        const ThreeDPoint *p = dynamic_cast<const ThreeDPoint *>(&p2);

        if (p)
        {
            return sqrt((getx() - p->getx()) * (getx() - p->getx()) + (gety() - p->gety()) * (gety() - p->gety()) + (z - p->z) * (z - p->z));
        }
        else // p==0, we need p2
        {
            return sqrt((getx() - p2.getx()) * (getx() - p2.getx()) + (gety() - p2.gety()) * (gety() - p2.gety()) + z * z);
        }
    }

    friend istream &operator>>(istream &is, ThreeDPoint &p);
    friend ostream &operator<<(ostream &os, const ThreeDPoint &p);
};

istream &operator>>(istream &is, ThreeDPoint &p)
{
    double x, y;
    cout << "please enter x y z: ";
    is >> x >> y >> p.z;
    p.setx(x);
    p.sety(y);
    return is;
}

ostream &operator<<(ostream &os, const ThreeDPoint &p)
{
    os << "(x,y,z)=(" << p.getx() << "," << p.gety() << "," << p.z << ")";
    return os;
}

int main()
{
    cout<< "1. Test the constructors of ThreeDPoint:" <<endl;
    cout << "1.1 Create ThreeDPoint object p1 with the no-arg constructor:" <<endl;
    ThreeDPoint p1;
    cout << "p1 is " << p1 << endl;

    cout << "1.2 Create ThreeDPoint object p2 with the 3-args constructor:" <<endl;
    ThreeDPoint p2(10, 30, 25.5);
    cout << "p2 is " << p2 << endl;
    
    cout << "2. Test the distance function:" << endl;
    cout << "The distance between p1 and p2 is " << p1.distance(p2) << endl;

    cout << "3. Test the insertion and extraction operators:" << endl;
    cout << "3.1 Create ThreeDPoint object p3 and p4 with the no-arg constructor:" << endl;
    ThreeDPoint p3, p4;

    cout << "3.2 Use cin >> p3 to set p3's (x,y,z):" << endl;
    cout << "For p3, ";
    cin >> p3;
    cout << "3.3 Use cout << p3 to print p3" << endl;
    cout << "p3 is " << p3 << endl;

    cout << "3.4 Use cin >> p4 to set p4's (x,y,z):" << endl;
    cout << "For p4, ";
    cin >> p4;
    cout << "3.5 Use cout << p4 to print p4" << endl;
    cout << "p4 is " << p4 << endl;

    cout << "3.6 Test the distance function:" << endl;
    cout << "The distance between p3 and p4 is " << p3.distance(p4) << endl;

    cout << "4. Create ThreeDPoint p5 and MyPoint p6 using their no-arg constructors:" << endl;
    ThreeDPoint p5;
    MyPoint p6;

    cout << "4.1 Use >> to set p5 and p6, then use << to print p5 and p6: " << endl;
    cout << "For p5, ";
    cin >> p5;
    cout << "For p6, ";
    cin >> p6;
    cout << "p5 is " << p5 << "; p6 is " << p6 << endl;

    cout << "5. Test the polymorphism using p5.distance(p6):" << endl;
    cout << "The distance between p5 and p6 is " << p5.distance(p6) << endl;

    return 0;
}
