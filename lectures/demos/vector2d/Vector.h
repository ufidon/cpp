#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <iostream>
#include <iomanip>

using namespace std;

// A 2D vector (xi+yj)
class Vector
{
private:
    /* data */
    double x;
    double y;

public:
    // A no-arg constructor that creates a default vector with x=0 and y=0.
    Vector(/* no-args */);

    // A user-defined constructor that creates a vector object with given two data fields
    Vector(double x1, double y1);

    // The accessor and mutator functions for x and y
    double getx() const;
    double gety() const;
    void setx(double x1);
    void sety(double y1);

    // A method (inside of the class) named printVector that prints the given vector on the console. (3i + 4j or 5i – 8j, etc.)
    void printVector();

    // A method (inside of the class) named addition returns the sum of two vectors. Hint: You must call the function with a vector object in the main function. Therefore, you only need to provide the second object as an argument.
    Vector addition(Vector &v);
};

// A function (outside of the class) named additionTwo returns the sum of two vectors. Hint: Because this function is not defined and implemented inside of the class, you should provide two vectors as its parameters.
Vector additionTwo(Vector &v1, Vector &v2);

// A function (outside of the class) named additionArray returns the sum of an array of Vector objects.
Vector additionArray(Vector vlexArray[], int size);

//

#endif //_VECTOR_H_