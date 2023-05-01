#include <iostream>
using namespace std;

int main()
{
    int numeroA, numeroB, suma, resta, producto;
    float division;
    cout << "Ingrese el nro A:" << endl;
    cin >> numeroA;
    cout << "Ingrese el nro B:" << endl;
    cin >> numeroB;

    suma = numeroA + numeroB;
    resta = numeroA - numeroB;
    producto = numeroA * numeroB;

    if (numeroB != 0)
    {
        division = numeroA / (float) numeroB;
        cout << "Division: " << division << endl;
    }

    cout << suma << endl;
    cout << resta << endl;
    cout << producto << endl;

    system("pause");
    return 0;
}