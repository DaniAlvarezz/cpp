#include <iostream>

using namespace std;


float calcular_salario(int horas_trabajadas, float valor_hora) {

  float salario = horas_trabajadas * valor_hora;

  return salario;

}


int main() {

  int horas_trabajadas;

  float valor_hora;

  

  cout << "Ingresa las horas trabajadas: ";

  cin >> horas_trabajadas;

  

  cout << "Ingresa el valor por hora: ";

  cin >> valor_hora;

  

  float salario = calcular_salario(horas_trabajadas, valor_hora);

  

  cout << "El salario es: " << salario << endl;

  

  return 0;

}

