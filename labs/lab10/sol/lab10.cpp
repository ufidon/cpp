#include <iostream>
using namespace std;

template <typename T>
class myVector
{
private:
    T *vec;
    int numOfElements, capacity;

public:
    myVector();
    myVector(int _capacity);
    myVector(const myVector &vec);
    ~myVector();

    void insertBeg(T value);
    void insertEnd(T value);

    void removeBeg();
    void removeEnd();

    void increaseCapacity();
    void decreaseCapacity();

    void print();
    bool operator==(const myVector &secondVector);
};

template <typename T>
myVector<T>::myVector()
{

    capacity = 4;
    numOfElements = 0;
    vec = new T[capacity];
}

template <typename T>
myVector<T>::myVector(int _capacity)
{

    if (_capacity > 0)
    {
        capacity = _capacity;
    }
    else
    {
        capacity = 4;
    }

    numOfElements = 0;
    vec = new T[capacity];
}

template <typename T>
myVector<T>::myVector(const myVector &vector)
{

    capacity = vector.capacity;
    numOfElements = vector.numOfElements;
    vec = new T[capacity];

    for (int i = 0; i < numOfElements; i++)
        vec[i] = vector.vec[i];
}

template <typename T>
myVector<T>::~myVector()
{

    delete[] vec;
}

template <typename T>
void myVector<T>::print()
{
    cout << "vec: (";
    for (int i = 0; i < numOfElements; i++)
    {
        cout << vec[i] << ((i == numOfElements - 1) ? "" : " ");
    }
    cout << ")" << endl;
}

template <typename T>
void myVector<T>::insertBeg(T value)
{

    increaseCapacity();

    for (int i = numOfElements; i > 0; i--)
        vec[i] = vec[i - 1];

    vec[0] = value;
    numOfElements++;
}

template <typename T>
void myVector<T>::insertEnd(T value)
{

    increaseCapacity();

    vec[numOfElements] = value;
    numOfElements++;
}

template <typename T>
void myVector<T>::removeBeg()
{

    for (int i = 1; i < numOfElements; i++)
        vec[i - 1] = vec[i];

    numOfElements--;
    decreaseCapacity();
}

template <typename T>
void myVector<T>::removeEnd()
{
    numOfElements--;
    decreaseCapacity();
}

template <typename T>
void myVector<T>::increaseCapacity()
{

    if (numOfElements == capacity)
    {
        T *old = vec;
        capacity = 2 * numOfElements;
        vec = new T[capacity];

        for (int i = 0; i < numOfElements; i++)
            vec[i] = old[i];

        delete[] old;
    }
}

template <typename T>
void myVector<T>::decreaseCapacity()
{

    if (numOfElements == capacity / 2)
    {
        T *old = vec;
        capacity = capacity / 2;
        vec = new T[capacity];

        for (int i = 0; i < numOfElements; i++)
            vec[i] = old[i];

        delete[] old;
    }
}

template <typename T>
bool myVector<T>::operator==(const myVector &secondVector)
{

    if (numOfElements == secondVector.numOfElements)
    {
        for (int i = 0; i < numOfElements; i++)
            if (vec[i] != secondVector.vec[i])
                return false;
    }
    else
    {
        return false;
    }
    return true;
}

int main()
{

    myVector<int> intVector;
    cout << "intVector created: no elements at the beginning." << endl;
    intVector.print();

    intVector.insertEnd(4);
    cout << "intVector.insertEnd(4): " << endl;
    intVector.print();

    intVector.insertBeg(3);
    cout << "intVector.insertBeg(3) " << endl;;
    intVector.print();

    intVector.insertEnd(6);
    cout << "intVector.insertEnd(6): " << endl;
    intVector.print();

    intVector.insertEnd(2);
    cout << "intVector.insertEnd(2): " << endl;;
    intVector.print();

    intVector.insertBeg(1);
    cout << "intVector.insertBeg(1): " << endl;
    intVector.print();

    intVector.removeEnd();
    cout << "intVector.removeEnd(): " << endl;
    intVector.print();

    intVector.removeBeg();
    cout << "intVector.removeBeg(): " << endl;
    intVector.print();    

    myVector<int> intVector2;
    cout << "intVector2 created: no elements at the beginning." << endl;
    intVector2.print();

    intVector2.insertEnd(4);
    cout << "intVector2.insertEnd(4): " << endl;
    intVector2.print();

    intVector2.insertBeg(7);
    cout << "intVector2.insertBeg(7): " << endl;
    intVector2.print();

    intVector2.insertEnd(6);
    cout << "intVector2.insertEnd(6): " << endl;
    intVector2.print();

    intVector2.insertEnd(2);
    cout << "intVector2.insertEnd(2): " << endl;
    intVector2.print();

    intVector2.insertBeg(1);
    cout << "intVector2.insertBeg(1): " << endl;
    intVector2.print();    

    intVector2.removeEnd();
    cout << "intVector2.removeEnd(): " << endl;
    intVector2.print();

    intVector2.removeBeg();
    cout << "intVector2.removeBeg(): " << endl;
    intVector2.print();    

    if (intVector == intVector2)
        std::cout << "Integer vectors are same!" << std::endl;
    else
        std::cout << "Integer vectors are not same!" << std::endl;

    cout <<endl;

    myVector<char> charVector;
    cout << "charVector created: no elements at the beginning." << endl;
    charVector.print();    

    charVector.insertEnd('a');
    cout << "charVector.insertEnd('a'): " << endl;
    charVector.print(); 

    charVector.insertBeg('b');
    cout << "charVector.insertBeg('b'): " << endl;
    charVector.print();     
    charVector.insertEnd('c');
    cout << "charVector.insertEnd('c'): " << endl;
    charVector.print();     
    charVector.insertEnd('d');
    cout << "charVector.insertEnd('d'): " << endl;
    charVector.print();     
    charVector.insertBeg('e');
    cout << "charVector.insertBeg('e'): " << endl;
    charVector.print();     

    charVector.removeEnd();
    cout << "charVector.removeEnd(): " << endl;
    charVector.print();     
    charVector.removeBeg();
    cout << "charVector.removeBeg(): " << endl;
    charVector.print();      

    myVector<char> charVector2;
    cout << "charVector2 created: no elements at the beginning." << endl;
    charVector2.print(); 
    charVector2.insertEnd('a');
    cout << "charVector2.insertEnd('a'): " << endl;
    charVector2.print();     
    charVector2.insertBeg('b');
    cout << "charVector2.insertBeg('b'): " << endl;
    charVector2.print();     
    charVector2.insertEnd('c');
    cout << "charVector2.insertEnd('c'): " << endl;
    charVector2.print();      
    charVector2.insertEnd('d');
    cout << "charVector2.insertEnd('d'): " << endl;
    charVector2.print();      
    charVector2.insertBeg('e');
    cout << "charVector2.insertBeg('e'): " << endl;
    charVector2.print();      

    charVector2.removeEnd();
    cout << "charVector2.removeEnd(): " << endl;
    charVector2.print();     
    charVector2.removeBeg();
    cout << "charVector2.removeBeg(): " << endl;
    charVector2.print(); 

    if (charVector == charVector2)
        std::cout << "Character vectors are same!" << std::endl;
    else
        std::cout << "Character vectors are not same!" << std::endl;
}