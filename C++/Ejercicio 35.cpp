#include <iostream>
using namespace std;

int calFactorial (int numero){
    int factorial = 1;
    for(int i = 1; i <= numero; i++) {
        factorial *= i;
    }   return factorial;
}

int multiplo3(int numero) {
    int contador = 0;
    if (numero % 3 == 0) {
        contador ++;
    } return contador;
}

int multiplo5 (int numero) {
    int contador = 0;
    if (numero % 5 == 0) {
        contador ++;
    } return contador;
}

int multiplo3y5 (int numero) {
    int contador = 0;
    if (numero % 3 == 0 && numero % 5 == 0) {
        contador ++;
    } return contador;
}
    


int main () {
    int numero, cantidad, contador3 = 0, contador5 = 0, contador5y3 = 0, n;

    cout << "cantidad de numeros:" << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {

    cout << "Ingrese numero:" << endl;
    cin >> numero;

    cout << "su factorial es: " << calFactorial(numero) << endl;

    contador3 = multiplo3(numero);
    contador5 = multiplo5(numero);
    contador5y3 = multiplo3y5(numero);
    }

    cout << "multiplos 3: " << contador3 << endl;
    cout << "multiplos 5: " << contador5 << endl;
    cout << "multiplos 3 y 5: " << contador5y3 << endl;


    system("pause");
    return 0;
}