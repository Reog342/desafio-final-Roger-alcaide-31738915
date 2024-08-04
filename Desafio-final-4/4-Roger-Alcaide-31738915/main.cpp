#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const int NUM_ESTUDIANTES = 10;
    const int NUM_CORTES = 3;
    string estudiantes[NUM_ESTUDIANTES];
    float notas[NUM_ESTUDIANTES][NUM_CORTES];
    float notaFinal[NUM_ESTUDIANTES];

    // Ingresar lo nombres de los estudiantes
    cout << "Introduce los nombres de los 10 estudiantes:" << endl;
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        getline(cin, estudiantes[i]);
    }

    // Ingresar las notas de los tres cortes
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "Introduce las notas de los tres cortes para " << estudiantes[i] << ":" << endl;
        for (int j = 0; j < NUM_CORTES; j++) {
            cout << "Nota del corte " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }

    // Calcula la nota final de cada uno de los estudiantes
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        notaFinal[i] = 0;
        for (int j = 0; j < NUM_CORTES; j++) {
            notaFinal[i] += notas[i][j];
        }
        notaFinal[i] /= NUM_CORTES;
    }

    // Muestra la informacion final en forma de tabla
    cout << left << setw(15) << "Estudiante" << setw(10) << "Corte 1" << setw(10) << "Corte 2" << setw(10) << "Corte 3" << setw(10) << "Nota Final" << endl;
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << left << setw(15) << estudiantes[i] << setw(10) << notas[i][0] << setw(10) << notas[i][1] << setw(10) << notas[i][2] << setw(10) << notaFinal[i] << endl;
    }

    return 0;
}
