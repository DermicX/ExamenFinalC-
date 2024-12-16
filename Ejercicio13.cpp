#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> numeros(5);

  
    cout << "Introduce 5 numeros:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }

   
    cout << "Los numeros en orden inverso son:" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << numeros[i] << endl;
    }

    return 0;
}
