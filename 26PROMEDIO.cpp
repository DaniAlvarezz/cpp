#include <iostream>
using namespace std;

int main() {
  float numero1, numero2, numero3, promedio;
  
  cout << "Ingrese el primer número: ";
  cin >> numero1;
  
  cout << "Ingrese el segundo número: ";
  cin >> numero2;
  
  cout << "Ingrese el tercer número: ";
  cin >> numero3;
  
  promedio = (numero1 + numero2 + numero3) / 3;
  
  if (promedio > 7) {
    cout << "APROBADO" << endl;
  } else {
    cout << "MEJORE LA NOTA" << endl;
  }
  
  return 0;
}