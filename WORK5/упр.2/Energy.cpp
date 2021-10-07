//
// Created by Admin on 07.10.2021.
//

#include "Energy.h"

using namespace std;

Energy::Energy(short system1_, short system2_): system1(system1_), system2(system2_) {}
double Energy::getValue() {
    return value;
}
void Energy::printValue() {
    cout << value << endl;
}
void Energy::setValue(double value_) {
        double value__;
    switch(system1) {
        case(1):
            value__ = value_;
            break;
        case(2):
            value__ = value_ / const1;
            break;
        case(3):
            value__ = value_ / const2;
            break;
    }
    switch(system2) {
        case(1):
            value = value__;
            break;
        case(2):
            value = const1 * value__;
            break;
        case(3):
            value = const2 * value__;
            break;
    }
}