#include <iostream>

#include <cmath>

using namespace std;


// Función para determinar si un número es primo

bool esPrimo(int n) {

  if (n <= 1) {

    return false;

  }

  

  for (int i = 2; i <= sqrt(n); i++) {

    if (n % i == 0) {

      return false;

    }

  }

  

  return true;

}


int main() {

  const int FILAS = 3;

  const int COLUMNAS = 3;

  int matriz[FILAS][COLUMNAS] = {{2, 4, 6}, {1, 3, 5}, {7, 8, 9}};

  int vector[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

  int cantidad_primos = 0;

  

  // Contar primos en la matriz

  for (int i = 0; i < FILAS; i++) {

    for (int j = 0; j < COLUMNAS; j++) {

      if (esPrimo(matriz[i][j])) {

        cantidad_primos++;

      }

    }

  }

  

  // Contar primos en el vector

  for (int i = 0; i < 9; i++) {

    if (esPrimo(vector[i])) {

      cantidad_primos++;

    }

  }

  

  cout << "La cantidad de numeros primos es: " << cantidad_primos << endl;

  

  return 0;

}

