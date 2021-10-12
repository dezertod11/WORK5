//
// Created by Admin on 07.10.2021.
//

#include <vector>
#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>

#ifndef PROJECT2_TANK_H
#define PROJECT2_TANK_H

using namespace std;

class Tank {
private:
    string name;
    string nation;
    double speed;
    double price;

public:
    Tank();
    Tank(string _name, string _nation, double _speed, double _price);
    void print();
    ~Tank();
    string getName() const;
    string getNation() const;
    double getSpeed() const;
    double getPrice() const;
};


#endif //PROJECT2_TANK_H
