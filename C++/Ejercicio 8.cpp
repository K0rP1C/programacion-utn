#include <iostream>
using namespace std;

int main () {
    float ladoA, ladoB, ladoC;
    cout << ladoA << "Inserte la medida de los 3 lados del triangulo:" << endl; 
    cin >> ladoA >> ladoB >> ladoC;

    if (ladoA + ladoB > ladoC && ladoC + ladoB > ladoA && ladoA + ladoC > ladoB) {
    if (ladoA == ladoB && ladoB == ladoC && ladoA == ladoC) {
        cout << "Es un triangulo equilatero" << endl;
    } else if (ladoA != ladoB && ladoB != ladoC && ladoA != ladoC) {
        cout << "Es un triangulo escaleno" << endl;
    } else {
        cout << "Es un triangulo isoceles" << endl;
    }
    }

 system ("pause");   
 return 0;
}