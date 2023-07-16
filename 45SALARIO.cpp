#include <iostream>

using namespace std;


int main() {

    double horas_trabajadas, tarifa_hora, salario;

    cout << "Ingrese las horas trabajadas: ";

    cin >> horas_trabajadas;

    cout << "Ingrese la tarifa por hora: ";

    cin >> tarifa_hora;

    

    if (horas_trabajadas > 40) {

        salario = 40 * tarifa_hora + (horas_trabajadas - 40) * tarifa_hora * 1.25;

    } else {

        salario = horas_trabajadas * tarifa_hora;

    }

    

    cout << "El salario del trabajador es: " << salario << endl;

    

    return 0;

}

