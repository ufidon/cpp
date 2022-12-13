#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    //  prompts the user to enter an integer number
    cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
    // read that number from the keyboard.
    cin>>num;

    // If the entered number is negative, your program should print the following message: “The program doesn’t accept negative numbers” and stop the execution
    if (num<0)
    {
        cout << "The program does not accept negative numbers" <<endl;
    }
    else if (num>=0 && num<=100)
    {
        // If the entered number is positive and less than or equal to 100 (between 0 to 100), the program should check and display whether the number is divisible by four or not. Also, your program must display quotient and remainder.
        if (num%4==0)
        {
            cout << "The given number ("<<num<<") is divisible by 4" << endl;
        }
        else{
            cout << "The given number ("<<num<<") is not divisible by 4" << endl;
        }
        int q=num/4, r=num%4;
        cout << "Quotient: "<<q<<" and Remainder: "<<r<<endl;
    }
    else
    {
        // If the entered number is greater than 100, your program should print the square root of the given number.
        double root=sqrt(num);
        cout<<"The entered number is greater than 100 and square root of the number is "<< root<<endl;
    }    
    
    return 0;

}