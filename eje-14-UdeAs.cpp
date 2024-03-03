#include<iostream>
#include<conio.h>

using namespace std;

 /*Problema 14. Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha,
    Ej: 969. escriba un programa que calcule el número palíndromo más grande que se puede obtener
    como una multiplicación de números de 3 dígitos.
    Ej: una de las posibles respuestas es: 143*777=111111.
    Nota: la salida del programa debe ser: 143*777=111111*/

    int main()
	{
	
	int m,n,n1,res,inv=0;
    cout<<"Ingrese un numero: ";cin>>n;
    n1=n;
    while(n1>0)
    {res=n1%10,n1=n1/10,inv=inv*10+res;}
    if(inv==n){cout<<n;}
        else {cout<<n<<endl;}
    cout<<"Ingrese un numero: ";cin>>m;
    n1=m;
    while(n1>0)
    {res=n1%10,n1=n1/10,inv=inv*10+res;}
    if(inv==m){cout<<m;}
        else {cout<<m<<endl;}
    cout<<n<<"*"<<m<<" = "<<n*m;
    return 0;}
