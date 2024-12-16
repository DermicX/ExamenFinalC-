#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
  
    double num1, num2, num3;
    
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    cout << "Ingresa el tercer número: ";
    cin >> num3;
    
    double promedio = (num1 + num2 + num3) / 3;

    double mayor = max({num1, num2, num3});
    double menor = min({num1, num2, num3});
    double diferencia = mayor - menor;

  
    cout << "El promedio de los tres números es: " << promedio << endl;
    cout << "La diferencia entre el número mayor y el menor es: " << diferencia << endl;

    return 0;
};
