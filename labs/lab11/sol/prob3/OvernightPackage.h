#ifndef _OVERNIGHTPACKAGE_H_
#define _OVERNIGHTPACKAGE_H_

#include <iostream>
#include <string>
#include "Package.h"

using namespace std;

class OvernightPackage : public Package
{
private:
    double extrafeeperounce;

public:
    OvernightPackage(const std::string &name, const std::string &address, const std::string &city, const std::string &state, int ZIP, double weight, double costperounce, double extrafeeperounce);
    void setOvernightFeePerOunce(double extrafeeperounce);
    double calculateCost() const;
    void printPackageInfo() const;
};

#endif // _OVERNIGHTPACKAGE_H_