# Problem 1
**Write a complete C++ program** and create 13 classes that form a class tree as shown in the following Figure.
* Every class has only one no-argument constructor, one destructor,  no property, and one regular method called toString().
* Inside of the no-argument constructor of classname, there is only one output statement to print "√ classname constructor called.". The number of √ equals the level of this class. Add a line break at the end of the printout.
* Inside of the destructor of classname, there is only one output statement to print "✕ classname destructor called.". The number of ✕ equals the level of this class. Add a line break at the end of the printout.
* Inside of the toString() function, there is only one output statement to print “= classname constructor called.”. The number of = equals the level of this class. Add a line break at the end of the printout.
* There is no need to split the code in different files, due to the simplicity of all classes. Therefore, place all 13 classes and the main function in a single source file.

Note: You must enable dynamic binding with the help of a virtual function in LivingThing class.

Write a function called display with a LivingThing object as its parameter before the main function. This function calls toString() function from an LivingThing object.

```C++
void display(const LivingThing & obj);
```

**In the main function:**
* Create one object from each leaf class, i.e. classes Sardine, Bass, Tiger, Lion, Chestnut, and Cherry.
* Create an object called tree from Tree class.
* Call toString() function from tree object.
* Call the display function by passing the tree object.
* Create an object called tree from Animal class.
* Call toString() function from animal object from Animal class.
* Call the display function by passing the animal object.
* Call the display function 6 times by passing the each of the six leaf objects.
* Print out a sentence “destruction started...” before the main return statement.