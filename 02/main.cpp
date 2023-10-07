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


void counter(int counter, string command) {
    cout << "Введите начальное значение счетчика: "; cin >> counter;
    Counter c1(counter);
    do {
        cout << "Введите команду ('+', '-', '=' или 'x'): "; cin >> command;
        if (command == "+") {
            c1.increase(counter);
        }
        else if (command == "-") {
            c1.decrease(counter);
        }
        else if (command == "=") {
            cout << c1.print_counter() << endl;
        }
    }  while (command != "x");
    cout << "До свидания!" << endl;
}

int main() {
    Counter c;
    int count = 0;
    string command;
    cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: "; cin >> command;
    if (command == "да") {
        counter(count, command);
    }
    return 0;
}
