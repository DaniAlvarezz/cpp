#include <iostream>
#include <cmath>
using namespace std;

double potencia(double base, int exponente) {
    double resultado = 1.0;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    const double PI = 3.141592653589793238;
    
    for (int i = 2; i <= 10; i++) {
        double pot = potencia(PI, i);
        double raiz = sqrt(pot);
        
        cout << "PI elevado a la " << i << " es " << pot << endl;
        cout << "La raíz cuadrada de PI elevado a la " << i << " es " << raiz << endl;
    }
    
    return 0;
}