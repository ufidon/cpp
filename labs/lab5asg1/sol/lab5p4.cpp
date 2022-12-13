/*
Write a program that reads an integer between 0 and 1000000 and adds all the digits in the integer. For example, if an integer is 932, the sum of all its digits is 14.
Hint: Use the % operator to extract digits and use the / operator to remove the extracted digit. For instance, 932 % 10 = 2 and 932 / 10 = 93.
*/
#include <iostream>
#include <string>
using namespace std;

int sumdigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int ssumdigits(int n)
{
    int sum = 0;
    string sn = to_string(n);
    for (int i = 0; i < sn.size(); i++)
    {
        sum += (sn[i] - '0');
    }

    return sum;
}

int main()
{
    cout << "Enter an integer between 0 and 1000000: ";
    int n;
    cin >> n;
    cout << "The sum of the digits is " << sumdigits(n) << "." << endl;
    // cout << "The sum of the digits is " << ssumdigits(n) << "." << endl;
}