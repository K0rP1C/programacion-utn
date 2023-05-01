#include <iostream>
using namespace std;

int main()
{
    int dia, mes, anio, fecha;
    cout << "Ingrese un dia(numero):"<< endl;
    cin >> dia;
    cout << "Ingrese un mes numero:"<< endl;
    cin >> mes;
    cout << "Ingrese un año: "<< endl;
    cin >> anio;

    fecha = anio * 10000 + mes * 100 + dia;
    cout << "Fecha: "<< fecha << endl;

    system("pause");
    return 0;
}