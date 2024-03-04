#include <iostream>
#include <cmath> //  biblioteca para funciones matem�ticas donde se usa la funci�n pow()
using namespace std;

int main() 


{

    int numero; 
    

    cout << "Ingrese un numero : "; 
    cin >> numero; 
    int suma = 0; // para almacenar la suma de los d�gitos elevados a s� mismos
    int temp = numero; // se inicializa con el valor del numero ingresado
    
    while (temp != 0) { //  bucle que se ejecuta mientras temp sea diferente de cero
        int digito = temp % 10; // Calcula el �ltimo d�gito de temp mediante el operador m�dulo (%)
        suma += pow(digito, digito); // Eleva el d�gito a s� mismo y suma el resultado a suma utilizando la funci�n pow()
        temp /= 10; // divide  a temp entre 10 para eliminar el �ltimo d�gito y pasar al siguiente d�gito
    }

    cout << "El resultado de la suma es: " << suma << endl; // Imprime el resultado de la suma de los d�gitos elevados a s� mismos

    return 0; 
