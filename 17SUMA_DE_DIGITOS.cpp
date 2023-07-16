#include <iostream>
using namespace std;

int sumar_digitos(int numero) {
  int suma = 0;
  
  while (numero > 0) {
    suma += numero % 10;
    numero /= 10;
  }
  
  return suma;
}

int main() {
  int numero;
  
  cout << "Ingresa un número entero: ";
  cin >> numero;
  
  int suma = sumar_digitos(numero);
  
  cout << "La suma de los dígitos del número es: " << suma << endl;
  
  return 0;
}