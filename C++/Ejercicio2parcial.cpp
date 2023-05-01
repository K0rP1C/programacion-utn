#include <iostream>
using namespace std;


int main () {
    int n, numero, numero1, numero3, contadorCapicua = 0;
    cout << "Cantidad de numeros: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese un numero de 3 digitos: " << i << endl;
        cin >> numero;
        numero1 = numero/100;
        cout << numero1 << endl;
        numero3 = numero%10;
        cout << numero3 << endl;
        if(numero1 == numero3) {
            contadorCapicua ++;
        }
    }

    cout << "Cantidad de capicuas: " << contadorCapicua << endl;

 return 0;
}