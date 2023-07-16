#include <iostream>

using namespace std;


int menor(int num1, int num2) {

    if (num1 < num2) {

        return num1;

    } else {

        return num2;

    }

}


int main() {

    int num1, num2;

    cout << "Ingrese dos números enteros: ";

    cin >> num1 >> num2;

    

    int m = menor(num1, num2);

    

    cout << "El número menor de " << num1 << " y " << num2 << " es " << m << endl;

    

    return 0;

}

