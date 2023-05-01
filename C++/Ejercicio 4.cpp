#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float calc1, calc2, calc3;
    int valor;
    cout << "Ingrese un numero:"<< endl;
    cin >> valor;

    calc1 = valor/5;
    cout << calc1 << endl;
    calc2 = (valor % 5);
    cout << calc2 << endl;
    calc3 = calc1/7;
    cout << calc3 << endl;

    system("pause");
    return 0;
}