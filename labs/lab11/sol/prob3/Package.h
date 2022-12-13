#ifndef _PACKAGE_H
#define _PACKAGE_H

#include <iostream>
#include <string>
using namespace std;

class Package
{
protected:
    string name, address, city, state; 
    int ZIP;
    double weight, costperounce;
    static long id;
public:
    Package(const string& name, const string& address, const string& city, const string& state, int ZIP, double weight, double costperounce);
    void setWeight(double weight);
    void setCostPerOunce(double costperounce);
    double calculateCost() const;
    void printPackageInfo() const;
};

#endif // _PACKAGE_H