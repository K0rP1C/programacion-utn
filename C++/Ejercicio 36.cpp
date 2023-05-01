#include <iostream>
using namespace std;

void simplificador(int &numerador, int &denominador) {
    for(int i = 1; i <= numerador || i <= denominador; i++) {
        if(numerador % i== 0 && denominador % i == 0) {
            numerador /= i;
            denominador /= i;
            i= 1;
        }
    }  
    return;
}

int main () {
int numerador, denominador;

    cout << "Ingrese numerador: " <<endl;
    cin >> numerador;
    cout << "Ingrese denominador: " <<endl;
    cin >> denominador;

    simplificador(numerador, denominador);

    cout << "Menor Factor comun: " << numerador << "/" << denominador << endl;

    system("pause");
    return 0;
}