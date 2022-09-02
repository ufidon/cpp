
#include <iostream>
#include <string>
using namespace std;

void sort(string& s, int low)
{
    int high = s.size() - 1;
    if (low <= high)
    {
        // Find the smallest element and its index in the right sub list of s[low]
        int indexOfMin = low;
        char min = s[low];
        for (int i = low+1; i <= high; i++)
        {
            if (s[i] < min)
            {
                min = s[i];
                indexOfMin = i;
            }
        }

        // Swap the smallest in the right sub list of s[low] with s[low]
        s[indexOfMin] = s[low];
        s[low] = min;

        // Sort the remaining list
        sort(s, low + 1);
    }
}

void sort(string& s)
{
    sort(s, 0);
}

int main()
{
    cout << "Enter a string: ";
    string s;
    getline(cin, s);

    sort(s);

    cout << "The sorted string is " << s << endl;

    return 0;
}