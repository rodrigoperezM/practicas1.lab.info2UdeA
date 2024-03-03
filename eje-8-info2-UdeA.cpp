
#include<iostream>
#include<conio.h>

using namespace std;


/*Problema 8. Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
    múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
    Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
    Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
    Nota: el formato de salida debe ser:
    m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
    m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
    y así sucesivamente.*/

int main ()

    {
	int num1,num2,num3,i,j;
    cout<<"Ingrese un numero : ";cin>>num1;
    cout<<"Ingrese un numero : ";cin>>num2;
    cout<<"Ingrese un numero : ";cin>>num3;
    {for(i=num1;i<num3;i=num1+i)
    cout<<i<<"+";
    for (j=num2;j<num3;j=num2+j)
    cout<<j<<"+";}
    cout<<" = "<<(num3/num1*i/2+num3/num2*j/2);//?????????

    return 0;
}


