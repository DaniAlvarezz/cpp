#include <iostream>

using namespace std;


int main() {

    int consumo;

    cout << "Ingrese el consumo de la Central Eléctrica del Guri en Kw: ";

    cin >> consumo;

    

    double eficiencia = consumo / 10000.0;

    

    if (eficiencia >= 0.8 && eficiencia <= 1.0) {

        cout << "CONSUMO MEDIO" << endl;

    } else if (eficiencia > 1.0) {

        cout << "ALTO CONSUMO DE ENERGIA" << endl;

    } else {

        cout << "CONSUMO POR DEBAJO DEL 80%" << endl;

    }

    

    return 0;

}

