#include "Vector.h"

int main()
{
    // • Creates a Vector object with no-arg constructor.
    Vector v1;
    cout << "v1 created with no-arg constructor = ";
    v1.printVector();
    // • Change x and y part of the first object with -1.2 and 3.4, respectively.
    v1.setx(-1.2), v1.sety(3.4);
    cout << "v1 x and y parts changed = ";
    v1.printVector();
    // • Create another Vector object using the user-defined constructor with x=1.7
    // and y=-5.1.
    Vector v2(1.7, -5.1);
    cout << "v2 created using the user-defined constructor = ";
    v2.printVector();
    // • Call the addition method from the first object with providing the second Vector
    // object as an argument. Print the result using the printVector method.
    Vector v3 = v1.addition(v2);
    cout << "v3=v1.addition(v2) = ";
    v3.printVector();
    // • Call the additionTwo function by providing the first and second objects as
    // arguments. Print the result using the printVector method.
    Vector v4 = additionTwo(v2, v3);
    cout << "v4 = additionTwo(v2, v3) = ";
    v4.printVector();
    // • Create an array of Vector objects with at least four Vector numbers. Call the
    // additionArray function by providing the array and size of the array as arguments.
    // Print the result using the printVector method.
    Vector varray[5] = {Vector(1, 1), Vector(2, 2), Vector(3, 3), Vector(4, 4), Vector(5, 5)};
    Vector s = additionArray(varray, 5);
    cout << "additionArray(varray, 5): 1i+1j + 2i+2j + 3i+3j + 4i+4j + 5i+5j = ";
    s.printVector();
}
