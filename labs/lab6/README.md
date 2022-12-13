# Problem 1
In this lab, you must separate your class definition from its implementation. Design a class named MyInteger that contains:  

1)  A private int data field named value that stores the int value represented by this object. 
2)  A private static double data field named averageOfIntegers that defines the average of value fields of all objects of MyInteger class. 
3)  A private static int data field named sumOfIntegers that defines the sum of value fields of all objects of MyInteger class. 
4)  A private static int data field named numberOfObjects that defines the number of all objects of MyInteger class. 
5)  A constructor that creates a MyInteger object for the specified int value. 
6)  A constant get function that return the int value. 
7)  Constant function isEven() that returns true if the value is even. 
8)  Static function isOdd(int) that returns true if the specified value odd. 
9)  Constant functions equals(int) and equals(const MyInteger &myInt) that return true if the value in the object is equal to the specified value. 
10) Static function getAverageOfIntegers() that returns the average of value fields of all objects of MyInteger class. 

Write a test program (testMyInteger.cpp) that displays the result of getAverageOfIntegers() and isOdd(3) at the beginning. The test program also creates three MyInteger objects i1(9323), i2(147), and i3(9323), displays the result of i1.isEven(), i3.equals(843) and i1.equals(i3). The test program should display the result of getAverageOfIntegers() at the end. 

