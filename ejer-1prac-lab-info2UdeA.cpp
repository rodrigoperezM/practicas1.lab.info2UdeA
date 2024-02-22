#include <iostream>
#include <conio.h>
using namespace std;

int main()

{

int valor,cant;

cout<<"Ingrese el valor : ";cin>>valor;
cant=valor/50000;
valor%=50000;
cout<<"50000: "<<cant<<endl;
cant=valor/20000;
valor%=20000;
cout<<"20000: "<<cant<<endl;
cant=valor/10000;
valor%=10000;
cout<<"10000: "<<cant<<endl;
cant=valor/5000;
valor%=5000;
cout<<"5000: "<<cant<<endl;
cant=valor/2000;
valor%=2000;
cout<<"2000: "<<cant<<endl;
cant=valor/1000;
valor%=1000;
cout<<"1000: "<<cant<<endl;
cant=valor/500;
valor%=500;
cout<<"500: "<<cant<<endl;
cant=valor/200;
valor%=200;
cout<<"200: "<<cant<<endl;
cant=valor/100;
valor%=100;
cout<<"100: "<<cant<<endl;
cant=valor/50;
valor%=50;
cout<<"50: "<<cant<<endl;
cout<<"Faltante: "
      ""<<valor-cant;

return 0;
//PROBLEMA-2 RESUELTO
//___________________________

}
