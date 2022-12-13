/*
Write a function that counts and returns number of digits in an integer number using the following header:
int getDigit (int n)
For example, getDigit(39) will return 2 and getDigit(5232) will return 4. Write a test program (main) that prompts the user to enter an integer and displays number of digits in the given integer number.
*/
#include <iostream>
#include <string>
using namespace std;

int getDigits(int n){
    return to_string(n).size();
}

int getDigit(int n){
    int digits=0;
    while (n>0)
    {
        n /= 10;
        digits++;
    }
    return digits;
}

int main()
{
    int n;
    /*
    prompts the user to enter an integer and displays number of digits in the given integer number.
    */
   cout<<"Enter an integer: ";
   cin>>n;

   cout<<"The number of digits in "<<n<<" is "<<getDigit(n)<<endl;
}