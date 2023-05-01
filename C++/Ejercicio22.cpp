#include <iostream>
#include <math.h>
using namespace std;

int main () {
string nombre, mayor, menor;
int fecha, anio, mes, dia, anioMin = 1900, mesMin= 1, diaMin= 1,
    anioMax= 2023, mesMax = 12, diaMax = 31;

    cout << "Ingrese nombre:" << endl;
    cin >> nombre;

    cout << "Ingrese fecha de nacimiento:" << endl;
    cin >> fecha;

while (nombre != "FIN") {

    anio = trunc(fecha/10000);
    mes = trunc((fecha%1000)/100);
    dia = fecha%100;

    if(anioMin < anio) {
        anioMin = anio;
        mesMin = mes;
        diaMin = dia;
        mayor = nombre;
    }
    if(anioMin == anio && mesMin > mes) {
        mesMin = mes;
        diaMin = dia;
        mayor = nombre;
    }
    if(anioMin == anio && mesMin == mes && diaMin > dia) {
        diaMin = dia;
        mayor = nombre;
    }

    if(anioMax > anio) {
        anioMax = anio;
        mesMax = mes;
        diaMax = dia;
        menor = nombre;
    }
    if(anioMax == anio && mesMax < mes) {
        mesMax = mes;
        diaMax = dia;
        menor = nombre;
    }
    if(anioMax== anio && mesMax == mes && diaMax < dia) {
        diaMax = dia;
        menor = nombre;
    }

    cout << "Ingrese nombre:" << endl;
    cin >> nombre;

    cout << "Ingrese fecha de nacimiento:" << endl;
    cin >> fecha;
}
    
    cout << mayor << endl;
    cout << menor << endl;

 system("pause");
 return 0;
}