
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{




/* Problema 5. Escriba un programa que muestre el siguiente patrón en la pantalla:
          *
         ***
        *****
       *******
        ******
         ***
          *

        El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el
        ejemplo mostrado, el tamaño de la gura es 7.*/


        int n,a=0,e=0,i;

        cout<<"Ingrese un numero: ",cin>>n;
        {for(i=1;i<=2*2;i++){
            cout<<i;
            //e=0;
        for(e=i;e<=n-1;e++)
             {cout<<" ";}

            //a=0;
            for(a=1;a<=(2*i)-1;a++)
            {cout<<"*";}
             cout<<endl;
        }

        for(i=n-4;i>=1;i--){
            cout<<i;
            //e=0;
        for(e=i;e<=n-1;e++)
             {cout<<" ";}

            //a=0;
            for(a=1+1;a<=(2*i);a++)
            {cout<<"*";}
             cout<<endl;
        }
}
}
