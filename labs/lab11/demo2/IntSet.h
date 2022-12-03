#ifndef _INTSET_H_
#define _INTSET_H_

// set of integers within range [min,max]
// indicated by flags[0..max-min]
// flags[i] == true means i+min is in IntSet
// flags[i] == false means i+min is NOT in IntSet

class IntSet
{
private:
    int min, max;
    int size;
    bool *flags;
public:
    IntSet(int min, int max);
    IntSet(const IntSet& s);
    void insertInteger(int i);
    void removeInteger(int i);
    void print() const;
    bool equal(const IntSet& r);
    ~IntSet();
};

#endif // _INTSET_H_