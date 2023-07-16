#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    
    double resultado = (num1 + num2) / (num1 - num2);
    
    if (resultado == (int) resultado) {
        cout << "La división es exacta" << endl;
    } else {
        cout << "La división no es exacta" << endl;
    }
    
    return 0;
}