#include <iostream>
using namespace std;

int main() {

    int operacion;
    float num1, num2;


    cout << "Selecciona una operacion matematica:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;

    cout << "Introduce el numero de la operacion (1-4): ";
    cin >> operacion;

   
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;

    
    switch (operacion) {
        case 1:
            cout << "Resultado de la suma: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado de la resta: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado de la multiplicacion: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Resultado de la division: " << num1 / num2 << endl;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;
            }
            break;
        default:
            cout << "Opcion no valida. Por favor, selecciona un numero entre 1 y 4." << endl;
            break;
    }

    return 0;
}
