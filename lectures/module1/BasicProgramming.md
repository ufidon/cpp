# Introduction to C++ Programming
*chapter 1-5*

**Table of contents**

* Introduction to C++
* Selections and loops
* Characters and strings


# Introduction
*Chapter 1*

## Topics
The central theme of this course is to learn how to solve problems by writing a program or software.

* Software contains the instructions that tell a computer or a computerized device what to do
* Software developers create software in programming languages

### Computer
* A simplified [computer](https://en.wikipedia.org/wiki/Computer) model<br>
![A computer model](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e5/Von_Neumann_Architecture.svg/220px-Von_Neumann_Architecture.svg.png)

### Programming languages
* There are hundreds of [programming languages](https://en.wikipedia.org/wiki/Programming_language)
  * [Machine Language](https://en.wikipedia.org/wiki/Machine_code)
  * [Assembly Language](https://en.wikipedia.org/wiki/Assembly_language)
  * [High-level language](https://en.wikipedia.org/wiki/High-level_programming_language)
* All programs must be converted into the instructions the computer can execute

### Operating systems
* A layered diagram of [operating system](https://en.wikipedia.org/wiki/Operating_system)<br>
![Operating system layered diagram](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e1/Operating_system_placement.svg/165px-Operating_system_placement.svg.png)

### C++
* [C++ (/ˌsiːˌplʌsˈplʌs/)](https://en.wikipedia.org/wiki/C%2B%2B) is a general-purpose programming language
* [Simple C++ programs](http://liveexample.pearsoncmg.com/liang/cpp3e/ExampleByChapters.html)

## Demo and practice
* C++ Program-Development Cycle: <br>
creating/modifying source code --> compiling --> linking --> executing programs
* Programming Style and Documentation:
  * Appropriate Comments and Comment Styles
  * Proper Indentation and Spacing
  * Beautify code [automatically](https://stackoverflow.com/questions/5755942/how-do-you-auto-format-code-in-visual-studio)
* Programming errors can be categorized into three types: syntax errors, runtime errors, and logic errors.  
* [Try it on the textbook website](http://liveexample.pearsoncmg.com/liang/cpp3e/ExampleByChapters.html)
* Try it on other online compilers or IDE
  * [OnlineGDB](https://www.onlinegdb.com/online_c++_compiler)
  * [Programiz](https://www.programiz.com/cpp-programming/online-compiler/)
  * [Online IDE](https://www.online-ide.com/online_c++_ide)
* Try it locally on lab computers or your personal computers
  * [Visual Studio](https://visualstudio.microsoft.com/)
  * [Code::Blocks](https://www.codeblocks.org/)


# Elementary programming
*Chapter 2*

## Topics
* Writing a simple program
  * programming ideas: domain knowledge, framework, flowchart, implementation, testing
  * programming components: 
    * identifiers, variables, named constants
    * assignment statements and expressions
    * numerical data types and operations
    * evaluating expressions and operator precedence
    * augmented assignment operators
    * increment and decrement operators
    * numeric type conversions
    * Input from the keyboard and output to the screen
* The software development life cycle is a multi-stage process:<br>
 requirements specification --> analysis -->  design -->  implementation -->  testing -->  deployment --> maintenance
* Common elementary programming errors: 
  * undeclared ­variables, ­uninitialized variables 
  * integer overflow, unintended integer division, and round-off errors

## Case study
* [Computing area](http://liveexample.pearsoncmg.com/liang/cpp3e/html/ComputeArea.html)
  * [Circle](https://en.wikipedia.org/wiki/Circle)
* [Displaying the current time](http://liveexample.pearsoncmg.com/liang/cpp3e/html/ShowCurrentTime.html)
  * [System time](https://en.wikipedia.org/wiki/System_time)
* [Counting monetary units](http://liveexample.pearsoncmg.com/liang/cpp3e/html/ComputeChange.html)
  * [Coins of the United States dollar](https://en.wikipedia.org/wiki/Coins_of_the_United_States_dollar)

## Demo and practice
[Try it on the textbook website](http://liveexample.pearsoncmg.com/liang/cpp3e/ExampleByChapters.html)



# Flow control

## Selections
*Chapter 3*

### Topics
* The bool data type
  * The bool data type declares a variable with the value either true or false.
* if statements is a construct that enables a program to specify alternative path of execution.
  * two way if-else statements decide which statements to execute based on whether the condition is true or false
  * nested if and multi-way if else statements
    * An if statement can be inside another if statement to form a nested if statement.
* Common errors
  * Forgetting necessary braces
  *  Wrong semicolon at the if line
  *  Mistakenly using = for ==
  *  Redundant testing of boolean values
  *  Dangling else ambiguity
  *  Equality test of two floating-point values
* Common pitfalls
  *  Simplifying boolean variable assignment
  *  Avoiding duplicate code in different cases
  *  Integer values can be used as boolean values
* The logical operators !, &&, and || can be used to create a compound Boolean expression
* A switch statement executes statements based on the value of a variable or an expression
* A conditional expression evaluates an expression based on a condition: boolean-expression ? expression1 : expression2;
* Operator precedence and associativity determine the order in which operators are evaluated
* Debugging is the process of finding and fixing errors in a program:
  *  Executing a single statement at a time
  *  Tracing into or stepping over a function
  *  Setting breakpoints
  *  Displaying variables
  *  Displaying call stacks
  *  Modifying variables

### Case study
* [Computing body mass index](http://liveexample.pearsoncmg.com/liang/cpp3e/html/ComputeAndInterpreteBMI.html)
  * Body mass index [BMI](https://en.wikipedia.org/wiki/Body_mass_index) is a value derived from the mass (weight) and height of a person. 
* [Computing taxes](http://liveexample.pearsoncmg.com/liang/cpp3e/html/ComputeTax.html)
  * [Rate schedule (federal income tax)](https://en.wikipedia.org/wiki/Rate_schedule_(federal_income_tax))
* [Determining leap year](http://liveexample.pearsoncmg.com/liang/cpp3e/html/LeapYear.html)
  * A year is a [leap year](https://en.wikipedia.org/wiki/Leap_year) if it is divisible by 4 but not by 100, or if it is divisible by 400
* [Lottery](http://liveexample.pearsoncmg.com/liang/cpp3e/html/Lottery.html)
  * The lottery program involves generating random numbers, comparing digits, and using Boolean operators.
  ```
  The program randomly generates a lottery of a two-digit number, prompts the user to enter a two-digit number, and determines whether the user wins according to the following rule:
  1. If the user input matches the lottery number in the exact order, the award is $10,000.
  2. If all the digits in the user input match all the digits in the lottery number, the award is $3,000.
  3. If one digit in the user input matches a digit in the lottery number, the award is $1,000.

  Note that the digits of a two-digit number may be 0. If a number is less than 10, we assume the number is preceded by a 0 to form a two-digit number. For example, number 8 is treated as 08 and number 0 is treated as 00 in the program.
  ```
  * [Generate random number](https://cplusplus.com/reference/cstdlib/rand/)
  * [Lotteries in the United States](https://en.wikipedia.org/wiki/Lotteries_in_the_United_States)

### Demo and practice
[Try it on the textbook website](http://liveexample.pearsoncmg.com/liang/cpp3e/ExampleByChapters.html)

## Loops
*Chapter 5*

### Topics
* A loop can be used to tell a program to execute statements repeatedly.
  * A while loop executes statements repeatedly while the condition is true.
  * A do-while loop is the same as a while loop except that it executes the loop body first and then checks the loop continuation condition
  * A for loop has a concise syntax for writing loops
  * A loop can be nested inside another loop
* You can use a for loop, a while loop, or a do-while loop, whichever is convenient.
* Using floating-point numbers in the loop continuation condition may cause numeric errors.
* The break and continue keywords provide additional controls in a loop
  * break in a loop terminates the loop
  * continue in a loop ends the current iteration

### Case study
* [Finding the greatest common divisor](http://liveexample.pearsoncmg.com/liang/cpp3e/html/GreatestCommonDivisor.html)
  * the greatest common divisor (GCD) of two or more integers, which are not all zero, is the largest positive integer that divides each of the integers
  * [greatest common divisor](https://en.wikipedia.org/wiki/Greatest_common_divisor)
* [Predicting the future tuition](http://liveexample.pearsoncmg.com/liang/cpp3e/html/FutureTuition.html)
  ```
  Suppose that the tuition for a university is $10,000 this year and tuition increases 7% every year. In how many years will the tuition be doubled?
  ```
* [Converting Decimals to Hexadecimals](http://liveexample.pearsoncmg.com/liang/cpp3e/html/Dec2Hex.html)
  * [How to Convert from Decimal to Hexadecimal](https://www.wikihow.com/Convert-from-Decimal-to-Hexadecimal)
  * [Hexadecimal](https://en.wikipedia.org/wiki/Hexadecimal)  
* [Checking palindromes](http://liveexample.pearsoncmg.com/liang/cpp3e/html/TestPalindrome.html)
  ```
  A string is a palindrome if it reads the same forward and backward. The words “mom,” “dad,” and “noon,” for example, are palindromes.
  ```
* [Displaying prime numbers](http://liveexample.pearsoncmg.com/liang/cpp3e/html/PrimeNumber.html)
  ```
  displays the first 50 prime numbers in 5 lines, each containing 10 numbers
  ```
* [Using Monte Carlo simulation for estimating π](https://en.wikipedia.org/wiki/Monte_Carlo_method)
  * [Monte Carlo estimates of π](https://blogs.sas.com/content/iml/2016/03/14/monte-carlo-estimates-of-pi.html)

## Mathematical functions, characters and strings
*chapter 4*

### Topics
* C++ provides many useful functions in the [cmath](https://en.cppreference.com/w/cpp/header/cmath) header for performing common mathematical functions
  * [Trigonometric functions](https://en.wikipedia.org/wiki/Trigonometric_functions)
  * Exponent functions
  * Rounding functions
  * The min, max, and abs functions, etc.
* Character data type and operations
  * A character data type represents a single character
  * [ASCII Code](https://en.wikipedia.org/wiki/ASCII)
  * Reading a character from the keyboard
  * [Escape sequences](https://en.wikipedia.org/wiki/Escape_sequences_in_C) for special characters
  * Casting between char and numeric types
  * Comparing and testing characters
  * [cctype](https://en.cppreference.com/w/cpp/header/cctype) contains character functions for testing a character and for converting a character
* A string is a sequence of characters.
  * The string type is not a primitive type. It is known as an object type.
  * Objects are defined using classes. An object is also known as an instance of a class. The type string is a predefined class in the [string](https://en.cppreference.com/w/cpp/header/string) header file. 
  * The s.at(index) function can be used to retrieve a specific character in a string s
  * The subscript operator can be used to access the character at a specified index in a string s using the syntax s[index]
  * The + operator is used for concatenating two strings
  * The relational operators ==, !=, <, <=, >, >=  are used to compare two strings in alphabetical order
  * A string s can be read from the keyboard using the cin object:  cin >> s
  * The getline function in the string header file can read a string s containing blanks from the keyboard: getline(cin, s, delimitCharacter), where  delimitCharacter has a default value ('\n')
* The stream manipulators are used to display formatted output on the console
  *  included in the [iomanip](https://en.cppreference.com/w/cpp/header/iomanip) header file
* You can save data to a file and read data from the file:
  * [Writing to a file](http://liveexample.pearsoncmg.com/liang/cpp3e/html/SimpleFileOutput.html)
  * [Reading from a file](http://liveexample.pearsoncmg.com/liang/cpp3e/html/SimpleFileInput.html)
### Case study
* [Generating random characters](http://liveexample.pearsoncmg.com/liang/cpp3e/html/DisplayRandomCharacter.html)
* [ Guessing birthdays](http://liveexample.pearsoncmg.com/liang/cpp3e/html/GuessBirthday.html)
  * [Guessing Birthday Binary-Implementation Set Size](https://math.stackexchange.com/questions/870414/guessing-birthday-binary-implementation-set-size)
* [Converting a hexadecimal digit to a decimal value](http://liveexample.pearsoncmg.com/liang/cpp3e/html/HexDigit2Dec.html)
  * [Hexadecimal](https://en.wikipedia.org/wiki/Hexadecimal)
* [Revising the lottery program using strings](http://liveexample.pearsoncmg.com/liang/cpp3e/html/LotteryUsingStrings.html)

### Demo and practice
[Try it on the textbook website](http://liveexample.pearsoncmg.com/liang/cpp3e/ExampleByChapters.html)
