#include <iostream>
#include <windows.h>
using namespace std;

// Функция возведения числа x в степень n (x^n)
// Работает только с целыми положительными степенями (n ≥ 0)
int power(int x, int n) {
    int p = 1;           // начальное значение — любая степень 0 = 1
    for (int i = 1; i <= n; i++) {   // считаем от 1 до n включительно
        p *= x;          // p = p * x    → умножаем n раз
    }
    return p;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int base;                    // основание степени
    int k;                       // результат

    cout << "Введите основание степени: ";
    cin >> base;

    // Выводим таблицу степеней от 0 до 9
    for (int i = 0; i < 10; i++) {
        k = power(base, i);
        cout << "n = " << i << ",   " << base << "^" << i << " = " << k << endl;
    }

    // Если base = 0 и n = 0, то будет 1.

    return 0;
}