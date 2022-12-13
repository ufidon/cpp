#ifndef _MYINTEGER_H_
#define _MYINTEGER_H_

class MyInteger
{
private:
    /* data */
    //     1) A private int data field named value that stores the int value represented by this object.
    int value;
    // 2) A private static double data field named averageOfIntegers that defines the average of
    // value fields of all objects of MyInteger class.
    static double averageOfIntegers;
    // 3) A private static int data field named sumOfIntegers that defines the sum of value fields
    // of all objects of MyInteger class.
    static int sumOfIntegers;
    // 4) A private static int data field named numberOfObjects that defines the number of all
    // objects of MyInteger class.
    static int numberOfObjects;

public:
    // 5) A constructor that creates a MyInteger object for the specified int value.
    MyInteger(int v);
    // 6) A constant get function that return the int value.
    int getValue() const;
    // 7) Constant function isEven() that returns true if the value is even.
    bool isEven() const;
    // 8) Static function isOdd(int) that returns true if the specified value odd.
    static bool isOdd(int v);
    // 9) Constant functions equals(int) and equals(const MyInteger &myInt) that return true if
    // the value in the object is equal to the specified value.
    bool equals(int I) const;
    bool equals(const MyInteger &myInt) const;
    // 10) Static function getAverageOfIntegers() that returns the average of value fields of all
    // objects of MyInteger class
    static double getAverageOfIntegers();
};

#endif