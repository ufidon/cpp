#include <iostream>
#include "MyInteger.h"

using namespace std;

int main()
{
    //     displays the result of getAverageOfIntegers()
    // and isOdd(3) at the beginning.
    cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << endl;
    cout << "isOdd(3) = " << MyInteger::isOdd(3) << endl;
    // The test program also creates three MyInteger objects
    //  i1(9323), i2(147), and i3(9323), displays the result of i1.isEven(), i3.equals(843) and
    //  i1.equals(i3). The test program should display the result of getAverageOfIntegers() at the
    //  end.
    MyInteger i1(9323), i2(147), i3(9323);
    cout << "i1.isEven() = " << i1.isEven() << endl;
    cout << "i3.equals(843) = " << i3.equals(843) << endl;

    cout << "i1.equals(i3) = " << i1.equals(i3) << endl;
    cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << endl;
}