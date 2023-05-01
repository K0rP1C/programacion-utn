#include <iostream>
using namespace std;

int main () {

    int n, m, producto, pase;
    cout << "inserte 2 numeros" << endl;
    cin >> n >> m;

    producto = 0;

    if (n>m) {
        pase = m;
        m = n;
        n = pase;
        for(int i=1;i<=m; i++)
        {
        producto += n; 
        }
            }
    else {
        for(int i=1;i<=m; i++) {
            producto += n;
        } 
        }
        
    cout << producto << endl;

 system("pause");
 return 0;
}