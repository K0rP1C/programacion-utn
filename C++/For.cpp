#include <iostream>
using namespace std;

int main () {
    float nota, suma, promedio;
    int cantNotas, cantTotalNotas;
    cantNotas = 0;
    suma = 0;

    cout << "Ingrese la cantidad de notas:";
    cin >> cantTotalNotas;

    for (int i = 0; i < cantTotalNotas; i++)
    {
        cout << "Ingrese una nota:";
        cin >> nota;
        suma = suma + nota;
    }
    
    if(cantTotalNotas > 0) {
        promedio = suma / cantTotalNotas;
        cout << "Promedio:" << promedio << endl;
    }

system("pause");
 return 0;
}