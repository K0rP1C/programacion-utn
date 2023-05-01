#include <iostream>
using namespace std;

int main () {
    float valor;
    int acumulador = 0;
    while (valor >= 0) {
        cout << "Ingrese un valor no negativo " << endl;
        cin >> valor;
        cout << valor << endl;
        if (valor >= 0) {
        acumulador ++;
        }
    }

    cout << "La cantidad de valores ingresados es: " << acumulador << endl;


 system("pause");
 return 0;
}