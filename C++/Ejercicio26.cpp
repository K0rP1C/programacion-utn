#include <iostream>
using namespace std;

int pesoTotal(int pesoContenedor) {
    return pesoContenedor += pesoContenedor;
}

string contMayorPeso(float pesoContenedor, string identificador){
    float pesoContenedorMax = 0;
    string identificadorMax;
    if (pesoContenedor > pesoContenedorMax){
        pesoContenedorMax = pesoContenedor;
        identificadorMax = identificador;
    } 
    return identificadorMax;
}

int destino1(int puerto) {
    int contador = 0;
    if (puerto == 1) {
        contador ++;
    } return contador;
}

int destino2(int puerto) {
    int contador = 0;
    if (puerto == 2) {
        contador ++;
    } return contador;
}

int destino3(int puerto) {
    int contador = 0;
    if (puerto == 3) {
        contador ++;
    } return contador;
}
    
int main () {
    string identificador, contPesoMax;
    float pesoContenedor = 0, pesoFinal ;
    int puerto, puerto1, puerto2, puerto3;

    for( int i = 0; i < 100; i++ ) {
        cout << "Ingrese identificador del contenedor: " << endl;
        cin >> identificador;
        cout << "Ingrese peso del contenedor: " << endl;
        cin >> pesoContenedor;
        cout << "Ingrese puerto: " << endl;
        cin >> puerto;

        pesoFinal = pesoTotal(pesoContenedor);
        contPesoMax = contMayorPeso(pesoContenedor, identificador);
        puerto1 = destino1(puerto);
        puerto2 = destino2(puerto);
        puerto3 = destino3(puerto);
    }

    cout << "El peso total del buque a trasladar es de: " << pesoFinal << endl;
    cout << "La identificación del contenedor de mayor peso: " << contPesoMax << endl;
    cout << "La cantidad de contenedores que debe trasladar a cada puerto, puerto 1: " << puerto1 << " ,puerto2: " << puerto2 <<" y puerto3: " << puerto3 << endl;

    system("pause");
    return 0;
}

