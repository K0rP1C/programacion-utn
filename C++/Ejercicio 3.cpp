#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int dia, mes, anio, fecha;
    cout << "Ingrese una fecha(AAAAMMDD):"<< endl;
    cin >> fecha;

    anio = trunc(fecha/10000);
    cout << anio << endl;
    
    mes = trunc((fecha%1000)/100);
    cout << mes << endl;
    dia = fecha%100;
    

    if (mes > 12 || mes < 1) {
        cout << "El mes no existe" << endl;
        }
    else if ((mes = 1,3,5,7,8,10,12 && dia > 0) && (mes = 1,3,5,7,8,10,12 && dia < 32)) {
        cout << mes << endl;
        cout << dia << endl;
        }
    else if ((mes = 4,6,9,11 && dia > 0) && (mes = 4,6,9,11 && dia < 31)) {
        cout << mes << endl;
        cout << dia << endl;
        }
    else if ((mes = 2 && dia > 0)&&(mes = 2 && dia < 30)){
        cout << mes << endl;
        cout << dia << endl;
        }
    else {
        cout << "dia no existe en el mes";
    }  

    system("pause");
    return 0;
}