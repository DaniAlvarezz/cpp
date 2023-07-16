#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    
    if (num1 % num2 == 0) {
        cout << num1 << " es divisible por " << num2 << endl;
    } else {
        cout << num1 << " no es divisible por " << num2 << endl;
    }
    
    return 0;
}