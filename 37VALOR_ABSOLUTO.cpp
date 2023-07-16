
#include <iostream>
#include <cstdlib> // necesario para la función abs()

using namespace std;

int main() {
    int numero, valor_absoluto;
    cout << "Ingrese un número entero: ";
    cin >> numero;
    valor_absoluto = abs(numero);
    cout << "El valor absoluto de " << numero << " es " << valor_absoluto << endl;
    return 0;
}