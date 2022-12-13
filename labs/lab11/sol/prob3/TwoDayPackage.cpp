#include <iostream>
#include <string>
#include "TwoDayPackage.h"

using namespace std;

TwoDayPackage::TwoDayPackage(const std::string &name, const std::string &address, const std::string &city, const std::string &state, int ZIP, double weight, double costperounce, double flatfee) : Package(name, address, city, state, ZIP, weight, costperounce)
{
    this->flatfee = flatfee;
}
void TwoDayPackage::setFlatFee(double flatfee)
{
    if (flatfee <= 0)
    {
        cout << "Warning: flatfee must be positive." << endl;
        this->flatfee = 0;
    }
    else
    {
        this->flatfee = flatfee;
    }    
}
double TwoDayPackage::calculateCost() const
{
    return flatfee + Package::calculateCost();
}

void TwoDayPackage::printPackageInfo() const
{
    cout << "-------------------------------------------------" << endl;
    cout << "Two Day Package id " << id << ":\n"
         << endl;
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << ZIP << "\n\n";
    cout << "Cost: $" << calculateCost() << endl;
    cout << "-------------------------------------------------" << endl;
}
