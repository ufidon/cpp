/*
Write a program that displays the following table (note that 1 meter is 3.280 feet). You must also use setw(10) to specify the number of columns for each column. Use the left manipulator to left-justify your output and setprecision() manipulator to specify number of digits.
Meters      Feet
1           3.280
2           6.560
...
14          45.920
15          49.200
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#define ROWS 15
int main()
{
    cout << left << fixed;

    // print header
    cout << setw(10) << "Meters" << setw(10) << "Feet" << endl;

    // print each row
    for (int i = 0; i < ROWS; i++)
    {
        // 1 meter is 3.280 feet
        cout << setw(10) << (i + 1) << setw(10) << setprecision(3) << (i + 1) * 3.280 << endl;
    }
}