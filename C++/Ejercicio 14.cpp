#include <iostream>
using namespace std;

int main () {
    int numero, contador, acumulador, acumulador2;
    float promedio;

    acumulador = 0;
    contador = 0;
    acumulador2 = 0;

    while (1 <= 50) {
        cout << "Ingrese un numero..." << endl;
        cin >> numero;
        if (numero > 100) {
            contador ++;
            acumulador +=  numero;
            promedio = acumulador/contador;
            cout << "primera condicion" << promedio << endl;
        } else if (numero < -10) {
            acumulador2 += numero;
            cout << "Segunda condicion" << acumulador2 << endl;
        } else {}
    }

 system("pause");
 return 0;
}