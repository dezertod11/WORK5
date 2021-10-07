//
// Created by Admin on 07.10.2021.
//

#include <vector>
#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <math.h>

#ifndef PROJECT2_TANK_H
#define PROJECT2_TANK_H

using namespace std;

class Energy {
private:
    short system1;
    short system2;
    double value;
    const double const1{pow(10,-7)};
    const double const2{1.6* pow(10,-19)};

public:
    Energy(short system1_, short system2_);
    void printValue();
    double getValue();
    void setValue(double value_);
};


#endif //PROJECT2_TANK_H
