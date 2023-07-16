#include <iostream>
using namespace std;

void ordenarVector(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int num_vectores, tam_vector;
    cout << "Ingrese el número de vectores: ";
    cin >> num_vectores;
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> tam_vector;
    int vectores[num_vectores][tam_vector];
    
    // Ingreso de datos
    for (int i = 0; i < num_vectores; i++) {
        cout << "Ingrese los elementos del vector " << i+1 << ":" << endl;
        for (int j = 0; j < tam_vector; j++) {
            cin >> vectores[i][j];
        }
    }
    
    // Ordenamiento de vectores
    for (int i = 0; i < num_vectores; i++) {
        ordenarVector(vectores[i], tam_vector);
    }
    
    // Impresión de vectores ordenados
    cout << "Los vectores ordenados de mayor a menor son:" << endl;
    for (int i = 0; i < num_vectores; i++) {
        cout << "Vector " << i+1 << ": ";
        for (int j = 0; j < tam_vector; j++) {
            cout << vectores[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}