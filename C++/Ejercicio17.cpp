#include <iostream>
using namespace std;

int main () {
    float sueldoIng = 1;
    int acumulador = 0 , acumulador2 = 0, acumulador3 = 0, acumulador4 = 0;

    
    while (sueldoIng != 0) {
        cout << "Ingrese un sueldo. En caso de finalizar, ingrese 0:" << endl;
        cin >> sueldoIng;
        if (sueldoIng != 0) {
            if(sueldoIng > 0 && sueldoIng < 1520){
                acumulador ++;
            } else if (sueldoIng >= 1520 && sueldoIng < 2780){
                acumulador2 ++;
            } else if (sueldoIng >= 2780 && sueldoIng < 5999) {
                acumulador3 ++;
            } else if (sueldoIng >= 5999) {
                acumulador4 ++;
            }
        }
    }

    cout << "La cantidad de sueldo ingresados < 1520 es: " << acumulador << endl;
    cout << "La cantidad de sueldo ingresados >= 1520 y < 2780 es: " << acumulador2 << endl;
    cout << "La cantidad de sueldo ingresados >= 2780 y < 5999 es: " << acumulador3 << endl;
    cout << "La cantidad de sueldo ingresados >= 5999 es: " << acumulador4 << endl;
    
 system("pause");
 return 0;
}
