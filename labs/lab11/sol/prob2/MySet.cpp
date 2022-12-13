#include <iostream>
#include "MySet.h"

using namespace std;

MySet::MySet(unsigned int range)
{
    this->range = range;
    set = new bool[range + 1]; // [0..range]
    for (int i = 0; i <= range; i++)
    {
        set[i] = false;
    }
    size = 0;
}
MySet::MySet(const MySet &s)
{
    if (this != &s)
    {
        range = s.range;
        size = s.size;

        set = new bool[s.range + 1];
        for (int i = 0; i <= s.range; i++)
        {
            set[i] = s.set[i];
        }
    }
}

void MySet::insertElement(int k)
{
    if (k < 0 || k > range)
    {
        cout << "Warning: " << k << " is out of range [0," << range << "]" << endl;
    }
    else if (set[k])
    {
        cout << k << " is already in the set." << endl;
    }
    else
    {
        set[k] = true;
        size++;
    }
}
void MySet::deleteElement(int k)
{
    if (k < 0 || k > range)
    {
        cout << "Warning: " << k << " is out of range [0," << range << "]" << endl;
    }
    else if (!set[k])
    {
        cout << k << " is NOT in the set." << endl;
    }
    else
    {
        set[k] = false;
        size--;
    }
}
void MySet::printSet() const
{
    if (size == 0)
    {
        cout << "{ --- }" << endl;
    }
    else
    {
        int count = 0;
        cout << "{ ";
        for (int i = 0; i <= range; i++)
        {
            if (set[i])
            {
                count++;
                cout << i << (count == size ? " " : ", ");
            }
        }
        cout << "}" << endl;;
    }
}
bool MySet::isEqualTo(const MySet &r)
{
    if ((size != r.size) || (range != r.range))
    {
        return false;
    }
    else
    {
        for (int i = 0; i <= range; i++)
        {
            if (set[i] != r.set[i])
                return false;
        }

        return true;
    }
}
MySet::~MySet()
{
    delete[] set;
}