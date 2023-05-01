#include <iostream>
using namespace std;

int main () {
 float mayor , menor, valor = 0;
int n, posMy = 1, posMn = 1;

    cout << "Ingrese repeticiones: " << endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        cout << "Ingrese valor:" << endl;
        cin >> valor;
        if (i == 1) {
            mayor = valor;
            menor = valor;
        }
        if (valor > mayor) {
            mayor = valor;
            posMy = i;
        }
        if (valor < menor) {
            menor = valor;
            posMn = i;
        }
    }
    

    cout << "Mayor: " << mayor << endl;
    cout << "Posicion mayor: " << posMy << endl;
    cout << "Menor: " << menor << endl;
    cout << "Posicion menor: " << posMn << endl;
    
 system("pause");
 return 0;
}