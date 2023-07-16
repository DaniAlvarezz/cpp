#include <iostream>

#include <string>

using namespace std;


int main() {

    string apellido;

    int edad;

    cout << "Ingrese el apellido del estudiante: ";

    getline(cin, apellido);

    cout << "Ingrese la edad del estudiante: ";

    cin >> edad;

    

    if (edad > 18 && edad < 25) {

        cout << "El estudiante " << apellido << " está BECADO" << endl;

    } else {

        cout << "El estudiante " << apellido << " NO está becado" << endl;

    }

    

    return 0;

}

