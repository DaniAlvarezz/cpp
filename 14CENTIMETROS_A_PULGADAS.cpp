#include <iostream>

using namespace std;


int main() {

  float medida_cm;

  

  cout << "Ingresa una medida en centímetros: ";

  cin >> medida_cm;

  

  float medida_pulgadas = medida_cm / 2.54;

  

  cout << "La medida en pulgadas es: " << medida_pulgadas << endl;

  

  return 0;

}

