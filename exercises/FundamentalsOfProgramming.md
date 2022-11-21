# In-class exercises of Module 1: Fundamentals of programming
Exercises are from textbook [Introduction to Programming with C++ 3e](https://liveexample.pearsoncmg.com/liang/cpp3e/)

* Introduction to C++
* Selections and loops
* Characters and strings
* Functions and recursion
* Pointers and arrays

## 1. *4.5 Geometry: area of a regular polygon 

A [regular polygon](https://en.wikipedia.org/wiki/Regular_polygon) is an $n$-sided polygon in which all sides are of the same length and all angles have the same degree (i.e., the polygon is both equilateral and equiangular). The formula for computing the area of a regular polygon is

 $$ Area = \dfrac{n\times s^2}{4\times \tan(\frac{\pi}{n})} $$ 

 the internal angle 

 $$ A = (n-2)\times {\dfrac {\pi }{n}} $$

Here, $s$ is the length of a side. Write a program that prompts the user to enter the number of sides and their length of a regular polygon and displays its area.
1. Create a program from scratch
  1. Execute from Visual Studio
  2. Execute from Command Prompt
2. Calculate the internal angle and area
3. Add user input and output
  1. Prompt the user to enter $n$ and $s$, determine legal inputs
  2. Print the internal angle and area
4. Support simple commands to calculate multiple regular polygons
5. Print out the information of multiple polygons in a table, keep 4 digits after the decimal point

| Polygon | n | s | A | Area |
| ------- | --- | --- | --- | ---- |
| 1 | 3 | 4 | 60.00 | 6.9282 |

## 2. [Triangle](https://en.wikipedia.org/wiki/Triangle) guru
Create a C++ program to find the following information of a triangle given its three sides:
1. Three internal angles in degree

$$
\begin{align*}
 \alpha &=\arccos \left({\frac {b^{2}+c^{2}-a^{2}}{2bc}}\right) \\
 \beta &=\arccos \left({\frac {a^{2}+c^{2}-b^{2}}{2ac}}\right) \\
 \gamma &=\arccos \left({\frac {a^{2}+b^{2}-c^{2}}{2ab}}\right)
\end{align*}
$$

2. Area

$$
A={\sqrt {s(s-a)(s-b)(s-c)}} \text{ where } s={\frac {1}{2}}(a+b+c)
$$

3. Create a program from scratch
  1. Execute from Visual Studio
  2. Execute from Command Prompt
4. Calculate the three internal angles and area
5. Add user input and output
  1. Prompt the user to enter $a,b$ and $c$, determine legal inputs
  2. Print the three internal angles and area
6. Support simple commands to calculate multiple triangles
7. Print out the information of multiple triangles in a table, keep 2 digits after the decimal point

| Triangle | a | b | c | $\alpha$ | $\beta$ | $\gamma$ | Area |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 1 | 3 | 4 | 5 | 36.87 | 53.13 | 90.00 | 6 |

## 3. ***5.36 (Game: scissor, rock, paper) 
Write a program that plays the popular scissor, rock, paper game. (A scissor can cut a paper, a rock can knock a scissor, and a paper can wrap a rock.) The program randomly generates a number 0, 1, or 2 representing scissor, rock, or paper. The program prompts the user to enter a number 0, 1, or 2 and displays a message indicating whether the user or the computer wins, loses, or draws. Revise the program to let the user continuously play until either the user or the computer wins more than twice. [Reference solution](../lectures/evennumberedexercise/Exercise05_36.cpp)

## 4. Extend 5.36 following [Lab01](../labs/lab01/README.md) 
