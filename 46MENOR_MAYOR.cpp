#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, menor, mayor;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;
    
    // Verificar el número menor
    if (num1 < num2 && num1 < num3) {
        menor = num1;
    } else if (num2 < num3) {
        menor = num2;
    } else {
        menor = num3;
    }
    
    // Verificar el número mayor
    if (num1 > num2 && num1 > num3) {
        mayor = num1;
    } else if (num2 > num3) {
        mayor = num2;
    } else {
        mayor = num3;
    }
    
    // Mostrar los resultados
    cout << "El número menor es: " << menor << endl;
    cout << "El número mayor es: " << mayor << endl;
    
    return 0;
}