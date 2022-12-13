# Problem 1
In this lab, you must separate your class definition from its implementation. Design a class named Circle2D that contains:  

1)  Two private double data fields named x and y that specify the center of the circle with constant get functions. 
2)  A double data field radius with a constant get function. 
3)  A static int data field numberOfCircles with a static get function getNumberOfCircles(). 
4)  A constructor that creates a circle with the specified x, y, and radius.  
5)  A copy constructor Circle2D(const Circle2D & circle) that creates a circle with a given Circle2D object. 
6)  A destructor that updates numberOfCircles data field. 
7)  A constant function overlaps(const Circle2D& circle) that returns true if the specified circle overlaps with this circle. 

Note: The distance from one point to another point is $\sqrt{(𝑥_1 − 𝑥_2)^2 +   (𝑦_1 − 𝑦_2)^2}$ Write a test program (testCircle2D.cpp) that does the following: 

1)  Dynamically creates a Circle2D object on the heap using the constructor with the following arguments (2, 2, 5.5) and assigns the object address to the pointer pCir1. 
2)  Creates a Circle2D object cir2(-6, -3, 1.5). 
3)  Calls getNumberOfCircles() function. 
4)  Creates a Circle2D object cir3 with the copy constructor with the cir2 object as an argument. 
5)  Calls getNumberOfCircles() function from the cir3. 
6)  Calls overlaps(const Circle2D& circle) function from pCir1 pointer with the cir2 as an argument. 
7)  Calls overlaps(const Circle2D& circle) function from cir3 object with the cir2 as an argument. 
8)  Frees the memory allocated dynamically. 
9)  Calls getNumberOfCircles() function. 


