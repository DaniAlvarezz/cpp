#include <iostream>
using namespace std;

void calcular_descuento(float monto) {
  float descuento = 0;
  
  if (monto > 10000) {
    descuento = monto * 0.2;
  } else {
    descuento = monto * 0.1;
  }
  
  cout << "El descuento es: " << descuento << endl;
}

int main() {
  float monto;
  
  cout << "Ingresa el monto: ";
  cin >> monto;
  
  calcular_descuento(monto);
  
  return 0;
}