#include <iostream>
#include "IntSet.h"

using namespace std;

int main()
{
    IntSet s1(10, 20);
    cout << "s1 = "; s1.print();

    for (int i : {11, 7, 19, 21})
    {
        cout << "s1.insertInteger(" << i << "): " << endl;        
        s1.insertInteger(i);
        cout << "s1 = "; s1.print();
    }

    for (int i : {23, 11, 5})
    {
        cout << "s1.removeInteger(" << i << "): " << endl;
        s1.removeInteger(i);
        cout << "s1 = "; s1.print();
    }

    IntSet s2(-10, 10);
    cout << "s2 = "; s2.print();
    cout << "s2.equal(s1) = " << s2.equal(s1) << endl;

    IntSet s3(s1);
    cout << "s3 = "; s3.print();
    cout << "s3.equal(s1) = " << s3.equal(s1) << endl;

    return 0;
}