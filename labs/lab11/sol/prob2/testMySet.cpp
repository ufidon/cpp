#include <iostream>
#include "MySet.h"

using namespace std;

int main()
{
    cout << "1) Creates a first MySet object s1 with the range of numbers [0; 20]" << endl;
    MySet s1(20);
    cout << "s1 = "; s1.printSet();

    for (int i : {13, 7, 20, 21})
    {
        cout << "s1.insertElement(" << i << "): " << endl;        
        s1.insertElement(i);
        cout << "s1 = "; s1.printSet();
    }

    for (int i : {22, 13})
    {
        cout << "s1.deleteElement(" << i << "): " << endl;
        s1.deleteElement(i);
        cout << "s1 = "; s1.printSet();
    }

    cout << "6) Creates a second MySet object s2 with the range of numbers [0; 100]." << endl;
    MySet s2(100);
    cout << "s2 = "; s2.printSet();
    cout << "s2.isEqualTo(s1) = " << s2.isEqualTo(s1) << endl;

    cout << "8) Creates a third MySet object s3 with the copy constructor with the first object as the argument" << endl;
    MySet s3(s1);
    cout << "s3 = "; s3.printSet();
    cout << "s3.isEqualTo(s1) = " << s3.isEqualTo(s1) << endl;

    return 0;
}