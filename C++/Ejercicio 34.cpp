#include <iostream>
using namespace std;

int calcFactorial(int numero) {
    int factorial = 1;
    for(int i = 1; i <= numero; i++){
        factorial *= i;
    } return factorial;
}

int main () {

    int numero;

    cout << "ingrese numero: " << endl;
    cin >> numero;

    cout << "El factorial de " << numero << " es " << calcFactorial(numero) << endl;
 
 return 0;
}