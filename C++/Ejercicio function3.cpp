#include <iostream>
using namespace std;

void descomponerFecha(int fecha, int &anio, int &mes, int &dia) {
    anio = fecha / 10000;
    mes = (fecha % 10000) /100;
    dia = fecha % 100;
    return;
}

void imprimirFecha(int anio, int mes, int dia) {
    cout << "Anio: " << anio << endl;
    cout << "Mes: " << dia << endl;
    cout << "Dia: " << dia << endl;
    return;
}

int main () {
    int fechaFormateada = 0;
    int anio, mes, dia;
    cout << "Ingrese una fecha con formato AAAAMMDD: " << fechaFormateada << endl;
    cin >> fechaFormateada;

    descomponerFecha(fechaFormateada, anio, mes, dia);

    imprimirFecha(anio, mes, dia);

 system("pause");
 return 0;
}