
// read a sequence of numbers and stop at 0 (don't count this 0)
// and find their average
#include <iostream>
using namespace std;

int main()
{
    // read the first integer
    cout << "Enter numbers: ";
    int n, count=0;
    double sum=0;
    cin >> n;
    count++;
    sum += n;
    // if the first integer is not 0, 
    if (n != 0)
    {
        // continue reading the next integer
        while (cin >> n)
        {
            // the input ends with number 0, if n==0 break out of the loop
            if (n == 0)
                break;
            
            count++;
            sum += n;
        }        
    }
    cout << "You entered " << count << " numbers" <<endl;
    cout << "Their sum is " << sum << endl;
    cout << "Their average is " << sum/count<<endl;
}