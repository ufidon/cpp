#include <iostream>
#include <string>
#include "Package.h"

using namespace std;

long Package::id = 0;

Package::Package(const string &name, const string &address, const string &city, const string &state, int ZIP, double weight, double costperounce)
{
    this->name = name;
    this->address = address;
    this->city = city;
    this->state = state;
    this->ZIP = ZIP;
    this->weight = weight;
    this->costperounce = costperounce;
    id++;
}
void Package::setWeight(double weight)
{
    if (weight <= 0)
    {
        cout << "Warning: weight must be positive." << endl;
        this->weight = 0;
    }
    else
    {
        this->weight = weight;
    }
}
void Package::setCostPerOunce(double costperounce)
{
    if (costperounce <= 0)
    {
        cout << "Warning: costperounce must be positive." << endl;
        this->costperounce = 0;
    }
    else
    {
        this->costperounce = costperounce;
    }
}
double Package::calculateCost() const
{
    return costperounce * weight;
}
void Package::printPackageInfo() const
{
    cout << "-------------------------------------------------" << endl;
    cout << "Package id " << id << ":\n"
         << endl;
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << ZIP << "\n\n";
    cout << "Cost: $" << calculateCost() << endl;
    cout << "-------------------------------------------------" << endl;
}