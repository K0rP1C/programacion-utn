#include <iostream>
using namespace std;

int main () {
    int m, multiplo;

    cout << "Ingrese un valor: ";
    cin >> m;

    for(int i = 0; i <= m; i++) {
        multiplo = 3 * i;
        if (multiplo % 3 == 0 && multiplo % 5 != 0) {
            cout << multiplo << endl;
        }
    }
 return 0;
}