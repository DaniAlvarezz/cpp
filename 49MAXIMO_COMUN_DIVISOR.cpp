#include <iostream>
using namespace std;

int main() {
    int m, n, r;
    cout << "Ingrese el primer número: ";
    cin >> m;
    cout << "Ingrese el segundo número: ";
    cin >> n;
    
    // Verificar que m sea mayor que n
    if (m < n) {
        int temp = m;
        m = n;
        n = temp;
    }
    
    // Aplicar el algoritmo de Euclides
    r = m % n;
    while (r != 0) {
        m = n;
        n = r;
        r = m % n;
    }
    
    cout << "El máximo común divisor de los números ingresados es: " << n << endl;
    
    return 0;
}