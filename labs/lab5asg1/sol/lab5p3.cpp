#include <iostream>
#include <string>
using namespace std;

int main()
{
    // that prompts the user to enter a string
    cout << "Enter a string: ";
    string s;
    getline(cin, s);
    // displays the characters at odd index positions (1, 3, 5 …).
    for (int i = 1; i < s.size(); i += 2)
    {
        cout << s[i];
    }
    cout << endl;
}