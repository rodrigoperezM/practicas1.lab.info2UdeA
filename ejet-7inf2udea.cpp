#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    int a = 1, b = 1, c = a + b;
    int suma = 0;

    while (c < n) {
        if (c % 2 == 0) {
            suma += c;
        }
        a = b;
        b = c;
        c = a + b;
    }

    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
	
	}
