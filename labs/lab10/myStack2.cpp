#include <iostream>
using namespace std;

template <typename T>
class Stack
{
public:
    Stack();
    Stack(const Stack &);
    ~Stack();
    bool empty() const;
    T peek() const;
    void push(T value);
    T pop();
    int getSize() const;
    void print() const;

    template <typename S>
    friend bool operator==(const Stack<S> &l, const Stack<S> &r);

private:
    T *elements;
    int size;
    int capacity;
    void ensureCapacity();
};

template <typename T>
void Stack<T>::print() const
{
    cout << "elements:(";
    for (int i = 0; i < size; i++)
    {
        cout << elements[i] << (i == size - 1 ? "" : ",");
    }
    cout << ")" << endl;
}


template <typename T>
bool operator==(const Stack<T> &l, const Stack<T> &r)
{
    bool equal = true;
    if (l.size != r.size)
    {
        equal = false;
    }
    else
    {
        for (int i = 0; i < l.size; i++)
        {
            if (l.elements[i] != r.elements[i])
                equal = false;
        }
    }

    return equal;
}

template <typename T>
Stack<T>::Stack() : size(0), capacity(16)
{
    elements = new T[capacity];
}

template <typename T>
Stack<T>::Stack(const Stack &stack)
{
    elements = new T[stack.capacity];
    size = stack.size;
    capacity = stack.capacity;
    for (int i = 0; i < size; i++)
    {
        elements[i] = stack.elements[i];
    }
}

template <typename T>
Stack<T>::~Stack()
{
    delete[] elements;
}

template <typename T>
bool Stack<T>::empty() const
{
    return (size == 0);
}

template <typename T>
T Stack<T>::peek() const
{
    return elements[size - 1];
}

template <typename T>
void Stack<T>::push(T value)
{
    ensureCapacity();
    elements[size++] = value;
}

template <typename T>
void Stack<T>::ensureCapacity()
{
    if (size >= capacity)
    {
        T *old = elements;
        capacity = 2 * size;
        elements = new T[size * 2];

        for (int i = 0; i < size; i++)
            elements[i] = old[i];

        delete[] old;
    }
}

template <typename T>
T Stack<T>::pop()
{
    return elements[--size];
}

template <typename T>
int Stack<T>::getSize() const
{
    return size;
}

int main()
{
    Stack<int> intStack;
    cout << "intStack created: no elements at the beginning." << endl;
    intStack.print();

    intStack.push(3);
    cout << "intStack.push(3):"<< endl;
    intStack.print();

    intStack.push(5);
    cout << "intStack.push(5):"<< endl;
    intStack.print();

    intStack.push(7);
    cout << "intStack.push(7):"<< endl;
    intStack.print();

    intStack.pop();
    cout << "intStack.pop():"<< endl;
    intStack.print();

    intStack.pop();
    cout << "intStack.pop():"<< endl;
    intStack.print();

    Stack<int> intStack2;
    cout << "intStack2 created: no elements at the beginning." << endl;
    intStack2.print();

    intStack2.push(3);
    cout << "intStack.push(3):"<< endl;
    intStack2.print();

    cout << "intStack == intStack2? " << (intStack == intStack2) << endl;

    intStack2.push(5);
    cout << "intStack.push(5):"<< endl;
    intStack2.print();

    cout << "intStack == intStack2? " << (intStack == intStack2) << endl;
}