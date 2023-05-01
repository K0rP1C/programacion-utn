#include <iostream>
using namespace std;

int main () {
    int m, numero, contador0, numAnt0 = 0, acumulado = 0, negMax = 0, 
        numContador = 1, numContadorPrint = 0, numMaxRepet = 0, numMaxRepetPrint,
        contadorColor = 0, contadorColorMax = 0, sDocenaCont = 0,
        sDocenaContMax = 0, numAnt = -1;
    string color, colorAnt;

    cout << "Indique cantidad de pares: " << endl;
    cin >> m;

    for (int i = 0; i < m; i++) {

        cout << "Ingrese numero: " << endl;
        cin >> numero;

        cout << "Ingrese color: " << endl;
        cin >> color;

        

        // cuántas veces salió el número cero y el número anterior a cada cero
        if (numero != 0) {
            numAnt0 = numero;
        }

        if (numero == 0) {
            contador0 ++;
            cout << "El numero anterior al 0 es: " << numAnt0 << endl;
        }
        
        // cuántas veces seguidas llegó a repetirse el color negro
        
        if(color == "negro"){
            acumulado ++;
        } else {
            acumulado = 0;
        }
        if(negMax < acumulado) {
            negMax = acumulado;
        }

        // cuántas veces seguidas llegó a repetirse el mismo número y cuál fue
        if (i == 1) {
            numAnt = numero;
        }

        if (numero == numAnt) {
            numContador ++;
            numMaxRepet = numero;
        } else if (numero != numAnt) {
            numContador = 0;
        }

        if (numContador > numContadorPrint) {
            numMaxRepetPrint = numMaxRepet;
            numContadorPrint = numContador;
        }

        // el mayor número de veces seguidas que salieron alternados el rojo y el negro

        if (i == 0) {
            colorAnt = color;
        }

        if (colorAnt != color) {
            contadorColor ++;
            colorAnt = color;
        } else if(colorAnt == color) {
            contadorColor = 0;
        }
        
        if (contadorColor > contadorColorMax) {
            contadorColorMax = contadorColor;
        }
        //el mayor número de veces seguidas que se negó la segunda docenas

        if(numero < 12 || numero > 24) {
            sDocenaCont ++;
        } else {
            sDocenaCont = 0;
        }

        if (sDocenaCont > sDocenaContMax) {
            sDocenaContMax = sDocenaCont;
        }

        numAnt = numero;
    }

    cout << "La cantidad de 0 ingresados es de: " << contador0 << endl;
    cout << "Cantidad de veces seguidas que salio el color negro: " << negMax << endl;
    cout << "Cuántas veces seguidas llegó a repetirse el mismo número: " << numContadorPrint << " y fue el: "<< numMaxRepetPrint << endl;
    cout << "El mayor número de veces seguidas que salieron alternados el rojo y el negro: " << contadorColorMax << endl;
    cout << "el mayor número de veces seguidas que se negó la segunda docenas: " << sDocenaContMax << endl;
    


    
    return 0;
}