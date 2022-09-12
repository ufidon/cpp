# In-class exercises of Module 1: Fundamentals of programming
Exercises are from textbook [Introduction to Programming with C++ 3e](https://liveexample.pearsoncmg.com/liang/cpp3e/)

* Introduction to C++
* Selections and loops
* Characters and strings
* Functions and recursion
* Pointers and arrays

1. *4.5 (Geometry: area of a regular polygon) A [regular polygon](https://en.wikipedia.org/wiki/Regular_polygon) is an $n$-sided polygon in which all sides are of the same length and all angles have the same degree (i.e., the polygon is both equilateral and equiangular). The formula for computing the area of a regular polygon is

 $$ Area = \dfrac{n\times s^2}{4\times \tan(\frac{\pi}{n})} $$ 

Here, $s$ is the length of a side. Write a program that prompts the user to enter the number of sides and their length of a regular polygon and displays its area.
  1. Create a program from scratch
     1. Execute from Visual Studio
     2. Execute from Command Prompt
  2. Calculate the area
  3. Add user input and output
     1. Prompt the user to enter $n$ and $s$
     2. Print the area
  4. Support simple commands to calculate multiple regular polygons
  5. Print out the information of multiple polygons in a table, keep 4 digits after the decimal point
  | Polygon | n | s | Area |
  | ------- | - | - | ---- |
  | 1 | 3 | 4 | 6.9282 |
2. [Triangle](https://en.wikipedia.org/wiki/Triangle) guru: Create a C++ program to find the following information of a triangle given its three sides:
   1. Three internal angles
   ```math
   \displaystyle \alpha =\arccos \left({\frac {b^{2}+c^{2}-a^{2}}{2bc}}\right)
   \displaystyle \beta =\arccos \left({\frac {a^{2}+c^{2}-b^{2}}{2ac}}\right)
   \displaystyle \gamma =\arccos \left({\frac {a^{2}+b^{2}-c^{2}}{2ab}}\right)
   ```
   2. Area
3. ***5.36 (Game: scissor, rock, paper) Programming Exercise 3.15 gives a program that plays the scissor-rock-paper game. Revise the program to let the user continuously play until either the user or the computer wins more than twice.
4. 