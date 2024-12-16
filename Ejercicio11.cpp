#include <iostream>
using namespace std;

int main() {
    
    float numero, suma = 0;

 
    cout << "Introduce numeros (ingresa un numero negativo para terminar):" << endl;

    do {
        cout << "Introduce un numero: ";
        cin >> numero;

      
        if (numero >= 0) {
            suma += numero;
        }
    } while (numero >= 0); 

    cout << "La suma de todos los numeros ingresados es: " << suma << endl;

    return 0;
}
