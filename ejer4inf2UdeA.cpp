#include <iostream>
#include<conio.h>
using namespace std;

/*Ejercicio 4. Escriba un programa para leer dos números enteros con el siguiente significado:
el valor del primer número representa una hora del día en un reloj de 24 horas, de modo
que 1245 representa las doce y cuarenta y cinco de la tarde. El segundo entero representa
un tiempo de duración de la misma manera, por lo que 345 representa tres horas y 45
minutos. El programa debe sumar esta duración primer número, y el resultado será impreso
en la misma notación, en este caso 1630, que es el tiempo de 3 horas y 45 minutos después
de 12:45.
Nota: el formato de salida debe ser: La hora es 1630.
Otra nota: se debe imprimir un mensaje como el siguiente cuando uno de los datos
ingresados en
inválido: 1560 es un tiempo invalido.*/

int main() {

    int hora, minutos;
    cout << "ingrese la hora: ";
    cin >> hora;
    cout << "ingrese los minutos: ";
    cin >> minutos;

    // Ver si los datos ingresados son válidos
    if (hora < 0 || hora >= 2400 || hora % 100 >= 60 || minutos < 0 ||minutos >= 2400 || minutos % 100 >= 60) {
        cout << "Uno de los datos ingresados es inválido." << endl;
        return 1;//indica que hay un error en la ejecucion del programa
    }

    // Sumar la hora y los minutos
    int nueva_hora = (hora + minutos) % 2400;

    cout << "La hora es " << nueva_hora << "." << endl;

    return 0;
}
