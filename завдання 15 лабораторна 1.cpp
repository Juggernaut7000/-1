#include <iostream> 
using namespace std; 
int main() {
cout << "Лабораторна робота №1 гр.319а Заставського Назара" << endl;
    cout << "" << endl;
 int A, B, C, t; 
cout << "Введіть значення змінних A, B, C: ";
cin >> A >> B >> C; 
t = A; A = B; B = C; C = t;
cout << "Нові значення зміннних :" << endl;
cout << "A = " << A << endl; 
cout << "B = " << B << endl;
cout << "C = " << C << endl;
return 0; }


/*
#include <iostream> 
using namespace std; 
int main() {
    
    cout << "Лабораторна робота №1 гр.319а Заставського Назара" << endl;
    cout << "" << endl;

    int A, B, C, t; 
 
    cout << "Введіть значення змінних A, B, C: ";
    cin >> A >> B >> C; 
    
    t = A; A = B; B = C; C = t;
    
    cout << "Нові значення зміннних :" << endl;
    
    cout << "A = " << A << endl; 
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;

    return 0; 
    
}
*/
