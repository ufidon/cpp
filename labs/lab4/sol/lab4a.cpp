/*
Design a class named Account that contains:
1) An int data field named id for the account.
2) A double data field named balance for the account.
3) A double data field named annualInterestRate that stores the current interest rate.

4) A no-arg constructor that creates a default account with id 0, balance 0.0, and annualInterestRate 0.0.
5) A user-defined constructor that creates an account object with given three data fields.

6) A function named getMonthlyInterestRate () that returns the monthly interest rate.
double getMonthlyInterestRate();
7) A function named withdraw that withdraws a specified amount from the account.
void withdraw (double amount);
8) A function named deposit that deposits a specified amount to the account.
void deposit (double amount);

Write a test program (main) that creates an Account object with an account ID of 1122, a
balance of 20000, and an annual interest rate of 4.5%.
• Call the withdraw function to withdraw $2500
• Call the deposit function to deposit $3000
• Print the balance and the monthly interest

https://www.thebalancemoney.com/calculate-monthly-interest-315421
*/

#include <iostream>
using namespace std;

class Account
{
public:
    // data fields:
    // 1) An int data field named id for the account.
    int id;
    // 2) A double data field named balance for the account.
    double balance;
    // 3) A double data field named annualInterestRate that stores the current interest rate.
    double annualInterestRate;

    // constructors
    // 4) A no-arg constructor that creates a default account with id 0, balance 0.0, and annualInterestRate 0.0.
    Account()
    {
        id = 0;
        balance = 0.0;
        annualInterestRate = 0.0;
    }
    // 5) A user-defined constructor that creates an account object with given three data fields.
    Account(int i, double b, double a)
    {
        id = i;
        balance = b;
        annualInterestRate = a;
    }

    // 6) A function named getMonthlyInterestRate () that returns the monthly interest rate.
    double getMonthlyInterestRate()
    {
        return annualInterestRate / 12;
    }
    // 7) A function named withdraw that withdraws a specified amount from the account.
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
    }
    // 8) A function named deposit that deposits a specified amount to the account.
    void deposit(double amount)
    {
        balance += amount;
    }
};

int main()
{
    // creates an Account object with an account ID of 1122, a
    // balance of 20000, and an annual interest rate of 4.5%
    Account account1(1122, 20000, 4.5);
    // • Call the withdraw function to withdraw $2500
    account1.withdraw(2500);
    // • Call the deposit function to deposit $3000
    account1.deposit(3000);
    // • Print the balance and the monthly interest
    cout << "The balance for the account is " << account1.balance << endl;
    cout << "The monthly interest rate is " << account1.getMonthlyInterestRate() << endl;
}
