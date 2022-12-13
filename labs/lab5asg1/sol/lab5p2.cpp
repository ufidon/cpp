#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 3.14159265359

int main(){
    // prompts the user to enter the side of a hexagon
    cout << "Enter the side: ";
    double s;
    cin >> s;
    // The area of a hexagon can be computed using the following formula (s is the length of a side):
    double area = 6*s*s/(4*tan(PI/6));
    // displays its area. 
    // https://stackoverflow.com/questions/5907031/printing-the-correct-number-of-decimal-points-with-cout
    cout << "The area of the hexagon is " <<fixed << setprecision(2) << area <<endl;
}