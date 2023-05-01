#include <iostream>
using namespace std;

void fecha(int fecha,int &dia, int &mes, int &anio){
    anio = fecha/10000;
    mes = (fecha%10000)/100;
    dia = fecha%100;
    return;
}

int main () {
    int numFac, fechaFac, montoFac, montoFacMy = 0, fechaFacMy, montoFacMn, numFacMn,
    dia, mes, anio, contador=0, acumulador=0;
    float promedio=0;

    cout << numFac << "Ingrese numero de factura: " << endl;
    cin >> numFac;
    cout << numFac << "Ingrese fecha de factura: " << endl;
    cin >> fechaFac;
    cout << numFac << "Ingrese monto de factura: " << endl;
    cin >> montoFac;

    montoFacMn = montoFac;

    montoFacMn = montoFac;
    while(montoFac != 0) {
        if (montoFac > montoFacMy) {
            montoFacMy = montoFac;
            fechaFacMy = fechaFac;
        }
        if (montoFacMn > montoFac) {
            montoFacMn = montoFac;
            numFacMn = numFac;
        }
        contador ++;
        acumulador += montoFac;
        promedio = acumulador/contador;

        fecha(fechaFacMy, dia, mes, anio);

        cout << numFac << "Ingrese numero de factura: " << endl;
        cin >> numFac;
        cout << numFac << "Ingrese fecha de factura: " << endl;
        cin >> fechaFac;
        cout << numFac << "Ingrese monto de factura: " << endl;
        cin >> montoFac;
    }

    cout << "fecha de menor facturacion: " << dia <<"/" << mes << "/" << anio << endl;
    cout << "numero de factura de menor monto" <<  numFacMn << endl;
    cout << "promedio facturacion del mes " << promedio << endl;
    system("pause");
    return 0;
}