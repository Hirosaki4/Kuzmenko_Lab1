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
        int i = 2;
        while (i <= sqrt(number)) {
            if (number % i == 0) {
                cout << number << " не просте число" << endl;
                return 0; 
            }
            i++;
        }
        cout << number << " просте число" << endl;
    }

    return 0;
}
