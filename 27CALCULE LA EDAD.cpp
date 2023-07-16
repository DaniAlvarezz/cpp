#include <iostream>
#include <ctime>
using namespace std;

int main() {
  int dia_nacimiento, mes_nacimiento, anio_nacimiento;
  int dia_actual, mes_actual, anio_actual;
  
  cout << "Ingrese su fecha de nacimiento (DD MM AAAA): ";
  cin >> dia_nacimiento >> mes_nacimiento >> anio_nacimiento;
  
  // Obtenemos la fecha actual
  time_t now = time(0);
  tm* localtm = localtime(&now);
  
  dia_actual = localtm->tm_mday;
  mes_actual = localtm->tm_mon + 1;
  anio_actual = localtm->tm_year + 1900;
  
  // Calculamos la edad
  int edad = anio_actual - anio_nacimiento;
  
  if (mes_actual < mes_nacimiento) {
    edad--;
  } else if (mes_actual == mes_nacimiento && dia_actual < dia_nacimiento) {
    edad--;
  }
  
  cout << "Su edad es: " << edad << " años" << endl;
  
  return 0;
}