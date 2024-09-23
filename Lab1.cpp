/*Тема: Основи побудови та компіляції простих програм на мові С++.
Мета: Отримати та закріпити знання та практичні навички з основ побудови та компіляції простих програм мовою С++ на прикладі задач з лінійними операторами та операторами розгалуження.

Завдання
		 Програма, яка перевіряє, чи є введене користувачем число простим.
*/
#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    int number;

    cout << "Введіть число: ";
    cin >> number;

    if (number <= 1) {
        cout << number << " не просте число" << endl;
    }
    else {
        if (number % 2 == 0 && number != 2) {
            cout << number << " не просте число" << endl;
        }
        else if (number % 3 == 0 && number != 3) {
            cout << number << " не просте число" << endl;
        }
        else if (number % 5 == 0 && number != 5) {
            cout << number << " не просте число" << endl;
        }
        else {
            cout << number << " просте число" << endl;
        }
    }

    return 0;
}
