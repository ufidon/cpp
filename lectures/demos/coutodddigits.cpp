// count the number of odd digits in a non-negative integer
#include <iostream>
#include <string>
using namespace std;

int oddcount(int n)
{
    if (n < 10)
    {
        return (n % 2 == 1) ? 1 : 0;
    }
    else
    {
        int q = n / 10, r = n % 10;
        return (r % 2 == 1 ? 1 : 0) + oddcount(q);
    }
}

int oddcount(string n)
{
    if (n.size() == 1)
    {
        return (n[0] - '0') % 2 == 1 ? 1 : 0;
    }
    else
    {
        return ((n[0] - '0') % 2 == 1 ? 1 : 0) + oddcount(string(n.c_str() + 1));
    }
}

int main()
{
    cout << "Enter the number ";
    int n;
    cin >> n;
    cout << "The nubmer of odd digits is " << oddcount(n) << endl;
    cout << "The nubmer of odd digits is " << oddcount(to_string(n)) << endl;
}