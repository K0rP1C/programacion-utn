#include <iostream>
using namespace std;

int maximoComunDivisor(int nroA, int nroB) {
    int resto = 0;
    resto = nroA % nroB;
    while (resto != 0)
    {
        nroA = nroB;
        nroB = resto;
        resto = nroA % nroB;
    }
    return nroB;

}

int main () {
    int valorA, valorB, mcd = 0;
    cout << "Ingrese valor A:";
    cin >> valorA;
    cout << "Ingrese valor B:";
    cin >> valorB;

    mcd = maximoComunDivisor(valorA,valorB);

    cout << "El maximo comun divisor entre " << valorA << " y " << valorB << " es " << mcd << endl;

 system("pause");
 return 0;
}