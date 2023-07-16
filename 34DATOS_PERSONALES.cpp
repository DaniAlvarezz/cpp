#include <iostream>

#include <string>

using namespace std;


int main() {

      string nombre, apellido, celular;

      int edad;

      

      cout << "Ingrese su nombre: ";

      getline(cin, nombre);

      

      cout << "Ingrese su apellido: ";

      getline(cin, apellido);

      

      cout << "Ingrese su edad: ";

      cin >> edad;

      

      cout << "Ingrese su número de celular: ";

      cin >> celular;

      

      cout << endl << "Datos ingresados:" << endl;

      cout << "Nombre: " << nombre << endl;

      cout << "Apellido: " << apellido << endl;

      cout << "Edad: " << edad << endl;

      cout << "Celular: " << celular << endl;

      

      return 0;

}