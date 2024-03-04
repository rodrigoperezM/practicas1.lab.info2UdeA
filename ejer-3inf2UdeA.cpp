#include<iostream>
#include<conio.h>
using namespace std;

/*Ejercicio 3. Escriba un programa que debe leer un mes y un día de dicho mes para luego
decir si esa combinación de mes y día son válidos. El caso más especial es el 29 de febrero,
en dicho caso imprimir “posiblemente año bisiesto”.
Nota: el formato de salida debe ser:
14 es un mes invalido.
31/4 es una fecha invalida.
27/4 es una fecha valida.
29/2 es válida en bisiesto.
*/
int main()

{
	
int mes;
int dia;

cout<<"ingrese numero del mes: ";
cin>>mes;
if(mes>12)
{
	cout<<mes<<"es un mes invalido: "<<endl;
	}	
cout<<"ingrese numero del 1 al 30 para el dia: ";
cin>>dia;
//for(mes=0;mes<=12; mes++)


   if ((mes==4||6||9||11 )&& dia>30)
	{
	cout<<dia<<"/"<<mes<<" "<<"fecha invalida";
    }
    else if (mes<=12 && dia<=31)
    {
    cout<<"fecha valida";
    }

    else (mes==2 & dia==29);
    {
	cout<<"posible año bisiesto";
	}
	return 0;
	
	
	
	
}
