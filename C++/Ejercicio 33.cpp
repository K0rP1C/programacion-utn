#include <iostream>
using namespace std;

int maximoComunDivisor(int a, int b) {
    int resto = a % b;

    while (resto != 0) {
        a=b;
        b=resto;
        resto = a % b;
    }
    return b;
}

int main () {

    int valorA, valorB;
    int mcd;
    cout << "Ingrese el nro A:";
    cin >> valorA;
    cout << "Ingrese el nro B:";
    cin >> valorB;

    mcd = maximoComunDivisor(valorA, valorB);

    cout << "El maximo comun divisor entre " << valorA << " y " << valorB << " es: " << mcd << endl;
    system("pause");
    return 0;

 return 0;
}