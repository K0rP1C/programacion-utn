#include <iostream>
using namespace std;

int main () {

    float valor;
    int n, acumulador = 0;

    cout << "Ingrese un numero" << endl;
    cin >> n;

    for(int i = 0; i < n; i++) {
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