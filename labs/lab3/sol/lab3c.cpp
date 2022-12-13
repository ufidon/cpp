/*
Write a function that returns the sum of values at even locations of an array with the following headers:
double sumEven (const double * arr, int size)
Write a test program that reads six double values, invokes this function, and displays the sum of values at even locations.
*/

#include <iostream>
#include <string>
using namespace std;

#define NUMS 6

double sumEven(const double *arr, int size)
{
    double sum = 0;
    for (int i = 1; i < size; i += 2)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    cout << "Please enter six double numbers: ";
    int i = 0;
    double arr[NUMS] = {0};
    while (i < NUMS)
    {
        cin >> arr[i++];
    }

    cout << "Sum of the values at even locations: " << sumEven(arr, NUMS) << endl;
}