/*
Write a complete C++ program that creates a pointer called p and an integer variable called num with a value 5. Your program must print the following outputs:
• Print the value of the integer number directly from the num variable.
• Print the value of the integer number indirectly from the p pointer.
• Print the address of the integer variable directly from the num variable (Use &).
• Print the address of the integer variable indirectly from the p pointer.
• Print the value of the p pointer.
• Print the address of the p pointer
https://liveexample.pearsoncmg.com/liang/cpp3e/html/TestPointer.html
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n = 5;
    int *p = &n;

    cout << "The value of the num is " << n << endl;
    cout << "The value of the num is " << *p << endl;
    cout << "The address of the num is 0x" << hex << &n << endl;
    cout << "The address of the num is 0x" << p << endl;
    cout << "The value of the num is 0x" << p << endl;
    cout << "The address of the p pointer is 0x" << &p << endl;
}