#include <iostream>
using namespace std;

int main() {
    
    int n1;
    int suma = 1; // Inicia a sumar el centro de la espiral (1)
    int num = 1; // El primer número de la espiral
    
	cout << "Ingrese un numero impar para el tamano de la espiral: ";
    cin >> n1;
    
    // Recorrer la espiral
    for (int i = 3; i <= n1; i += 2) {
        // Sumar los cuatro números en las esquinas de la espiral
        suma += 4 * num + 10 * (i - 1);

        // actualiza el número para la siguiente espiral
        num += 4 * (i - 1);
    }
    
    if (n1 % 2 == 0) {
        cout << "El numero ingresado no es impar." << endl;
        return 0;
    }
    else {cout << "En una espiral de " << n1 << "x" << n1 << ", la suma es: " << suma << "." << endl;
	}

    return 0;
}
