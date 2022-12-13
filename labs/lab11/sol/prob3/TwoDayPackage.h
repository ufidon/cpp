#ifndef _TWODAYPACKAGE_H_
#define _TWODAYPACKAGE_H_

#include <iostream>
#include <string>
#include "Package.h"

using namespace std;

class TwoDayPackage : public Package
{
private:
    double flatfee;

public:
    TwoDayPackage(const std::string &name, const std::string &address, const std::string &city, const std::string &state, int ZIP, double weight, double costperounce, double flatfee);
    void setFlatFee(double flatfee);
    double calculateCost() const;
    void printPackageInfo() const;
};

#endif // _TWODAYPACKAGE_H_