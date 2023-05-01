#include <iostream>
using namespace std;

string mayorTr(int f, int b, int l, int r){
        string mayor;
        if (b>f && b>l && b>r){
            mayor = "La dirección en la que se recorrió el trayecto más largo es 'atras'";
        }
        if (f>b && f>l && f>r){
            mayor = "La dirección en la que se recorrió el trayecto más largo es 'adelante'";
        }
        if (l>b && l>f && l>r){
            mayor = "La dirección en la que se recorrió el trayecto más largo es 'izquierda'";
        }
        if (r>b && r>l && r>f){
            mayor = "La dirección en la que se recorrió el trayecto más largo es 'derecha'";
        }
        return mayor;


}

int main () {
    char direccion;
    int bateria = 1000, metros, consumo= 0, acumuladorMetros=0,
    adelante = 0, atras = 0, izquierda = 0, derecha = 0, metrosAvanzados;
    string mayorTrayecto;
    cout << "direccion:" << endl;
    cin >> direccion;
    cout << "metros" << endl;
    cin >> metros;

    while (direccion != 'E' && bateria > 0) {

        if(metros % 2 ==0) {
            consumo = metros*4;
            bateria -= consumo;
        } else {
            consumo = metros*3;
            bateria -= consumo;
        } 
        //Cantidad total de metros recorridos.
        acumuladorMetros += metros;

        // Cantidad total de metros avanzados.

        if (direccion == 'F' || direccion == 'R') {
            metrosAvanzados += metros;
        } else {
            metrosAvanzados -= metros;
        }

        //La dirección en la que se recorrió el trayecto más largo.
        switch (direccion) {
            case 'F':
                adelante += metros;
            break;
            case 'R':
                derecha += metros;
            break;
            case 'L':
                izquierda += metros;
            break;
            case 'B' :
                atras += metros;
            break;
        }

        mayorTrayecto = mayorTr(adelante, atras, izquierda, derecha);

        cout << "direccion:" << endl;
        cin >> direccion;
        cout << "metros" << endl;
        cin >> metros;

        
    
    }

    cout << "Cantidad total de metros recorridos: "<< acumuladorMetros << endl;
    cout << "Cantidad total de metros avanzados.: "<< metrosAvanzados << endl;
    cout << mayorTrayecto << endl;

getchar();
return 0;
}