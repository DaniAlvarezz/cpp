#include <iostream>
using namespace std;

int es_primo(int numero) {
  if (numero <= 1) {
    return 0;
  }
  
  for (int i = 2; i <= numero / 2; i++) {
    if (numero % i == 0) {
      return 0;
    }
  }
  
  return 1;
}

int main() {
  int numero;
  
  cout << "Ingresa un número entero: ";
  cin >> numero;
  
  if (es_primo(numero)) {
    cout << "El número es primo" << endl;
  } else {
    cout << "El número no es primo" << endl;
  }
  
  return 0;
}