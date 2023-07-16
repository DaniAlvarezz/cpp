#include <iostream>
using namespace std;

int main() {
  float cantidad_comprada, precio_compra, precio_pagado;
  float porcentaje_descuento, precio_original, precio_descuento;
  
  cout << "Ingresa la cantidad comprada: ";
  cin >> cantidad_comprada;
  
  cout << "Ingresa el precio de la compra: ";
  cin >> precio_compra;
  
  cout << "Ingresa el precio pagado: ";
  cin >> precio_pagado;
  
  porcentaje_descuento = ((precio_compra - precio_pagado) / precio_compra) * 100;
  precio_original = precio_compra * cantidad_comprada;
  precio_descuento = precio_pagado * cantidad_comprada;
  
  cout << "El porcentaje descontado es: " << porcentaje_descuento << "%" << endl;
  cout << "El precio original es: " << precio_original << endl;
  cout << "El precio con descuento es: " << precio_descuento << endl;
  
  return 0;
}