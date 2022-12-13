# Problem 1
In this lab, you must separate your class definition from its implementation. Design a class named Complex that contains:  

1)  A double data field (private) named real for the real part of a complex number. 
2)  A double data field (private) named img for the imaginary part of a complex number. 
3)  A no-arg constructor that creates a default complex number with real 0 and img 0. 
4)  The accessor and mutator functions for real and img. 
5)  A user-defined constructor that creates a complex object with given two data fields. 
6)  A method (inside of the class) named printComplex that prints the given complex number on the console. (3 + 4i or 2 – 8i, etc.) 

```C++
void printComplex ()
```  

7)  A method (inside of the class) named addition returns the sum of two complex numbers. 

```C++
Complex addition (Complex & comp) 
```

Hint: You must call the function with a complex object in the main function. Therefore, you only need to provide the second object as an argument. 

8)  A method (outside of the class) named additionTwo returns the sum of two complex numbers. 

```C++
Complex additionTwo (Complex & comp1, Complex & comp2) 
```

Hint: Because this function is not defined and implemented inside of the class, you should provide two complex numbers. 

9)  A method (outside of the class) named additionArray returns the sum of an array of Complex objects. 

```C++
Complex additionArray (Complex complexArray [ ], int size) 
```

Write a test program (testComplex.cpp) that: 

•  Creates a Complex object with no-arg constructor.  
•  Change real and imaginary part of the first object with 2.4 and 4.1, respectively.  
•  Create another Complex object using the user-defined constructor with real 3.2 and imaginary -3.6.  
•  Call the addition function from the first object with providing the second Complex object as an argument. Print the result using the printComplex function.  
•  Call the additionTwo function by providing the first and second objects as arguments. Print the result using the printComplex function.  
•  Create an array of Complex objects with at least four Complex numbers. Call the additionArray function by providing the array and size of the array as arguments. Print the result using the printComplex function.  
