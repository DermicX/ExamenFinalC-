#include <iostream>
using namespace std;

int sumar(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b;

    cout << "Introduce el primer numero: ";
    cin >> a;
    cout << "Introduce el segundo numero: ";
    cin >> b;

  
    int resultado = sumar(a, b);
    cout << "La suma de " << a << " y " << b << " es: " << resultado << endl;

    return 0;
}
