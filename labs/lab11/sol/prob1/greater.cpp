#include <iostream>
#include <string>

using namespace std;

// test all elements in list2 are greater than any elements in list1
template <typename T>
bool isGreater(const T list1[], const T list2[], int size1, int size2)
{
    T max1 = list1[0];
    for (int i = 1; i < size1; i++)
    {
        if (max1 < list1[i])
        {
            max1 = list1[i];
        }
    }

    T min2 = list2[0];
    for (int i = 1; i < size2; i++)
    {
        if (min2 > list2[i])
        {
            min2 = list2[i];
        }
    }

    //cout << "min2:" << min2 << ";" <<"max1:" << max1 << endl;

    return (min2 > max1);
}

int main()
{
    cout << "Are all elements in the left array larger than any elements in the right array?" << endl;
    int intarr1[] = {5, 3, 2, 7};
    int intarr2[] = {9, 10, 11, 23};
    cout << "{9, 10, 11, 23} > {5, 3, 2, 7}? " << isGreater(intarr1, intarr2, 4, 4) << endl;

    double doublearr1[] = {5.1, 3.2, 2.3, 7.4};
    double doublearr2[] = {9.4, 10.3, 11.2, 2.3};
    cout << "{9.4, 10.3, 11.2, 2.3} > {5.1, 3.2, 2.3, 7.4}? " << isGreater(doublearr1, doublearr2, 4, 4) << endl;

    string strarr1[] = {"Dallas", "Austin", "Antonia"};
    string strarr2[] = {"Miami", "Lakeland", "Tampa", "Orlando"};
    cout << "{\"Miami\", \"Lakeland\", \"Tampa\", \"Orlando\"} > {\"Dallas\", \"Austin\", \"Antonia\"}? " << isGreater(strarr1, strarr2, 3, 4) << endl;
}