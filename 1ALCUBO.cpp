#include <iostream>
using namespace std;

float cubo(float x) {
  float resultado = x * x * x;
  return resultado;
}

int main() {
  float num;
  cout << "Ingresa un número real para calcular su cubo: ";
  cin >> num;
  float resultado = cubo(num);
  cout << "El cubo de " << num << " es " << resultado << endl;
  return 0;
}