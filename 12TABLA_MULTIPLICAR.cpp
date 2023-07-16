#include <iostream>
using namespace std;

void tabla_multiplicar(int numero) {
  for (int i = 0; i <= 10; i++) {
    cout << numero << " x " << i << " = " << numero * i << endl;
  }
}

int main() {
  int numero;
  
  cout << "Ingresa un número entero: ";
  cin >> numero;
  
  tabla_multiplicar(numero);
  
  return 0;
}