#include <iostream>
#include <string>
#include "OvernightPackage.h"

using namespace std;

OvernightPackage::OvernightPackage(const std::string &name, const std::string &address, const std::string &city, const std::string &state, int ZIP, double weight, double costperounce, double extrafeeperounce):Package(name, address, city, state, ZIP, weight, costperounce)
{
    this->extrafeeperounce = extrafeeperounce;
}
void OvernightPackage::setOvernightFeePerOunce(double extrafeeperounce)
{
    if (extrafeeperounce <= 0)
    {
        cout << "Warning: extrafeeperounce must be positive." << endl;
        this->extrafeeperounce = 0;
    }
    else
    {
        this->extrafeeperounce = extrafeeperounce;
    } 
}
double OvernightPackage::calculateCost() const
{
    return (costperounce+extrafeeperounce)*weight;
}
void OvernightPackage::printPackageInfo() const
{
    cout << "-------------------------------------------------" << endl;
    cout << "Overnight Package id " << id << ":\n"
         << endl;
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << ZIP << "\n\n";
    cout << "Cost: $" << calculateCost() << endl;
    cout << "-------------------------------------------------" << endl;
}
