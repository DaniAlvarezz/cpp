#include <iostream>

using namespace std;


int main() {

  int num;


  cout << "Ingrese un número: ";

  cin >> num;


  if(num % 2 == 0) {

    cout << "El número ingresado es par" << endl;

  } else {

    cout << "El número ingresado es impar" << endl;

  }


  return 0;

}

