#include <iostream>

using namespace std;


int main() {

  int minutos, horas, segundos;

  

  cout << "Ingrese el tiempo en minutos: ";

  cin >> minutos;

  

  horas = minutos / 60; // Dividir para obtener las horas

  minutos = minutos % 60; // Calcular los minutos restantes

  segundos = minutos * 60; // Convertir los minutos restantes a segundos

  

  cout << "El tiempo ingresado es: " << horas << " horas, " << minutos << " minutos y " << segundos << " segundos." << endl;

  

  return 0;

}

