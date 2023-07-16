#include <iostream>
using namespace std;

int main() {
  float distancia_metros, distancia_km;
  
  cout << "Ingrese la distancia en metros: ";
  cin >> distancia_metros;
  
  distancia_km = distancia_metros / 1000;
  
  cout << "La distancia es: " << distancia_km << " km" << endl;
  
  return 0;
}