#include <iostream>
#include <cmath> //  biblioteca para funciones matemáticas donde se usa la función pow()
using namespace std;

int main() 


{

    int numero; 
    

    cout << "Ingrese un numero : "; 
    cin >> numero; 
    int suma = 0; // para almacenar la suma de los dígitos elevados a sí mismos
    int temp = numero; // se inicializa con el valor del numero ingresado
    
    while (temp != 0) { //  bucle que se ejecuta mientras temp sea diferente de cero
        int digito = temp % 10; // Calcula el último dígito de temp mediante el operador módulo (%)
        suma += pow(digito, digito); // Eleva el dígito a sí mismo y suma el resultado a suma utilizando la función pow()
        temp /= 10; // divide  a temp entre 10 para eliminar el último dígito y pasar al siguiente dígito
    }

    cout << "El resultado de la suma es: " << suma << endl; // Imprime el resultado de la suma de los dígitos elevados a sí mismos

    return 0; 
