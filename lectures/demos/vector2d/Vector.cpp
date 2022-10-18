#include "Vector.h"

// A no-arg constructor that creates a default vector with x=0 and y=0.
Vector::Vector(/* no-args */) : x(0), y(0)
{
}
// A user-defined constructor that creates a vector object with given two data fields
Vector::Vector(double x1, double y1)
{
    x = x1;
    y = y1;
}

// The accessor and mutator functions for x and y
double Vector::getx() const { return x; }
double Vector::gety() const { return y; }
void Vector::setx(double x1) { x = x1; }
void Vector::sety(double y1) { y = y1; }

// A method (inside of the class) named printVector that prints the given vector:  on the console. (3i + 4j or 5i – 8j, etc.)
void Vector::printVector()
{
    // https://stackoverflow.com/questions/15713993/how-do-y1-show-a-positive-negative-sign-on-everything-but-0-when-outputting-to-a
    cout << noshowpos << x;
    if (x != 0)
        cout << "i";
    if (y != 0)
        cout << showpos << y << "j";
    cout << endl;
}
// A method (inside of the class) named addition returns the sum of two vectors. Hint: You must call the function with a vector object in the main function. Therefore, you only need to provide the second object as an argument.
Vector Vector::addition(Vector &v)
{
    return Vector(x + v.getx(), y + v.gety());
}

// A function (outside of the class) named additionTwo returns the sum of two vectors. Hint: Because this function is not defined and implemented inside of the class, you should provide two vectors.
Vector additionTwo(Vector &v1, Vector &v2)
{
    return Vector(v1.getx() + v2.getx(), v1.gety() + v2.gety());
}

// A function (outside of the class) named additionArray returns the sum of an array of Vector objects.
Vector additionArray(Vector vectorArray[], int size)
{
    double x = 0, y = 0;
    for (int i = 0; i < size; i++)
    {
        x += vectorArray[i].getx();
        y += vectorArray[i].gety();
    }
    return Vector(x, y);
}