#include <iostream>
using namespace std;

int main() {
    cout << "Лабораторна робота №1 гр.319а Заставського Назара" << endl;
    cout << "" << endl;
    double a, b;
    
    cout << "Введіть ширину та довжину прямокутника а та b ";
    cin >> b >> a;

    double S = a * b;
    double P = 2 * (a + b);

    cout << "Площа прямокутника S = " << S << endl;
    cout << "Периметр прямокутника P = " << P << endl;

    return 0;
}