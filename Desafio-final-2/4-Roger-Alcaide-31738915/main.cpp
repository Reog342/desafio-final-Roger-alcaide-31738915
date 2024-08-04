#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Empieza la generacin de numeros aleatorios

    const int FILAS = 4;
    const int COLUMNAS = 5;
    int matriz[FILAS][COLUMNAS];
    int sumaFilas[FILAS] = {0};
    int sumaColumnas[COLUMNAS] = {0};
    int sumaTotal = 0;

    // Genera 20 números aleatorios y los almacena en la matriz
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = rand() % 10;
            sumaFilas[i] += matriz[i][j];
            sumaColumnas[j] += matriz[i][j];
            sumaTotal += matriz[i][j];
        }
    }

    // Muestra la matriz y las sumas parciales
    cout << "Matriz con sumas parciales:" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << "| " << sumaFilas[i] << endl;
    }

    // Muestra las sumas de las columnas
    for (int j = 0; j < COLUMNAS; j++) {
        cout << "----";
    }
    cout << endl;
    for (int j = 0; j < COLUMNAS; j++) {
        cout << sumaColumnas[j] << "\t";
    }
    cout << "| " << sumaTotal << endl;

    return 0;
}