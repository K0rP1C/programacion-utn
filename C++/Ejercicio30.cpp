#include <iostream>
using namespace std;

int main () {
    int valor, n, contador0 = 0, sumNegativos = 0, acumuladorValPos = 0,
    contadorValPos = 0, numAnterior ;
    float promPositivos = 0;

    cout <<  "Ingrese cantidad de valores enteros a ingresar: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        if ( i > 1) {
            numAnterior = valor;
        }        

        cout << "Ingrese valor: " << endl;
        cin >> valor;

        // cuántos valores cero hubo

        if (valor == 0) {
            contador0 ++;
        }

        // promedio de valores positivos

        if (valor > 0) {
            contadorValPos ++;
            acumuladorValPos += valor;
            promPositivos = acumuladorValPos / contadorValPos;
        }

        // sumatoria de valores negativos

        if (valor < 0) {
            sumNegativos += valor;
        }

        //El conjunto de valores termina con un valor igual al anterior

        if (i > 1) {
            if ( valor == numAnterior) {
            i = n + 1;
            }
        }

        // Se dan N valores, pero el proceso deberá finalizar si se procesan todos los valores o si la cantidad de ceros supera a cuatro
        // Se dan N valores, pero el proceso deberá finalizar si se cumple alguna de las condiciones de 4) o si el promedio de positivos resulta mayor que seis.
        if (contador0 > 4 || promPositivos > 6) {
            i = n + 1;
        }
    }

    cout << "valores 0: " << contador0 << endl;
    cout << "promedio valores positivos: " << promPositivos << endl;
    cout << "sumatoria negativos: "  << sumNegativos << endl;

 return 0;
}