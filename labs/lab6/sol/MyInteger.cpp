#include <iostream>
#include "MyInteger.h"

using namespace std;

// 2) A private static double data field named averageOfIntegers that defines the average of
// value fields of all objects of MyInteger class.
double MyInteger::averageOfIntegers = 0;
// 3) A private static int data field named sumOfIntegers that defines the sum of value fields
// of all objects of MyInteger class.
int MyInteger::sumOfIntegers = 0;
// 4) A private static int data field named numberOfObjects that defines the number of all
// objects of MyInteger class.
int MyInteger::numberOfObjects = 0;

// 5) A constructor that creates a MyInteger object for the specified int value.
MyInteger::MyInteger(int v)
{
    value = v;
    numberOfObjects++;
    sumOfIntegers += v;
    averageOfIntegers = static_cast<double>(sumOfIntegers) / numberOfObjects;
}
// 6) A constant get function that return the int value.
int MyInteger::getValue() const { return value; }
// 7) Constant function isEven() that returns true if the value is even.
bool MyInteger::isEven() const { return value % 2 == 0; }
// 8) Static function isOdd(int) that returns true if the specified value odd.
bool MyInteger::isOdd(int v) { return v % 2 == 1; }
// 9) Constant functions equals(int) and equals(const MyInteger &myInt) that return true if
// the value in the object is equal to the specified value.
bool MyInteger::equals(int I) const { return I == value; }
bool MyInteger::equals(const MyInteger &myInt) const { return myInt.getValue() == value; }
// 10) Static function getAverageOfIntegers() that returns the average of value fields of all
// objects of MyInteger class
double MyInteger::getAverageOfIntegers() { return averageOfIntegers; }
