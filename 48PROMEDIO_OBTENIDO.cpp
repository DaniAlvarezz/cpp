#include <iostream>

using namespace std;


int main() {

    double nota1, nota2, nota3, nota4, promedio;

    cout << "Ingrese la primera nota: ";

    cin >> nota1;

    cout << "Ingrese la segunda nota: ";

    cin >> nota2;

    cout << "Ingrese la tercera nota: ";

    cin >> nota3;

    cout << "Ingrese la cuarta nota: ";

    cin >> nota4;

    

    promedio = (nota1 + nota2 + nota3 + nota4) / 4.0;

    

    if (promedio > 14.5) {

        cout << "APROBADO" << endl;

    } else if (promedio > 10) {

        cout << "SUPLETORIO" << endl;

    } else {

        cout << "PERDIDO EL AÑO" << endl;

    }

    

    return 0;

}

