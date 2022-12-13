#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include <iostream>
#include <iomanip>

using namespace std;

class Complex
{
private:
    /* data */
    // A double data field (private) named real for the real part of a complex number.
    double real;
    // A double data field (private) named img for the imaginary part of a complex number
    double img;

public:
    // A no-arg constructor that creates a default complex number with real 0 and img 0.
    Complex(/* no-args */);

    // A user-defined constructor that creates a complex object with given two data fields
    Complex(double r, double i);

    // The accessor and mutator functions for real and img
    double getreal() const;
    double getimg() const;
    void setreal(double r);
    void setimg(double i);

    // A method (inside of the class) named printComplex that prints the given complex: number on the console. (3 + 4i or 2 – 8i, etc.)
    void printComplex();

    // A method (inside of the class) named addition returns the sum of two complex numbers. Hint: You must call the function with a complex object in the main function. Therefore, you only need to provide the second object as an argument.
    Complex addition(Complex &comp);
};

// A method (outside of the class) named additionTwo returns the sum of two complex numbers. Hint: Because this function is not defined and implemented inside of the class, you should provide two complex numbers.
Complex additionTwo(Complex &comp1, Complex &comp2);

// A method (outside of the class) named additionArray returns the sum of an array of Complex objects.
Complex additionArray(Complex complexArray[], int size);

//

#endif //_COMPLEX_H_