#include <iostream>

using namespace std;


int main() {

  const int TAM = 5; // Tamaño de los vectores

  int vector1[TAM] = {1, 2, 3, 4, 5};

  int vector2[TAM] = {6, 7, 8, 9, 10};

  int producto_escalar = 0;

  

  // Calcular el producto escalar

  for (int i = 0; i < TAM; i++) {

    producto_escalar += vector1[i] * vector2[i];

  }

  

  // Mostrar el resultado

  cout << "El producto escalar de los vectores es: " << producto_escalar << endl;

  

  return 0;

}

