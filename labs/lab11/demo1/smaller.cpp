#include <iostream>
#include <string>

using namespace std;

// test all elements in array1 of are smaller than any elements in array2
// translate the question to be the maximum of array1 is smaller than the minimum of array2
// array1 has n1 elements, array2 has n2 elements
template <typename T>
bool isSmaller(const T array1[], const T array2[], int n1, int n2)
{
    T max1 = array1[0];
    for (int i = 1; i <= n1 - 1; i++)
    {
        if (max1 < array1[i])
        {
            max1 = array1[i];
        }
    }

    T min2 = array2[0];
    for (int i = 1; i <= n2 - 1; i++)
    {
        if (min2 > array2[i])
        {
            min2 = array2[i];
        }
    }

    return (max1 < min2);
}

int main()
{
    cout << "Are all elements in the left array smaller than any elements in the right array?" << endl;
    int intarr1[] = {5, 3, 2, 7};
    int intarr2[] = {9, 10, 11, 23};
    cout << "{5, 3, 2, 7} < {9, 10, 11, 23}? " << isSmaller(intarr1, intarr2, 4, 4) << endl;

    double doublearr1[] = {5.1, 3.2, 2.3, 7.4};
    double doublearr2[] = {9.4, 10.3, 11.2, 2.3};
    cout << "{5.1, 3.2, 2.3, 7.4} < {9.4, 10.3, 11.2, 2.3}? " << isSmaller(doublearr1, doublearr2, 4, 4) << endl;

    string strarr1[] = {"Dallas", "Austin", "Antonia"};
    string strarr2[] = {"Miami", "Lakeland", "Tampa", "Orlando"};
    cout << "{\"Dallas\", \"Austin\", \"Antonia\"} < {\"Miami\", \"Lakeland\", \"Tampa\", \"Orlando\"}? " << isSmaller(strarr1, strarr2, 3, 4) << endl;
}