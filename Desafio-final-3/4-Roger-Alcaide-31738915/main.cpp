#include <iostream>
using namespace std;

int main() {
    const int TAMANO = 10;
    int numeros[TAMANO];
    int sumaPositivos = 0, sumaNegativos = 0;
    int cuentaPositivos = 0, cuentaNegativos = 0;

    // Leer 10 numeros enteros desde el teclado
    cout << "Introduce 10 números enteros:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cin >> numeros[i];
        if (numeros[i] > 0) {
            sumaPositivos += numeros[i];
            cuentaPositivos++;
        } else if (numeros[i] < 0) {
            sumaNegativos += numeros[i];
            cuentaNegativos++;
        }
    }

    // Calcula y muestra la media de los valores positivos
    if (cuentaPositivos > 0) {
        cout << "Media de los valores positivos: " << static_cast<double>(sumaPositivos) / cuentaPositivos << endl;
    } else {
        cout << "No hay valores positivos." << endl;
    }

    // Calcula y muestra la media de los valores negativos
    if (cuentaNegativos > 0) {
        cout << "Media de los valores negativos: " << static_cast<double>(sumaNegativos) / cuentaNegativos << endl;
    } else {
        cout << "No hay valores negativos." << endl;
    }

    return 0;
}
