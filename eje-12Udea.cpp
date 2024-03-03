#include<iostream>
#include<conio.h>

using namespace std;


/*Problema 12. Escriba un programa que calcula el máximo factor primo de un número.
    Ej: Si se recibe 33 el programa debe imprimir 11.
    Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11*/

    int main()
	
	{
	
	int num,i,j,cont,fin=0;
    cout<<"Ingrese un numero: ";cin>>num;
    for(i=2;i<=num;i++)
    {
        cont=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {cont=cont+1;
                break;}
        }
        if(cont<1)
        {fin++;}
    }
    cout<<"El mayor factor primo de "<<num<< " es :"<<fin;
}
