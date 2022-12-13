#include <iostream>

using namespace std;

int main()
{

    double miles, milespergallon, dollarpergallon, drivingcost;

    cout << "Enter the driving distance: ";
    cin >> miles;

    cout << "Enter miles per gallon: ";
    cin >> milespergallon;

    cout << "Enter price per gallon: ";
    cin >> dollarpergallon;

    drivingcost = miles / milespergallon * dollarpergallon;
    cout << "The cost of driving is $" << drivingcost << endl;
}
