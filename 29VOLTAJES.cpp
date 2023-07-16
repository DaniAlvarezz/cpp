#include <iostream>

using namespace std;


int main() {

  float voltaje1, voltaje2, voltaje3, voltaje4, voltaje5, promedio;

  

  cout << "Ingrese el primer voltaje: ";

  cin >> voltaje1;

  

  cout << "Ingrese el segundo voltaje: ";

  cin >> voltaje2;

  

  cout << "Ingrese el tercer voltaje: ";

  cin >> voltaje3;

  

  cout << "Ingrese el cuarto voltaje: ";

  cin >> voltaje4;

  

  cout << "Ingrese el quinto voltaje: ";

  cin >> voltaje5;

  

  promedio = (voltaje1 + voltaje2 + voltaje3 + voltaje4 + voltaje5) / 5;

  

  if (promedio > 220) {

    cout << "ALTO VOLTAJE" << endl;

  } else {

    cout << "VOLTAJE CORRECTO" << endl;

  }

  

  return 0;

}

