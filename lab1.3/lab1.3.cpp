#include <iostream>
#include <windows.h>
using namespace std;

// Вариант 1: Передача по значению
void obmen1(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    // изменения остались внутри функции → a и b в main не поменялись
}

// Вариант 2: Передача по указателю
void obmen2(int* x, int* y) {
    int temp = *x;     // берём значение по адресу
    *x = *y;           // записываем по адресу x значение, на которое указывает y
    *y = temp;         // записываем по адресу y сохранённое значение
    // изменения происходят в памяти по адресам a и b в main поменялись
}

// Вариант 3: Передача по ссылке
void obmen3(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
    // работаем напрямую с оригинальными переменными a и b поменялись
}

int main() {
    SetConsoleOutputCP(1251);
    int a = 2, b = 5;

    cout << "До обмена:    a = " << a << ", b = " << b << endl;

    obmen1(a, b);
    cout << "После obmen1: a = " << a << ", b = " << b
        << "   (ничего не изменилось — передача по значению)" << endl;

    obmen2(&a, &b);
    cout << "После obmen2: a = " << a << ", b = " << b
        << "   (поменялись — передали адреса)" << endl;

    obmen3(a, b);
    cout << "После obmen3: a = " << a << ", b = " << b
        << "   (снова поменялись — использовали ссылки)" << endl;

    return 0;
}