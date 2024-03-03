#include<iostream>
#include<conio.h>

using namespace std;

 /*Problema 10. Escriba un programa que reciba un número n e imprima el enésimo número primo.
    Ej: Si recibe 4 el programa debe imprimir 7.
    Nota: la salida del programa debe ser: El primo numero 4 es: 7.*/

    int main()
	{
	
	int x,cont,z,i,t[100],num;
    i=0;

    for(x=1;x<=100;x++)
    { cont=0;
      for(z=1;z<=x;z++)

    {
    if(x%z==0)
    {cont++;}

    }

   if(cont==2 || z==2 || z==0)
  { t[i]=x;
       i++;}

  }

   for(x=0;x<i;x++)
       { cout<<t[x]<<",";
   }
    cout<<endl;
    cout<<"ingrese un numero: ";cin>>num;
    cout<<endl;
    if(num[t])
    {cout<<"El primo numero "<<num<<" es :"<<num[t];}
        //PROBLEMA #10 RESUELTO
    }
 //________________________________________________________________________________________________________



    /*Problema 12. Escriba un programa que calcula el máximo factor primo de un número.
    Ej: Si se recibe 33 el programa debe imprimir 11.
    Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11*/

    /*int num,i,j,cont,fin=0;
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
    cout<<"El mayor factor primo de "<<num<< " es :"<<fin;*/
   
