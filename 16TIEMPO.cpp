#include <iostream>
#include <ctime>
using namespace std;

void convertir_segundos(int segundos) {
  int horas = segundos / 3600;
  segundos = segundos % 3600;
  int minutos = segundos / 60;
  segundos = segundos % 60;
  
  cout << "Tiempo en horas, minutos y segundos: " << horas << "h " << minutos << "m " << segundos << "s" << endl;
}

void convertir_unix(int segundos) {
  time_t tiempo_unix = segundos;
  cout << "Tiempo en UNIX: " << ctime(&tiempo_unix) << endl;
}

int main() {
  int segundos;
  
  cout << "Ingresa un tiempo en segundos: ";
  cin >> segundos;
  
  convertir_segundos(segundos);
  convertir_unix(segundos);
  
  return 0;
}