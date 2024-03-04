#include <iostream>
#include<coni.h>
using namespace std;

/*Ejercicio 13. Escriba un programa que reciba un número y calcule la suma de todos los
primos menores que el número ingresado.
Ej: Si se recibe 10 el programa debe imprimir 17.
Nota: la salida del programa debe ser: El resultado de la suma es: 17.*/

// Función para verificar si un número es primo
bool Primo(int n) 
{
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) //aumenta iteracion
	{
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() 
{

    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    int suma = 0;
    for (int i = 2; i < num; ++i) 
	{
        if (Primo(i)) 
		{
            suma += i;//cuenta la suma de los números primos encontrados en la iteración.






        }
    }

    cout << "El resultado de la suma es: " << suma << "." << endl;

    return 0;
}
