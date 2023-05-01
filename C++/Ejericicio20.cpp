#include <iostream>
using namespace std;

int main () {
    
    int vuelo, vueloMax = 0, asientos, pasaporte = -1, m, contadorV, contVecesSeguidas = 0,
        contVecesSeguidasMax = 0;
    string destino;
    float monto, montoPorVuelo = 0, montoPorVueloMax = 0, acumuladorV = 0, total = 0;

    cout << "cantidad vuelos:" << endl;
    cin >> m;

    for(int i = 0; i < m; i++) {

        contadorV = 0;
        acumuladorV = 0;
        montoPorVuelo = 0;

        cout << "Ingrese destino:" << endl;
        cin >> destino;

        cout << "Ingrese numero de vuelo:" << endl;
        cin >> vuelo;

        cout << "Ingrese asientos: " << endl;
        cin >> asientos;

        cout << "Nro. de Vuelo: " << vuelo << endl;

        cout << "Destino: " << destino << endl;

        
        cout << "valor pasaje:" << endl;
        cin >> monto;

        cout << "Ingrese pasaporte:" << endl;
        cin >> pasaporte;


        while (pasaporte != 0) {  
            cout << "Nro. de pasaporte: " << pasaporte << endl;
            cout << "monto: " << monto << endl;

            contadorV ++;
            acumuladorV += monto;
            montoPorVuelo += monto;

            cout << "valor pasaje:" << endl;
            cin >> monto;

            cout << "Ingrese pasaporte:" << endl;
            cin >> pasaporte;
        }

        cout << "El total del vuelo es: " << acumuladorV << endl;
        cout << "porcentaje de Asientos Ocupados del vuelo: " << (contadorV*100)/asientos << endl;
        cout << "porcentaje de Asientos Libres del vuelo: " << ((asientos-contadorV)*100)/asientos << endl;
        
        total += acumuladorV;

        if (contadorV == asientos) {
            contVecesSeguidas ++;
        } else {
            contVecesSeguidas = 0;
        }

        if( contVecesSeguidas > contVecesSeguidasMax ) {
            contVecesSeguidasMax = contVecesSeguidas; 
        }

        if(montoPorVuelo > montoPorVueloMax) {
                montoPorVueloMax = montoPorVuelo;
                vueloMax = vuelo;
        }

    }



    cout << "Total recaudado del mes " << total << endl;
    cout << "Cantidad de veces seguidas que se dieron vuelos completos: " << contVecesSeguidasMax << endl;
    cout << "El numero de vuelo que mas recaudo: " << vueloMax << endl;
    
 system("pause");   
 return 0;
}