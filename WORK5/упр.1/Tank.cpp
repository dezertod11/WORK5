//
// Created by Admin on 07.10.2021.
//

#include "Tank.h"

using namespace std;

Tank::Tank() : name("T1"), nation("USSR"), speed(0.1), price(0.1) {
    cout << "A new default tank created!" << endl;
}
Tank::Tank(string _name, string _nation, double _speed, double _price) : name(_name), nation(_nation), speed(_speed), price(_price) {
    cout << "A new really tank created!" << endl;
}
void Tank::print(){
    cout << "Type: " << name << endl;
    cout << "Nation: " << nation << endl;
    cout << "Speed: " << speed << endl;
    cout << "Price: " << price << endl;
    cout << "\n";
}
Tank::~Tank() {
    cout << "A tank was deleted!" << endl;

}
string Tank::getName() const{
    return name;
}
string Tank::getNation() const{
    return nation;
}
double Tank::getSpeed() const{
    return speed;
}
double Tank::getPrice() const{
    return price;
}