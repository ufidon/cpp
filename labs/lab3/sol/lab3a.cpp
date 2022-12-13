/*
Write the following function that returns a new string in which the uppercase letters are changed to lowercase and lowercase to uppercase.

string swapCase (const string & n)

Write a test program (main) that prompts the user to enter a string and invokes this function and displays the return value from this function.
*/

#include <iostream>
#include <string>
using namespace std;

string swapCase (const string & n){
    string r=n;
    for (int i = 0; i < r.size(); i++)
    {
        if (isupper(r[i]))
        {
            r[i] = tolower(r[i]);
        }
        else if(islower(r[i]))
        {
            r[i] = toupper(r[i]);
        }    
        
    }
    return r;    
}

int main()
{
     string str;
     cout<<"Enter a string: ";
     getline(cin, str);
     
     cout<<"The new string is: "<<swapCase(str);
}