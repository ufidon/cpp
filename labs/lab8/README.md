# Problem 1
*14.7 (Math: The Complex class) A complex number has the form a + bi, where a and b are real numbers and i is  $\sqrt{-1}$ . The numbers a and b are 
known as the real part and imaginary part of the complex number, respectively. You can perform addition, subtraction, multiplication, and 
division for complex numbers using the following formulas:

$$
\begin{align*}
(a+bi) + (c+di) &= (a+c) + (b+d)i\\
(a+bi) - (c+di) &= (a-c) + (b-d)i\\
(a+bi) \times (c+di) &= (ac-bd) + (ad+bc)i\\
\frac{a+bi}{c+di} &= \frac{ac+bd}{c^2+d^2} + \frac{bc-ad}{c^2+d^2}i
\end{align*}
$$

You can also obtain the absolute value for a complex number using the following formula:

$$ |a+bi|=\sqrt{a^2+b^2} $$

(A complex number can be interpreted as a point on a plane by identifying the (a, b) values as the coordinates of the point. The absolute value of the complex number corresponds to the distance of the point to the origin, as shown below

![from wikipedia](https://upload.wikimedia.org/wikipedia/commons/5/50/A_plus_bi.svg)

Design a class named Complex for representing complex numbers and the functions add, subtract, multiply, divide, abs for performing complex 
number operations, and the toString function for returning a string representation for a complex number. The toString function returns a + bi
as a string. If b is 0, it simply returns a.

Provide three constructors Complex(a, b), Complex(a), and Complex(). Complex() creates a Complex object for number 0 and Complex(a) creates a Complex object with 0 for b. Also provide the getRealPart() and getImaginaryPart() functions for returning the real and imaginary part of the complex number, respectively.

Overload the operators +, -, *, /, +=, -=, *=, /=, [], unary + and -, prefix ++ and --, postfix ++ and --, <<, >>.

Overload the operators +, -, *, / as nonmember functions. Overload [] so that [0] returns a and [1] returns b.

Write a test program to test all requirements shown in the sample run.