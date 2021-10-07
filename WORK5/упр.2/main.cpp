#include <vector>
#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>

#include "Energy.h"

using namespace std;




int main()
{
    SetConsoleOutputCP(CP_UTF8);
    short tmpSystem1, tmpSystem2;
    double tmpValue;
    cout << "Выберите исходные единицы измерения энергии: \n1. СИ(Дж) \n2.СГС(эрг) \n3.эВ" << endl;
    cin >> tmpSystem1;
    cout << "Введите значение энергии:" << endl;
    cin >> tmpValue;
    cout << "Выберите конечные единицы измерения энергии: \n1. СИ(Дж) \n2.СГС(эрг) \n3.эВ" << endl;
    cin >> tmpSystem2;
    Energy energy(tmpSystem1, tmpSystem2);
    energy.setValue(tmpValue);
    energy.printValue();
    return 0;
}
