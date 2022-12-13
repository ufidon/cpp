/*
Write a program that reads integers, finds the largest of them, and counts its occurrences. Assume that the input ends with number 0. Suppose that you entered 3 5 2 5 5 5 0; the program finds that the largest is 5 and the occurrence count for 5 is 4.
Hint: Maintain two variables, max and count. max stores the current max number, and count stores its occurrences. Initially, assign the first number to max and 1 to count. Compare each subsequent number with max. If the number is greater than max, assign it to max and reset count to 1. If the number is equal to max, increment count by 1.
*/

#include <iostream>
using namespace std;

int main()
{
    // read the first integer
    cout << "Enter numbers: ";
    int n;
    cin >> n;
    // Initially, assign the first number to max and 1 to count.
    int max = n, count = 1;

    // if the first integer is not 0, 
    if (n != 0)
    {
        // continue reading the next integer
        while (cin >> n)
        {
            // If the number is greater than max, assign it to max and reset count to 1
            if (n > max)
            {
                max = n;
                count = 1;
            }
            else if (n == max)
            {
                //If the number is equal to max, increment count by 1
                count++;
            }

            // the input ends with number 0, if n==0 break out of the loop
            if (n == 0)
                break;
        }        
    }

    cout << "The largest number is " << max << endl;
    cout << "The occurrence count of the largest number is " << count << endl;
}