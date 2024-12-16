#include <iostream>
#include<cmath>
using namespace std;


int main(){
float radio;
float Area, Circunferencia;
const  double pi = 3.1416;
cout<<"Ingrese el radio del circulo: ";
cin>>radio;

Area = pi * pow (radio , 2);
Circunferencia = 2 * pi * radio; 


cout<< "El Area del circulo es: "<<Area<<endl;
cout<<"La circunferencia del circulo es: "<<Circunferencia<<endl;
cout.precision(5);

};