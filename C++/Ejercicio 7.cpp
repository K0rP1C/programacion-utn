#include <iostream>
using namespace std;

int main () {
    float ladoA, ladoB, ladoC;
    cout << ladoA << "Inserte la medida de los 3 lados del triangulo:" << endl; 
    cin >> ladoA >> ladoB >> ladoC;

    if (ladoA + ladoB > ladoC && ladoC + ladoB > ladoA && ladoA + ladoC > ladoB) {
        cout << "Es un triangulo" << endl;
    } else {
        cout << "No es un triangulo" << endl;
    }
 system ("pause");   
 return 0;
}