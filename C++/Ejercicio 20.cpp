#include <iostream>
using namespace std;

int main () {
    float mayor , valor = 0;

    for(int i = 1; i <= 10; i++) {
        cout << "Ingrese valor:" << endl;
        cin >> valor;
        if (i == 1) {
            mayor = valor;
        }
        if (valor > mayor) {
            mayor = valor;
        }
    }

    cout << mayor << endl;
 system("pause");
 return 0;
}