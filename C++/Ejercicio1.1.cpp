#include <iostream>
using namespace std;

int main()
{
    int valorA, valorB, suma, resta, producto;
    cout << "Ingrese un valor: "<< endl;
    cin >> valorA;
    cout << "Ingrese otro valor: "<< endl;
    cin >> valorB;

    suma = valorA + valorB;
    resta = valorA - valorB;
    producto = valorA * valorB;

    cout << "La suma es: " << suma << endl;
    cout << "La rest es: " << resta << endl;
    cout << "El producto es: " << producto << endl;

    system("pause");
    return 0;
}