#include <vector>
#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>

#include "Tank.h"

using namespace std;


std::ostream& operator<<(std::ostream & out, Tank & right) {
    string result{""};
    result = "Type: " + right.getName() + "\nNation: " + right.getNation() + "\nSpeed: " + std::to_string(right.getSpeed()) + "\nPrice: " +
             std::to_string(right.getPrice());
    out << result;
    return out;
}



int main()
{
    SetConsoleOutputCP(CP_UTF8);

    Tank T34("T34", "USSR", 40, 10000);
    Tank LEOPARD("LEOPARD", "GERMANY", 60, 500000);
    Tank M6("M6", "USA", 25, 10000000);

    vector<string> names{"T34", "LEOPARD", "M6"};

    string name_{""}, nation_{""};
    double speed_{0}, price_{0};

    cout << "Введите название танка: " << endl;
    getline(cin, name_);
    names.push_back(name_);
    cout << "Введите нацию танка: " << endl;
    getline(cin, nation_);
    cout << "Введите скорость: " << endl;
    cin >> speed_;
    cout << "Введите цену: " << endl;
    cin >> price_;

    Tank ad = {name_, nation_, speed_, price_}; // добавляемый танк

    cout << "Танки из ангара)): " << endl;
    for(int i = 0;i < names.size(); i++) {
        cout << i + 1 << ") " << names[i] << " ";
    }

    int want{0};
    cout << "\n\n";
    cout << "Выберите номер танка, с которым хотите познакомиттся:) " << endl;
    cin >> want;


    switch (want) {
        case 1:
            cout << T34 << endl;
            break;
        case 2:
            LEOPARD.print();
            break;
        case 3:
            M6.print();
            break;
        case 4:
            ad.print();
            break;
        default:
            cout << "Что-то не так" << endl;
    }

    return 0;
}
