#include <iostream>
using namespace std;

int main() {
  float radio, area;
  
  cout << "Ingrese el radio del círculo: ";
  cin >> radio;
  
  if (radio < 0) {
    cout << "DATOS ERRONEOS" << endl;
  } else {
    area = 3.1416 * radio * radio;
    
    if (area > 5000) {
      cout << "DATOS ERRONEOS" << endl;
    } else {
      cout << "El área del círculo es: " << area << endl;
    }
  }
  
  return 0;
}