#ifndef _MYSET_H_
#define _MYSET_H_

class MySet
{
private:
    unsigned int range;
    int size;
    bool *set;
public:
    MySet(unsigned int range);
    MySet(const MySet& s);
    void insertElement(int k);
    void deleteElement(int m);
    void printSet() const;
    bool isEqualTo(const MySet& r);
    ~MySet();
};

#endif // _MYSET_H_