#include<iostream>
#include<conio.h>
using namespace std;

/*Problema 16. La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
    si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
    Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
    que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
    Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
    Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
    Nota: la salida del programa debe ser:
    La serie mas larga es con la semilla: j, teniendo m terminos.
    Otra nota: se le dará una bonicación si imprime la serie*/

    int main()
	{
	
	int num,fin=0,x,cont,z,i,t[100];
    cout<<"ingrese un numero: ";cin>>num;

    while(num==1)
    {if (num%2==0)
    {num=num/2;}

}

        i=0;

        for(x=1;x<=100;x++)
        { cont=0;
          for(z=1;z<=x;z++)


        if(x%z==0)
        {cont++;}



       if(cont==2 || z==2 || z==0)
      { t[i]=x;
           i++;}

      }

        if(num[t])
        {cout<<" "<<num<<" La serie mas larga es con la semilla  :"<<num[t]<<" y genera una serie";}
        {fin++;

        cout<<" "<<"teniendo: "<<num/num<<fin-1<<" terminos.";}
        
        return 0;
    }

