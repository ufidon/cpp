# Problem 1
Write a complete C++ program that prompts the user to enter an integer number and read that number from the keyboard. 

* If the entered number is negative, your program should print the following message: “The program doesn’t accept negative numbers” and stop the execution. 
* If the entered number is positive and less than or equal to 100 (between 0 to 100), the program should check and display whether the number is divisible by four or not. Also, your program must display quotient and remainder. 
* If the entered number is greater than 100, your program should print the square root of the given number. 

# Problem 2
Write a complete C++ program that prompts the user to enter the side of a hexagon and displays its area. The area of a hexagon can be computed using the following formula (s is the length of a side): 

$$ Area = \frac{6\times s^2}{4\times \tan(\frac{\pi}{6})} $$

Hint: Use functions from <iomanip> and <cmath> headers.

# Problem 3
Write a program that prompts the user to enter a string and displays the characters at odd index positions (1, 3, 5, …). 

# Problem 4
Write a program that reads an integer between 0 and 1000000 and adds all the digits in the integer. For example, if an integer is 932, the sum of all its digits is 14. 

Hint: Use the % operator to extract digits and use the / operator to remove the extracted digit. For instance, 932 % 10 = 2 and 932 / 10 = 93.