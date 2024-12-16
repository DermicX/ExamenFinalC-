#include <iostream>
using namespace std;

int main() {

    float numero, referencia;
    bool todosMayores = true; 

    cout << "Introduce el numero de referencia: ";
    cin >> referencia;

    for (int i = 1; i <= 5; i++) {
        cout << "Introduce el numero " << i << ": ";
        cin >> numero;


        if (numero <= referencia) {
            todosMayores = false; 
        }
    }

    if (todosMayores) {
        cout << "Todos los numeros son mayores que el numero de referencia." << endl;
    } else {
        cout << "Al menos uno de los numeros no es mayor que el numero de referencia." << endl;
    }

    return 0;
}

