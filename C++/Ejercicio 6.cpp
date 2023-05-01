#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int anio1, anio2, mes1, mes2, dia1, dia2;
    cout << "Ingrese año(AAAA), luego mes (MM) y por ultimo dia(DD)"<< endl;
    cin >> anio1 >> mes1 >> dia1;
    cout << "Ingrese otro año(AAAA), luego mes (MM) y por ultimo dia(DD)"<< endl;
    cin >> anio2 >> mes2 >> dia2;
    cout << anio1 << anio2 << endl;

    if (anio1 > anio2) {
        cout << "La fecha "<< anio1 << "\t" << mes1 << "\t" << dia1 << " es mas reciente: " << endl;
    } else if( anio2>anio1) {
        cout << "La fecha "<< anio2 << "\t" << mes2 << "\t" << dia2 << " es mas reciente: " << endl;
    } else if (anio1 = anio2 && mes1 > mes2) {
        cout << "La fecha "<< anio1 << "\t" << mes1 << "\t" << dia1 << " es mas reciente: " << endl;
    } else if (anio1 = anio2 && mes1 < mes2) {
        cout << "La fecha "<< anio2 << "\t" << mes2 << "\t" << dia2 << " es mas reciente: " << endl;
    } else if (mes1 = mes2 && dia1 > dia2) {
        cout << "La fecha "<< anio1 << "\t" << mes1 << "\t" << dia1 << " es mas reciente: " << endl;
    } else if (mes1 = mes2 && dia1 < dia2) {
        cout << "La fecha "<< anio2 << "\t" << mes2 << "\t" << dia2 << " es mas reciente: " << endl;
    } else {
        cout << "Las fechas coinciden" << endl;
    }


    
    system("pause");
    return 0;
}