#include <iostream>
#include <string>
using namespace std;

string desencriptarPalabra(const string& palabra, int clave) {
    string desencriptada = palabra;

 
    for (int i = 0; i < palabra.length(); i++) {
        desencriptada[i] = static_cast<char>(palabra[i] - clave);
    }

    return desencriptada;
}

int main() {
    string palabraEncriptada;

    cout << "Introduce la palabra encriptada: ";
    cin >> palabraEncriptada;

    cout << "Posibles palabras desencriptadas:\n";
    for (int clave = 1; clave <= 5; clave++) {
        string palabraDesencriptada = desencriptarPalabra(palabraEncriptada, clave);
        cout << "Clave " << clave << ": " << palabraDesencriptada << endl;
    }

    return 0;
}
