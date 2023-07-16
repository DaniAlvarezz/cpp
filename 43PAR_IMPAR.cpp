#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    
    int suma = num1 + num2;
    
    if (suma % 2 == 0) {
        cout << "La suma es par" << endl;
    } else {
        cout << "La suma es impar" << endl;
    }
    
    return 0;
}