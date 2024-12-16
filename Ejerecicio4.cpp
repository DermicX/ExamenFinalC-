#include <iostream>
using namespace std;

int main() {

    float numero1, numero2;
    cout << "Introduce el primer numero: ";
    cin >> numero1;

    cout << "Introduce el segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2) {
        cout << "El primer numero (" << numero1 << ") es mayor que el segundo (" << numero2 << ")." << endl;
    } else if (numero1 < numero2) {
        cout << "El segundo numero (" << numero2 << ") es mayor que el primero (" << numero1 << ")." << endl;
    } else {
        cout << "Ambos numeros son iguales." << endl;
    }

    return 0;
};
