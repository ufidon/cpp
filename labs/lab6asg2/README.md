# Problem 1
Write a recursion function that returns the number of even digits in an integer using the following header: 

```C++
int evenCount(int value) 
```

Write a test program that prompts the user to enter an integer, invokes the function and displays the number of even digits in it. Zero is an even digit. 

# Problem 2
Write a program that reads integers, finds the largest of them, and counts its occurrences. Assume that the input ends with number 0. Suppose that you entered 3 5 2 5 5 5 0; the program finds that the largest is 5 and the occurrence count for 5 is 4.   

Hint: Maintain two variables, max and count. max stores the current max number, and count stores its occurrences. Initially, assign the first number to max and 1 to count. Compare each subsequent number with max. If the number is greater than max, assign it to max and reset count to 1. If the number is equal to max, increment count by 1.  

# Problem 3
Write a function that counts the occurrence of each letter in the string using the following header:  

```C++
void count(const string & s)  
```

Write a test program that reads a string, invokes the count function, and displays the non-zero counts.

# Problem 4
Define the Rectangle2D class that contains:  

* Two double data fields named x and y that specify the center of the rectangle with constant get and set functions. (Assume that the rectangle sides are parallel to x- or y-axes.) 
* The double data fields width and height with constant get and set functions.  
* A no-arg constructor that creates a default rectangle with (0, 0) for (x, y) and 1 for both width and height.  
* A constructor that creates a rectangle with the specified x, y, width, and height. 
* A constant function contains(double x, double y) that returns true if the specified point (x, y) is inside this rectangle. See Figure a.  
* A constant function contains(const Rectangle2D &r) that returns true if the specified rectangle is inside this rectangle. See Figure b. 
* A constant function overlaps(const Rectangle2D &r) that returns true if the specified rectangle overlaps with this rectangle. See Figure c.  
* Write a test program that creates three Rectangle2D objects r1(2, 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2), and r3(3, 5, 2.3, 5.4), and displays the result of r1.contains(3, 3), r1.contains(r2), and r1.overlaps(r3).