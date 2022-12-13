# Problem 1
Design a class named Account that contains: 

1) An int data field named id for the account. 
2) A double data field named balance for the account. 
3) A double data field named annualInterestRate that stores the current interest rate. 
4) A no-arg constructor that creates a default account with id 0, balance 0.0, and annualInterestRate 0.0. 
5) A user-defined constructor that creates an account object with given three data fields. 
6) A function named getMonthlyInterestRate () that returns the monthly interest rate.  

```C++
double getMonthlyInterestRate(); 
```

7) A function named withdraw that withdraws a specified amount from the 
account.  

```C++
void withdraw (double amount); 
```

8) A function named deposit that deposits a specified amount to the account. 

```C++
void deposit (double amount); 
```

Write a test program (main) that creates an Account object with an account ID of 1122, a balance of 20000, and an annual interest rate of 4.5%.  

* Call the withdraw function to withdraw $2500 
* Call the deposit function to deposit $3000 
* Print the balance and the monthly interest. 