/*
Write a recursion function that returns the number of even digits in an integer using the following header:
int evenCount(int value)
Write a test program that prompts the user to enter an integer, invokes the function and displays the number of even digits in it. Zero is an even digit.
*/
#include <iostream>
#include <string>
using namespace std;

int evenCount(int n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        int q = n / 10, r = n % 10, br = 0;
        if (r % 2 == 0)
        {
            br = 1;
        }
        else
        {
            br = 0;
        }
        return br + evenCount(q);
    }
}

int evenCount(string n)
{
    if (n.size() == 1)
    {
        return (n[0] - '0') % 2 == 0 ? 1 : 0;
    }
    else
    {
        return ((n[0] - '0') % 2 == 0 ? 1 : 0) + evenCount(string(n.c_str() + 1));
    }
}

int main()
{
    cout << "Enter the number ";
    int n;
    cin >> n;
    cout << "The nubmer of even digits is " << evenCount(n) << endl;
    cout << "The nubmer of even digits is " << evenCount(to_string(n)) << endl;
}