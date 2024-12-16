#include <iostream>
using namespace std;

int main() {
   
    float num1, num2, num3;

    cout << "Introduce el primer numero: ";
    cin >> num1;

    cout << "Introduce el segundo numero: ";
    cin >> num2;

    cout << "Introduce el tercer numero: ";
    cin >> num3;

    if (num1 < num2 && num2 < num3) {
        cout << "Los numeros están en orden ascendente." << endl;
    } else if (num1 > num2 && num2 > num3) {
        cout << "Los numeros están en orden descendente." << endl;
    } else {
        cout << "Los numeros están desordenados." << endl;
    }

    return 0;
};
