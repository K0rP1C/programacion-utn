#include <iostream>
using namespace std;

int main () {

    int suma;

    suma = 0;

    for(int i = 1; i <= 100; i++){
        cout << i << " ";
        suma += i;
    } 
    cout << endl << "La sumatoria es: " << suma << endl;
 
 system("pause");
 return 0;
}