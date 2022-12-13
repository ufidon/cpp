# Problem 1
In this lab, **design a generic class** named myVector that contains: 

1)  A T pointer type data field named vec. 
2)  Two int data fields named numOfElements and capacity. 
3)  A no-arg constructor that creates a myVector object with a default capacity (4). 
4)  A user-defined constructor that creates a myVector object with the specified capacity. 
5)  A copy constructor myVector(const myVector & vector) that creates a myVector object with a given myVector object. It has to be a deep copy. 
6)  A destructor that makes the dynamically created array free. (Use delete) 
7)  A function void print() that prints all current elements. 
8)  A function void insertBeg(T value) that inserts the given value to the beginning of the array. You should shift the elements to the right in your array. 
9)  A function void insertEnd(T value) that inserts the given value to the end of the array. No need shifting. 
10) A function void removeBeg() that removes the first element of the array. You should shift the elements to the left in your array. 
11) A function void removeEnd() that removes the last element of the array. No need shifting. 
12) A function void increaseCapacity()  that increases the capacity of the array by twice if the size of the array is equal to the capacity. This function must be called from insertEnd() and insertBeg() functions. 
13) A function void decreaseCapacity()  that decreases the capacity of the array by half if the size of the array is equal to half of the capacity. This function must be called from removeEnd() and removeBeg() functions. 

14) Implement == (equal) operator overloading for two myVector objects. It should return true if two vectors are identical, false otherwise. 
    ```C++
    bool operator == (const myVector & secondVector); 
    ```
**Write test code** that tests all functions, constructors, and the destructor. For each subtask, use print to show the current elements: 

1) Create an integer myVector object called intVector. 
2) Call the insertEnd(4), insertBeg(3), insertEnd(6), insertEnd(2), insertBeg(1), removeEnd(),  and removeBeg() functions from the intVector object. 
3) Create another integer myVector object called intVector2. 
4) Call the insertEnd(4), insertBeg(7), insertEnd(6), insertEnd(2), insertBeg(1), removeEnd(),  and removeBeg() functions from the intVector2 object. 
5) Use == operator to show these vectors are not identical. 
6) Repeat the same test with character myVector objects called charVector and charVector2. 
