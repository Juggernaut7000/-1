#include <iostream>
using namespace std; 
int main() 
{ cout << "Лабораторна робота №1 гр.319а Заставського Назара" << endl;
    cout << "" << endl;
    double V, U, T1, T2, S; 
cout << "Введіть швидкість човна V: "; 
cin >> V; 
cout << "Введіть швидкість течії U: ";
cin >> U; 
cout << "Введіть час руху човна по озеру T1: "; 
cin >> T1; 
cout << "Введіть час руху човна проти течії T2: ";
cin >> T2; 
S = V * T1 + (V - U) * T2; 
cout << "Човен пройшов шлях S = " << S << endl; 
return 0; }