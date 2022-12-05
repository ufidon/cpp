#include <iostream>
using namespace std;

class Person
{
public:
  Person()
  {
    cout << "√ Constructing a person" << endl;
  }

  ~Person()
  {
    cout << "✕ Destructing a person" << endl;
  }

  void toString() const
  {
    cout << "= toString a person" << endl;
  }
};

class Employee : public Person
{
public:
  Employee()
  {
    cout << "√√ Constructing a employee" << endl;
  }

  ~Employee()
  {
    cout << "✕✕ Destructing a employee" << endl;
  }

  void toString() const
  {
    cout << "== toString a employee" << endl;
  }
};

class Faculty : public Employee
{
public:
  Faculty()
  {
    cout << "√√√ Constructing a faculty" << endl;
  }

  ~Faculty()
  {
    cout << "✕✕✕ Destructing a faculty" << endl;
  }

  void toString() const
  {
    cout << "=== toString a faculty" << endl;
  }
};

void print(const Person &p)
{
  cout << "Printing ";
  p.toString();
}

int main()
{
  cout << "create faculty:" << endl;
  Faculty faculty;
  cout << endl;

  cout << "create employee:" << endl;
  Employee employee;
  cout << endl;

  cout << "create person:" << endl;
  Person person;
  cout << endl;

  cout << "print objects of subclasses:" << endl;
  faculty.toString();
  print(faculty);
  employee.toString();
  print(employee);
  print(person);
  cout << endl;

  cout << "Start destructing all objects..." << endl;

  return 0;
}