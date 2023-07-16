#include <iostream>
using namespace std;

float calcular_salario(int horas_trabajadas, float tarifa_hora) {
  float salario = 0;
  if (horas_trabajadas <= 40) {
    salario = horas_trabajadas * tarifa_hora;
  } else {
    int horas_normales = 40;
    int horas_extra = horas_trabajadas - horas_normales;
    salario = horas_normales * tarifa_hora;
    salario += horas_extra * (tarifa_hora * 1.5);
  }
  return salario;
}

int main() {
  int horas_trabajadas;
  float tarifa_hora;
  
  cout << "Ingresa las horas trabajadas: ";
  cin >> horas_trabajadas;
  
  cout << "Ingresa la tarifa por hora: ";
  cin >> tarifa_hora;
  
  float salario = calcular_salario(horas_trabajadas, tarifa_hora);
  
  cout << "El salario es: " << salario << endl;
  
  return 0;
}