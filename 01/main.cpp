#include <iostream>


using namespace std;


class Calculator {
private:
    double num1, num2;
public:
    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double substract_1_2() {
        return num1 - num2;
    }
    double substract_2_1() {
        return num2 - num1;
    }
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }
    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {return false;}
    }
    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {return false;}
    }
};


void Calc(Calculator c) {
    cout << "num1 + num2 = " << c.add() << endl;
    cout << "num1 - num2 = " << c.substract_1_2() << endl;
    cout << "num2 - num1 = " << c.substract_2_1() << endl;
    cout << "num1 * num2 = " << c.multiply() << endl;
    cout << "num1 / num2 = " << c.divide_1_2() << endl;
    cout << "num2 / num1 = " << c.divide_2_1() << endl;
}


int main() {
    Calculator c;
    double num1;
    double num2;
    do {
        cout << "Введите num1: "; cin >> num1;
        if (num1 <= 0) {
            do {
                cout << "Неверный ввод!" << endl;
                c.set_num1(num1);
                cout << "Введите num1: "; cin >> num1;
            } while (num1 <= 0);
        }
        c.set_num1(num1);
        cout << "Введите num2: "; cin >> num2;
        if (num2 <= 0) {
            do {
                cout << "Неверный ввод!" << endl;
                c.set_num2(num2);
                cout << "Введите num2: "; cin >> num2;
            } while (num2 <= 0);
        }
        c.set_num2(num2);
        Calc(c);
    } while(true);
    return 0;
}
