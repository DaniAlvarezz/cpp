#include <iostream>
using namespace std;

int main() {
  int entero1, entero2;
  float real1, real2;
  
  cout << "Ingresa dos números enteros: ";
  cin >> entero1 >> entero2;
  
  cout << "Ingresa dos números reales: ";
  cin >> real1 >> real2;
  
  cout << "La suma de los enteros es: " << entero1 + entero2 << endl;
  cout << "La resta de los enteros es: " << entero1 - entero2 << endl;
  cout << "La multiplicación de los enteros es: " << entero1 * entero2 << endl;
  cout << "La división de los enteros es: " << entero1 / entero2 << endl;
  cout << "El resto de la división de los enteros es: " << entero1 % entero2 << endl;
  
  cout << "La suma de los reales es: " << real1 + real2 << endl;
  cout << "La resta de los reales es: " << real1 - real2 << endl;
  cout << "La multiplicación de los reales es: " << real1 * real2 << endl;
  cout << "La división de los reales es: " << real1 / real2 << endl;
  
  return 0;
}