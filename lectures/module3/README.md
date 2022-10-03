# Module 3: Advanced programming
Covers chapter 11-14,16 from textbook [Introduction to Programming with C++ 3e](https://liveexample.pearsoncmg.com/liang/cpp3e/)

**Table of contents**

* Dynamic memory management
* Templates, vectors, and stacks
* Operator overloading
* Exception handling
* File input and output
* Inheritance and polymorphism

## Dynamic persistent memory allocation
*chapter 11.9-11.15*

* Creating and accessing dynamic objects
  * The this pointer
  * Destructors
    * Customizing destructors
  * Copy constructors
    * Customizing copy constructors
* Destroying or freeing dynamic objects

---
---

## Templates, vectors, and stacks
*chapter 12*

* [Basic templates](https://en.cppreference.com/w/cpp/language/templates)
  * [Function templates](https://en.cppreference.com/w/cpp/language/function_template)
  * [Template parameters and template arguments](https://en.cppreference.com/w/cpp/language/template_parameters)
  * [Parameter pack](https://en.cppreference.com/w/cpp/language/parameter_pack)
  * [Explicit (full) template specialization](https://en.cppreference.com/w/cpp/language/template_specialization)
* [Class templates](https://en.cppreference.com/w/cpp/language/class_template)
* The C++ [vector class](https://en.cppreference.com/w/cpp/container/vector)
  * [Containers library](https://en.cppreference.com/w/cpp/container)

---
---

## Operator overloading
*chapter 14*

* The relational class
  * with overloaded function operators
* Operator functions
  * Overloading the subscript operator []
  * Overloading augmented assignment operators
  * Overloading the unary operators
  * Overloading the ++ and -- operators
  * Overloading the << and >> operators
  * Overloading the = operators
* Friend functions and friend classes
  * Defining nonmember functions for overloading operators
* Automatic type conversion

---
---


## Exception handling
*chapter 16*

* [exception handling](https://en.cppreference.com/w/cpp/language/exceptions)
  * exception classes
    * custom exception classes
  * [multiple catches](https://en.cppreference.com/w/cpp/language/try_catch)
  * exception propagation
  * [rethrowing exceptions](https://en.cppreference.com/w/cpp/language/throw)
* exception specification
  * [Dynamic exception specification](https://en.cppreference.com/w/cpp/language/except_spec)
  * [Function-try-block](https://en.cppreference.com/w/cpp/language/function-try-block)
* when to use exceptions

---
---

## File input and output
*chapter 13*

* [fstream](https://en.cppreference.com/w/cpp/header/fstream) and file open modes
  * text [i/o](https://en.cppreference.com/w/cpp/io)
    * [formatting output](https://en.cppreference.com/w/cpp/header/iomanip)
    * functions: [getline](https://en.cppreference.com/w/cpp/io/basic_istream/getline), [get](https://en.cppreference.com/w/cpp/io/basic_istream/get) and [put](https://en.cppreference.com/w/cpp/io/basic_ostream/put)
  * binary i/o
  * testing stream states
* [filesystem library](https://en.cppreference.com/w/cpp/filesystem)

---
---

## Inheritance and polymorphism
*chapter 15*

* Base classes and [derived classes](https://en.cppreference.com/w/cpp/language/derived_class)
  * [constructors](https://en.cppreference.com/w/cpp/language/constructor) and [destructors](https://en.cppreference.com/w/cpp/language/destructor)
  * redefining functions
  * polymorphism
    * [virtual functions](https://en.cppreference.com/w/cpp/language/virtual) and dynamic binding
    * [abstract classes](https://en.cppreference.com/w/cpp/language/abstract_class) and pure virtual functions
  * protected scope
* generic programming
  * [static_cast](https://en.cppreference.com/w/cpp/language/static_cast) vs [dynamic_cast](https://en.cppreference.com/w/cpp/language/dynamic_cast)

---
---

## References
* [C++ references](https://en.cppreference.com/w/cpp)