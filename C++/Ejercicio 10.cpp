#include <iostream>
using namespace std;

int main () {
    int edad;

    cout << "Ingrese su edad: " << endl;
    cin >> edad;
    if (edad >= 0) {
        if(edad <= 12) {
            cout << "Menor" << endl;
        } else if (edad <= 18) {
            cout << "Cadete" << endl;
        } else if (edad <= 26) {
            cout << "Juvenil" << endl;
        } else {
            cout << "Mayor" << endl;
        }
    } else {
        cout << "La edad debe ser mayor o igual a 0 " << endl;
    }
 system ("pause");
 return 0;
}