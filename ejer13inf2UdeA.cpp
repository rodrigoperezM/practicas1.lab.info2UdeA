#include <iostream>
using namespace std;

// Funci�n para verificar si un n�mero es primo
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
            suma += i;//cuenta la suma de los n�meros primos encontrados en la iteraci�n.






        }
    }

    cout << "El resultado de la suma es: " << suma << "." << endl;

    return 0;
}
