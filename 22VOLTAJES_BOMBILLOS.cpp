#include <iostream>
using namespace std;

void calcular_voltaje(float voltaje) {
  float kilovatios = 0;
  float watts = 0;
  
  kilovatios = 3 * (voltaje / 1000);
  watts = 3 * voltaje;
  
  cout << "El voltaje en kilovatios es: " << kilovatios << " kW" << endl;
  cout << "El voltaje en watts es: " << watts << " W" << endl;
}

int main() {
  float voltaje = 120;
  
  calcular_voltaje(voltaje);
  
  return 0;
}