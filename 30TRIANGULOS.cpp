#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float lado1, lado2, lado3, semiperimetro, area;
  
  cout << "Ingrese el primer lado del triángulo: ";
  cin >> lado1;
  
  cout << "Ingrese el segundo lado del triángulo: ";
  cin >> lado2;
  
  cout << "Ingrese el tercer lado del triángulo: ";
  cin >> lado3;
  
  // Verificación de que los lados forman un triángulo
  if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1) {
    cout << "DATOS NO VALIDOS" << endl;
    return 0;
  }
  
  semiperimetro = (lado1 + lado2 + lado3) / 2;
  
  area = sqrt(semiperimetro * (semiperimetro - lado1) *
              (semiperimetro - lado2) * (semiperimetro - lado3));
  
  if (area > 1000) {
    cout << "DATOS NO VALIDOS" << endl;
    return 0;
  }
  
  // Determinación del tipo de triángulo
  if (lado1 == lado2 && lado2 == lado3) {
    cout << "El triángulo es equilátero" << endl;
  } else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
    cout << "El triángulo es escaleno" << endl;
  } else {
    cout << "El triángulo es isósceles" << endl;
  }
  
  cout << "El área del triángulo es: " << area << endl;
  
  return 0;
}