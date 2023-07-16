#include <iostream>

using namespace std;


int signo(double num) {

    if (num < 0) {

        return -1;

    } else if (num > 0) {

        return 1;

    } else {

        return 0;

    }

}


int main() {

    double num;

    cout << "Ingrese un número real: ";

    cin >> num;

    

    int s = signo(num);

    

    cout << "El signo de " << num << " es " << s << endl;

    

    return 0;

}

