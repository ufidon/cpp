#include <iostream>
#include "IntSet.h"

using namespace std;

IntSet::IntSet(int min, int max)
{
    this->max = max;
    this->min = min;
    flags = new bool[max - min + 1]; // [0..max-min]
    for (int i = min; i <= max; i++)
    {
        flags[i - min] = false;
    }
    size = 0;
}
IntSet::IntSet(const IntSet &s)
{
    if (this != &s)
    {
        min = s.min;
        max = s.max;
        size = s.size;

        flags = new bool[s.max - s.min + 1];
        for (int i = min; i <= max; i++)
        {
            flags[i - min] = s.flags[i - min];
        }
    }
}

void IntSet::insertInteger(int i)
{
    if (i < min || i > max)
    {
        cout << "Warning: " << i << " is out of range [" << min << "," << max << "]" << endl;
    }
    else if (flags[i - min])
    {
        cout << i << " is already in the integer set." << endl;
    }
    else
    {
        flags[i - min] = true;
        size++;
    }
}
void IntSet::removeInteger(int i)
{
    if (i < min || i > max)
    {
        cout << "Warning: " << i << " is out of range [" << min << "," << max << "]" << endl;
    }
    else if (!flags[i - min])
    {
        cout << i << " is NOT in the integer set." << endl;
    }
    else
    {
        flags[i - min] = false;
        size--;
    }
}
void IntSet::print() const
{
    if (size == 0)
    {
        cout << "{}" << endl;
    }
    else
    {
        int count = 0;
        cout << "{";
        for (int i = 0; i <= max - min; i++)
        {
            if (flags[i])
            {
                count++;
                cout << i + min << (count == size ? "" : ",");
            }
        }
        cout << "}" << endl;
    }
}
bool IntSet::equal(const IntSet &r)
{
    if ((max != r.max) || (min != r.min) || (size != r.size))
    {
        return false;
    }
    else
    {
        for (int i = 0; i <= max - min; i++)
        {
            if (flags[i] != r.flags[i])
                return false;
        }

        return true;
    }
}
IntSet::~IntSet()
{
    delete[] flags;
}