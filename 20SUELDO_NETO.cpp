#include <iostream>
using namespace std;

void calcular_descuento_sueldo(float sueldo) {
  float descuento = 0;
  float sueldo_neto = 0;
  
  if (sueldo <= 1000) {
    descuento = sueldo * 0.1;
  } else if (sueldo <= 2000) {
    float adicional = sueldo - 1000;
    descuento = 1000 * 0.1 + adicional * 0.05;
  } else {
    float adicional = sueldo - 2000;
    descuento = 1000 * 0.1 + 1000 * 0.05 + adicional * 0.03;
  }
  
  sueldo_neto = sueldo - descuento;
  
  cout << "El descuento es: " << descuento << endl;
  cout << "El sueldo neto es: " << sueldo_neto << endl;
}

int main() {
  float sueldo;
  
  cout << "Ingresa el sueldo: ";
  cin >> sueldo;
  
  calcular_descuento_sueldo(sueldo);
  
  return 0;
}