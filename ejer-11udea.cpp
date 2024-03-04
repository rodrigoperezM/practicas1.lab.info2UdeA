#include <iostream>
#include<conio.h>
using namespace std;

/*Ejercicio 11. Escriba un programa que reciba un número y calcule el mínimo común múltiplo
de todos los números enteros entre 1 y el número ingresado.
Ej: Si se recibe 4 el programa debe imprimir 12.
Nota: la salida del programa debe ser: El mínimo común múltiplo es: 12.
*/

// Función para calcular el MCM
int mcm(int a, int b) {
    int m = max(a, b);
    int mi = min(a, b);
    for (int i = m; ; i += m) {
        if (i % mi == 0) {
            return i;
        }
    }
}

int main() {

    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    int mcm_resultado = 1;
    for (int i = 2; i <= numero; ++i) {
        mcm_resultado = mcm(mcm_resultado, i);
    }

    cout << "El minimo común múltiplo es: " << mcm_resultado << "." << endl;

    return 0;
}
