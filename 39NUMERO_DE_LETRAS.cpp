#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    
    // Separar palabras de la frase
    string palabra = "";
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == ' ') {
            cout << palabra << " " << palabra.length() << endl;
            palabra = "";
        } else {
            palabra += frase[i];
        }
    }
    cout << palabra << " " << palabra.length() << endl; // Última palabra
    
    return 0;
}