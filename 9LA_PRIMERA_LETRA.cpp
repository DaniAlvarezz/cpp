#include <iostream>
#include <string>
using namespace std;

char primera_letra(string texto) {
  return texto[0];
}

int main() {
  string texto;
  
  cout << "Ingresa una cadena de texto: ";
  cin >> texto;
  
  char letra = primera_letra(texto);
  
  cout << "La primera letra es: " << letra << endl;
  
  return 0;
}