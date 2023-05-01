#include <iostream>
using namespace std;

int main () {
 int mes, anio;

 cout << "Ingrese año(AAAA) y mes(MM)" << endl;
 cin >> anio >> mes;

if (mes < 13 || mes > 0) {
switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "El mes tiene 31 dias" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "El mes tiene 30 dias" << endl;
        break;
    default:
        if(anio%4 == 0 && anio%100 != 0 || anio%400 == 0) {
            cout << "El mes tiene 29 dias" << endl;
        } else {
            cout << "El mes tiene 28 dias" << endl;
        }
        break;
 }
} else {
    cout << "El mes no exite" << endl;
}


 system ("pause");
 return 0;
}