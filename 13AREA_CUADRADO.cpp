#include <iostream>
using namespace std;

int main() {
  float lado;
  
  cout << "Ingresa la medida del lado del cuadrado: ";
  cin >> lado;
  
  float area = lado * lado;
  
  cout << "El área del cuadrado es: " << area << endl;
  
  return 0;
}