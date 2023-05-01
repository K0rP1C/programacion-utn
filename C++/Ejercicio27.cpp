#include <iostream>
using namespace std;

int puntos(char codigoR){
    int puntuacion = 0;
    if(codigoR == 'G') {
        puntuacion += 3;
    } else if(codigoR == 'E') {
        puntuacion += 1;
    } else {
        puntuacion += 0;
    } return puntuacion;
}

int main () {
int k, p,  nroEquipo, puntuacion = 0;
char codigoR;

    cout << "Ingrese cantidad de equipos: " << endl;
    cin >> k;

    for( int i = 0; i < k; i++ ) {

        cout << "Ingrese numero de equipo: " << endl;
        cin >> nroEquipo;
        cout << "Ingrese cantidad de partidos disputados: " << endl;
        cin >> p;

        for(int k = 0; k < p; k++) {
            cout << "Ingrese codigo resultado(G,E,P)" << endl;
            cin >> codigoR;
            puntuacion += puntos(codigoR);
        }
        cout << "El equipo " << nroEquipo << " obtuvo en este toneo " << puntuacion << " puntos." << endl;
        puntuacion = 0;
    }
 return 0;
}