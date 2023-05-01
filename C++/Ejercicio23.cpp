#include <iostream>
using namespace std;

int main () {
 float valMaxNeg = INT64_MIN, valMinPos = INT64_MAX, contador = 0, promedio ,
 acumulador = 0;
 float valMinRango = 26.9 , valor;

 cout << "Ingrese un valor:" << endl;
 cin >> valor;

 while (valor != 0) {
    acumulador += valor;
    contador ++;
    if(valor < 0 && valor > valMaxNeg) {
        valMaxNeg = valor;
    }
    if (valor > 0 && valor < valMinPos) {
        valMinPos = valor;
    }
    if (valor >= -17.3 && valor < valMinRango) {
        valMinRango = valor;
    }
    promedio = acumulador/contador;

    cout << "Ingrese un valor:" << endl;
    cin >> valor;
 }

 cout << "El valor minimo negativo es: " << valMaxNeg << endl;
 cout << "El valor minimo positibo es: " << valMinPos << endl;
 cout << "El valor minimo del rango -17.3 y 26.9 es: " << valMinRango << endl;
 cout << "El promedio de todos los valor es: " << promedio << endl;
 
 system("pause");
 return 0;
}