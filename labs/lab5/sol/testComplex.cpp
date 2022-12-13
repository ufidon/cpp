#include "Complex.h"

int main()
{
    // • Creates a Complex object with no-arg constructor.
    Complex c1;
    cout << "c1 created with no-arg constructor = ";
    c1.printComplex();
    // • Change real and imaginary part of the first object with 2.4 and 4.1, respectively.
    c1.setreal(2.4), c1.setimg(4.1);
    cout << "c1 real and imaginary parts changed = ";
    c1.printComplex();
    // • Create another Complex object using the user-defined constructor with real 3.2
    // and imaginary -3.6.
    Complex c2(3.2, -3.6);
    cout << "c2 created using the user-defined constructor = ";
    c2.printComplex();
    // • Call the addition function from the first object with providing the second Complex
    // object as an argument. Print the result using the printComplex function.
    Complex c3 = c1.addition(c2);
    cout << "c3=c1.addition(c2) = ";
    c3.printComplex();
    // • Call the additionTwo function by providing the first and second objects as
    // arguments. Print the result using the printComplex function.
    Complex c4 = additionTwo(c2, c3);
    cout << "c4 = additionTwo(c2, c3) = ";
    c4.printComplex();
    // • Create an array of Complex objects with at least four Complex numbers. Call the
    // additionArray function by providing the array and size of the array as arguments.
    // Print the result using the printComplex function.
    Complex carray[5] = {Complex(1, 1), Complex(2, 2), Complex(3, 3), Complex(4, 4), Complex(5, 5)};
    Complex s = additionArray(carray, 5);
    cout << "additionArray(carray, 5): 1+1i + 2+2i + 3+3i + 4+4i + 5+5i = ";
    s.printComplex();
}
