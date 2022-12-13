#include "Complex.h"

// A no-arg constructor that creates a default complex number with real 0 and img 0.
Complex::Complex(/* no-args */) : real(0), img(0)
{
}
// A user-defined constructor that creates a complex object with given two data fields
Complex::Complex(double r, double i)
{
    real = r;
    img = i;
}

// The accessor and mutator functions for real and img
double Complex::getreal() const { return real; }
double Complex::getimg() const { return img; }
void Complex::setreal(double r) { real = r; }
void Complex::setimg(double i) { img = i; }

// A method (inside of the class) named printComplex that prints the given complex: number on the console. (3 + 4i or 2 – 8i, etc.)
void Complex::printComplex()
{
    // https://stackoverflow.com/questions/15713993/how-do-i-show-a-positive-negative-sign-on-everything-but-0-when-outputting-to-a
    cout << noshowpos << real;
    if (img != 0)
        cout << showpos << img << "i";
    cout << endl;
}
// A method (inside of the class) named addition returns the sum of two complex numbers. Hint: You must call the function with a complex object in the main function. Therefore, you only need to provide the second object as an argument.
Complex Complex::addition(Complex &comp)
{
    return Complex(real + comp.getreal(), img + comp.getimg());
}

// A method (outside of the class) named additionTwo returns the sum of two complex numbers. Hint: Because this function is not defined and implemented inside of the class, you should provide two complex numbers.
Complex additionTwo(Complex &comp1, Complex &comp2)
{
    return Complex(comp1.getreal() + comp2.getreal(), comp1.getimg() + comp2.getimg());
}

// A method (outside of the class) named additionArray returns the sum of an array of Complex objects.
Complex additionArray(Complex complexArray[], int size)
{
    double real = 0, img = 0;
    for (int i = 0; i < size; i++)
    {
        real += complexArray[i].getreal();
        img += complexArray[i].getimg();
    }
    return Complex(real, img);
}