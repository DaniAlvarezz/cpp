#include <iostream>
using namespace std;

const double METROS_POR_MILLA = 1852.0;
const double PIES_POR_METRO = 3.28084;
const double NUDOS_POR_MILLA = 1.852;

int main() {
    double millas, metros, pies, nudos;
    cout << "Ingrese la distancia en millas marinas: ";
    cin >> millas;
    
    metros = millas * METROS_POR_MILLA;
    pies = metros * PIES_POR_METRO;
    nudos = millas * NUDOS_POR_MILLA;
    
    cout << millas << " millas marinas equivalen a:" << endl;
    cout << metros << " metros" << endl;
    cout << pies << " pies" << endl;
    cout << nudos << " nudos" << endl;
    
    return 0;
}