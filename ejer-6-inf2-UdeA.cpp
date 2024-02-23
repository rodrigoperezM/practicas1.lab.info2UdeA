#include <iostream>
#include<conio.h>
using namespace std;

int main()

{
	/*Problema 6. Escriba un programa que encuentre el valor aproximado del número de euler en base
    a la siguiente suma innita:e =1/0! +1/1! +1/2! +1/3! +1/ 4! +1/5! + ... (2)
    El usuario debe ingresar el número de elementos usados en la aproximación.
    Ej: si se ingresa 3 e =1/ 0! +1/1! +1/2! = 2,5
    Nota: el formato de salida debe ser: e es aproximadamente: 2.5*/

    int num,i;
    cout<<"Ingrese un numero: ";cin>>num;
    double e=0;int fac(int f);
	for (i=0;i<num;i++){
        double u=fac(i);e+=1/u;}
    cout<<"e es aproximadamente: "<<e<<endl;}
    int fac(int f){
    int f1=f;
    if (f1>1)
    {f1=f*fac(f-1);
    return f1;}
    else{return 1;}

    //PROBLEMA # 6 RESUELTO
}
