# Problem 1
Design a generic function that returns true if all the elements in the second array are greater than any element in the first array. Test the function with an array of int, double, and string values. Function has the following prototype:

```C++
template<typename T>
bool isGreater(const T list1 [ ], const T list2 [ ], int size1, int size2);
```

Hint: returns the minimum of the second array  > the maximum of the first array

# Problem 2
**Design a class** named MySet which can hold integers from 0 to a defined range. The set is   represented as a dynamic array of Boolean values. Element with the index j is true if integer j is in the set. Element with the index k is false if integer k is not in the set. The class contains:
* Private unsigned int data members range that represents the biggest possible integer in a set. 
* Private size that represents a number of elements in a set.
* Private pointer to bool named set.
* A user-defined constructor MySet(unsigned) that creates a MySet object with dynamic array with the range of elements from 0 to the given number inclusively and initializes the set of elements to false.
* A copy constructor MySet(const MySet &) that creates a set with a given MySet object.
* A destructor that destroys dynamically allocated array. 
* A function void insertElement(int k) that places a new integer k into a set by setting set[k] to true. Function should check if the given number is in the range of a set numbers and print a warning message if the given number is out of the range.
* A function void deleteElement(int k) that deletes integer k by setting set[k] to false. Function should check if the given number is in the range of a set numbers and print a warning message if the given number is out of the range.
* A constant function void printSet() that prints a set as a list of coma-separated numbers. The function prints only those elements that are present in the set. It also prints { --- } for an empty set. You should implement the required output format (see the sample run).
* A constant function bool isEqualTo(const MySet&) that determines whether two sets are equal.

**Write a test program** (testMySet.cpp) that does the following:
1) Creates a first MySet object with the range of numbers [0; 20]. 
2) Inserts numbers 13, 7, 20, 21.
3) Calls printSet function from the created object. 
4) Deletes numbers 22 and 13.
5) Calls printSet function from the created object. 
6) Creates a second MySet object with the range of numbers [0; 100].
7) Calls printSet function from the second object. 
8) Creates a third MySet object with the copy constructor with the first object as an argument.
9) Checks is the third set equals to the first set by calling isEqualTo function from one of the objects and prints the result. 

# Problem 3
Package-delivery services offer several different shipping options, each with specific costs associated. Create a complete C++ program to represent various types of packages.

**Create a base class Package** that includes protected data members representing the name, address, city, state and ZIP code for the recipient of the package, the weight (in ounces) and cost per ounce to ship the package. Package class also contains a static data member ID and the following methods:
* A constructor Package(const string& name, const string& address, const string& city, const string& state, int ZIP, double weight, double costperounce) that creates a package with specified parameters. Don’t forget to update the ID (Hint: increment it by 1).
* The mutator functions setWeight and setCostPerOunce. The mutator functions should validate that the weight and cost per ounce contain positive values. If non-positive values were provided the class should print an appropriate message and set the parameter to 0.
* A constant public member function calculateCost that returns a double indicating the cost associated with shipping the package. Package’s calculateCost function should determine the cost by multiplying the weight by the cost per ounce.
* A constant public member function printPackageInfo that displays a package information in a following format:

**Create a derived class TwoDayPackage** that inherits the functionality of base class Package, but also includes a data member flatfee that represents a flat fee that the shipping company charges for two-day-delivery service. TwoDayPackage class contains the following methods:
* A constructor TwoDayPackage(const std::string &name, const std::string &address, const std::string &city, const std::string &state, int ZIP, double weight, double costperounce, double flatfee) that creates a package with specified parameters.
* The mutator function setFlatFee. The mutator function should validate that the flat fee contains a positive value. If non-positive value was provided the class should print an appropriate message and set the parameter to 0. 
* A redefined member function calculateCost so that it computes the shipping cost by adding the flat fee to the weight-based cost calculated by base class Package’s calculateCost function.
* A redefined member function printPackageInfo that displays a two-day package information in a following format:

**Create a derived class OvernightPackage** that inherits the functionality of base class Package, but also includes a data member extrafeeperounce representing an additional fee per ounce
charged for overnight-delivery service. OvernightPackage class contains the following methods:
* A constructor OvernightPackage(const std::string &name, const std::string &address, const std::string &city, const std::string &state, int ZIP, double weight, double costperounce, double extrafeeperounce) that creates a package with specified parameters.
* A redefined member function calculateCost so that it adds the additional fee per ounce to the standard cost per ounce and multiplies it by the package’s weight.
* The mutator function setOvernightFeePerOunce. The mutator function should validate that the overnight fee contains a positive value. If non-positive value was provided the class should print an appropriate message and set the parameter to 0.
* A redefined member function printPackageInfo that displays an overnight package information in a following format:   

**Then a test program** creates a package object p1("John Smith", "1020 Orange St", "Lakeland", "FL", 33111, 10.5, 0.4), a two-day package object p2("Bob George", "21 Pine Rd", "Cambridge", "MA", 44444, 10.5, 0.65, 2.0), an overnight package object p3("Don Kelly", "9 Main St", "Denver", "CO", 66666, 12.25, 0.7, 0.25), and displays the result of p1.printPackageInfo(), p2.printPackageInfo(), and p3.printPackageInfo() just after each creation respectively.       