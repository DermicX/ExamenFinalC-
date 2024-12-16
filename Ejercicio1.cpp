#include <iostream>
using namespace std;

int main(){
float a, b, result;

cout<< "Ingrese el valor de a: ";
cin>> a;
cout<< "Ingrese el valor de b: ";
cin>> b;

cout.precision(2);
cout<< "La suma es :  " << (a + b)<<endl;
cout<<"La resta es: "<<(a - b)<<endl;
cout<< "La division es: "<< (a / b)<<endl;
cout<<"La multiplicacion es : "<< (a * b)<< endl;


return 0;
};
