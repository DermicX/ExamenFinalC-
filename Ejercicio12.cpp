#include <iostream>
using namespace std;

int main() {
    int opcion;
    float numero;

    do {
     
        cout << "Menu de opciones:" << endl;
        cout << "1. Calcular el cuadrado de un numero." << endl;
        cout << "2. Calcular el cubo de un numero." << endl;
        cout << "3. Salir." << endl;

   
        cout << "Elige una opcion (1-3): ";
        cin >> opcion;

       
        switch (opcion) {
            case 1:
              
                cout << "Introduce un numero: ";
                cin >> numero;
                cout << "El cuadrado de " << numero << " es: " << numero * numero << endl;
                break;
            case 2:
              
                cout << "Introduce un numero: ";
                cin >> numero;
                cout << "El cubo de " << numero << " es: " << numero * numero * numero << endl;
                break;
            case 3:
                
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                
                cout << "Opción no valida. Por favor, elige una opcion entre 1 y 3." << endl;
                break;
        }
    } while (opcion != 3); 

    return 0;
}
