#include <iostream>
#include <string>
using namespace std;

string encriptarPalabra(const string& palabra, int clave) {
    string encriptada = palabra;

  
    for (int i = 0; i < palabra.length(); i++) {
        encriptada[i] = static_cast<char>(palabra[i] + clave);
    }

    return encriptada;
}

int main() {
    string palabra;
    int clave;


    cout << "Introduce la palabra a encriptar: ";
    cin >> palabra;

   
    cout << "Introduce la clave de encriptacion (un número entre 1 y 5): ";
    cin >> clave;

   
    while (clave < 1 || clave > 5) {
        cout << "Clave no valida. Debe ser un numero entre 1 y 5: ";
        cin >> clave;
    }

    string palabraEncriptada = encriptarPalabra(palabra, clave);

    cout << "Palabra encriptada: " << palabraEncriptada << endl;

    return 0;
};
