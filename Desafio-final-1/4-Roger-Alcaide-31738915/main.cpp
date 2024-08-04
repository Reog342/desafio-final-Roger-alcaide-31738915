#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funcion para verificar si un numero es primo o no
bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    srand(time(0)); // Inicializa la generación de numeros aleatorios

    const int TAMANO = 20;
    int numeros[TAMANO];
    vector<int> primos;
    
    //Aqui se genera los genera 20 números aleatorios y los almacena en el array
    for (int i = 0; i < TAMANO; i++) {
        numeros[i] = rand() % 100;
    }

    //Esta seccion encuentra los números primos y los almacena en el vector primos
    for (int i = 0; i < TAMANO; i++) {
        if (esPrimo(numeros[i])) {
            primos.push_back(numeros[i]);
        }
    }

    // Muestra en pantalla el array original
    cout << "Array original: ";
    for (int i = 0; i < TAMANO; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Muestra en pantalla el array de los números primos
    cout << "Array de números primos: ";
    for (int i = 0; i < primos.size(); i++) {
        cout << primos[i] << " ";
    }
    cout << endl;

    return 0;
}