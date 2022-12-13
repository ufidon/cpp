/*
Write a function that counts the occurrence of each letter in the string using the following header:
void count(const string & s)
Write a test program that reads a string, invokes the count function, and displays the non-zero counts.
https://www.ascii-code.com/
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#define SYMBS 26

void count(const string &s)
{
    int c[SYMBS] = {0};
    // 'a'-'a'=0, 'z'-'a'=25
    for (int i = 0; i < SYMBS; i++)
    {
        char letter = tolower(s[i]);
        int index = letter - 'a';
        if (index >= 0 && index < SYMBS)
        {
            c[letter - 'a']++;
        }
    }
    // displays the non-zero counts
    for (int i = 0; i < SYMBS; i++)
    {
        if (c[i] > 0)
        {
            cout << (char)(i + 'a') << ": " << c[i] << " times" << endl;
        }
    }
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    count(s);
}