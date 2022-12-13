// popular array processings
// derived from textbook 7.2.4 processing arrays

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int size = 5;
    int *arrayA = new int[size];
    int *arrayB = new int[size];

    srand(time(0));
    // 1. Initialing arrays with input values:
    cout << "Enter " << size << " values: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arrayA[i];
    }

    // 2. Initializing arrays with random values:
    for (int i = 0; i < size; i++)
    {
        arrayB[i] = rand() % 100;
    }

    // 3. Printing arrays:
    cout << "arrayA: (";
    for (int i = 0; i < size; i++)
    {
        cout << arrayA[i] << (i == size - 1 ? "" : " ");
    }
    cout << ")" << endl;

    // 4. Copying arrays for deep copy:
    cout << "Copy arrayB to arrayA: " << endl;
    for (int i = 0; i < size; i++)
    {
        arrayA[i] = arrayB[i];
    }

    // 5. Summing all elements
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arrayA[i];
    }

    // 6. find the largest/smallest elements
    int largest = arrayB[0], smallest = arrayB[0];
    for (int i = 1; i < size; i++)
    {
        if (largest < arrayB[i])
        {
            largest = arrayB[i];
        }

        if (smallest > arrayB[i])
        {
            smallest = arrayB[i];
        }
    }

    // 7. Finding the smallest index of the largest element
    // the smallest index of the smallest element can be found similarly
    int minindex = 0;
    largest = arrayB[0];
    for (int i = 1; i < size; i++)
    {
        if (largest < arrayB[i])
        {
            largest = arrayB[i];
            minindex = i;
        }
    }

    // 8. Finding the largest index of the largest element
    // the largest index of the smallest element can be found similarly
    int maxindex = size - 1;
    largest = arrayB[size - 1];
    for (int i = size - 1; i >= 0; i--)
    {
        if (largest < arrayB[i])
        {
            largest = arrayB[i];
            maxindex = i;
        }
    }

    // 9. Random shuffling
    for (int i = size - 1; i > 0; i--)
    {
        // Generate an index j randomly within 0<=j<=i
        int j = rand() % (i + 1);
        // Swap the i-th element with the j-th element
        int temp = arrayA[i];
        arrayA[i] = arrayA[j];
        arrayA[j] = temp;
    }

    // 10. Shifting elements to the left by one position
    // you may discard the 0-th element,
    // or put it to the original rightmost element,
    // which is called rotate to the left by one position
    int temp = arrayB[0];
    for (int i = 1; i < size; i++)
    {
        arrayB[i - 1] = arrayB[i];
    }
    arrayB[size - 1] = temp;

    // 11. Shifting elements to the right by one position
    // you may discard the rightmost element,
    // or put it to the original 0-th element,
    // which is called rotate to the right by one position
    temp = arrayA[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        arrayA[i + 1] = arrayA[i];
    }
    arrayA[0] = temp;

    // 12. Simplifying coding
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cout << "Enter a day of a week (1 to 7): ";
    int day;
    cin >> day;
    cout << "The day is " << days[day - 1] << endl;
}
