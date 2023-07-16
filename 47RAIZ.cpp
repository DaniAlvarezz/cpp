#include <iostream>
#include <cmath> // Incluir la librería matemática
using namespace std;

int main() {
    double num, indice, resultado;
    cout << "Ingrese el número: ";
    cin >> num;
    cout << "Ingrese el índice de la raíz (por ejemplo, 2 para la raíz cuadrada, 3 para la raíz cúbica, etc.): ";
    cin >> indice;
    
    // Calcular la raíz utilizando la función pow de la librería matemática
    resultado = pow(num, 1.0/indice);
    
    cout << "La raíz " << indice << " de " << num << " es: " << resultado << endl;
    
    return 0;
}