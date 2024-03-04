#include <iostream>
#include<conio.h>
using namespace std;

/*Ejercicio 11. Escriba un programa que reciba un n�mero y calcule el m�nimo com�n m�ltiplo
de todos los n�meros enteros entre 1 y el n�mero ingresado.
Ej: Si se recibe 4 el programa debe imprimir 12.
Nota: la salida del programa debe ser: El m�nimo com�n m�ltiplo es: 12.
*/

// Funci�n para calcular el MCM
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
    cout << "Ingrese un n�mero: ";
    cin >> numero;

    int mcm_resultado = 1;
    for (int i = 2; i <= numero; ++i) {
        mcm_resultado = mcm(mcm_resultado, i);
    }

    cout << "El minimo com�n m�ltiplo es: " << mcm_resultado << "." << endl;

    return 0;
}
