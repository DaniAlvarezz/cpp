
#include <iostream>
using namespace std;

const int METROS_POR_KILOMETRO = 1000;

int main() {
    double kilometros, metros;
    cout << "Ingrese la distancia en kilómetros: ";
    cin >> kilometros;
    
    metros = kilometros * METROS_POR_KILOMETRO;
    
    cout << kilometros << " kilómetros equivalen a " << metros << " metros" << endl;
    
    return 0;
}