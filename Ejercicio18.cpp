#include <iostream>
using namespace std;


void calcularMayor(int num1, int num2, int num3, int &mayor) {
  
    if (num1 >= num2 && num1 >= num3) {
        mayor = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        mayor = num2;
    } else {
        mayor = num3;
    }
}

int main() {
    int a, b, c, mayor;

  
    cout << "Introduce el primer numero: ";
    cin >> a;
    cout << "Introduce el segundo numero: ";
    cin >> b;
    cout << "Introduce el tercer numero: ";
    cin >> c;


    calcularMayor(a, b, c, mayor);

    // Mostrar el resultado
    cout << "El mayor de los tres numeros es: " << mayor << endl;

    return 0;
};
