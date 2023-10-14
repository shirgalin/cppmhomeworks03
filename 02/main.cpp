#include <iostream>


using namespace std;


class Counter {
private:
    int counter;
public:
    int increase(int count) {
        return counter++;
    }
    int decrease(int count) {
        return counter--;
    }
    int print_counter() {
        return counter;
    }
    Counter(int counter) {
        this->counter = counter;
    }
    Counter() {
        counter = 1;
    }
};


void counter(string &pcommand) {
    int counter = 0;
    string* command1 = &pcommand;
    if (*command1 == "да") {
        cout << "Введите начальное значение счетчика: "; cin >> counter;
    }
    Counter c1(counter);
    do {
        cout << "Введите команду ('+', '-', '=' или 'х'): "; cin >> *command1;
        if (*command1 == "+") {
            c1.increase(counter);
        }
        else if (*command1 == "-") {
            c1.decrease(counter);
        }
        else if (*command1 == "=") {
            cout << c1.print_counter() << endl;
        }
    }  while (*command1 != "х");
    cout << "До свидания!" << endl;
}

int main() {
    string command;
    cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: "; cin >> command;
    string *pcommand = {&command};
    if (command == "да") {
        counter(*pcommand);
    }
    else if (command == "нет") {
        counter(*pcommand);
    }
    return 0;
}
