
#include<iostream>
#include<conio.h>

using namespace std;

/*Problema 17. La secuencia de números triangulares se forma al sumar su posición en el arreglo
    con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
    Si listamos los números triangulares y sus divisores tenemos:
    1: 1
    3: 1,3
    6: 1,2,3,6
    10: 1,2,5,10
    15: 1,3,5,15
    21: 1,3,7,21
    28: 1,2,4,7,14,28
    Se observa que 28 es el primer número triangular que tiene más de 5 divisores. Escriba un programa
    que reciba un número k y calcule cual es el primer número triangular que tiene más de k divisores.
    Tip: el enésimo número triangular se puede representar como n*(n+1)/2.
    Nota: la salida del programa debe ser:
    El numero es: 28 que tiene 6 divisores*/

    int main()
	{
	
	
	int num,x=1,y=2,i,z=1,j;
        cout<<"Ingrese un numero : ";cin>>num;
        cout<<1<<":"<<x;

        for (i=0;i<=num/5;i++){
            z=x+y++;
        x=z;
        y=y;
        cout<<endl;
        cout<<z<<": ";
        for(j=1;j<=x;j++)
        if(x%j==0)
        cout<<j<<",";}
        cout<<endl;
        cout<<"El numero es:"<<num<<" que tiene 6 divisores";
        return 0;
    }
