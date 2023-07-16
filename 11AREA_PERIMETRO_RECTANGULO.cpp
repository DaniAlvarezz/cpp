#include <iostream>
using namespace std;

int main() {
  float base, altura;
  
  cout << "Ingresa la base del rectángulo: ";
  cin >> base;
  
  cout << "Ingresa la altura del rectángulo: ";
  cin >> altura;
  
  float area = base * altura;
  float perimetro = 2 * (base + altura);
  
  cout << "El área del rectángulo es: " << area << endl;
  cout << "El perímetro del rectángulo es: " << perimetro << endl;
  
  return 0;
}