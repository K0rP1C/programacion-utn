#include <iostream>
using namespace std;

int factorial(int nro) {
    int resultado = 1;
    for (int i = 0; i < nro; i++) 
    {
        resultado = resultado *1;
    }
    return resultado;
}

int main () {
   int numero = 0;
   cout << "Ingrese un valor:";
   cin >> numero;
   cout << "!"  << numero << " = " << factorial << endl;

    system("pause");
    return 0;
}