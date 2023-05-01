#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int valorA, valorB;
    cout << "Ingrese un numero:"<< endl;
    cin >> valorA;
    cout << "Ingrese otro numero:"<< endl;
    cin >> valorB;

    if (valorA>valorB){
        cout << "El primer numero es mayor al segundo"<< endl;
        }
    else if(valorB>valorA){
        cout << "El segundo numero es mayor al primero"<< endl;
        }
    else {
        cout << "Los numeros son iguales"<< endl;
    }
    

    system("pause");
    return 0;
}