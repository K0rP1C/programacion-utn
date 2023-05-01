#include <iostream>
using namespace std;

int main () {
    int tipo, acumulador = 0;
    float  valor, totalL = 0, totalM = 0, totalG = 0;
    char gravedad;
    string motivo;

    for(int i=1; i<=20; i++) 
    {
        cout << "Ingrese tipo de infraccion (1,2,3,4):" << endl;
        cin >> tipo;    
        cout << "Ingrese motivo de la infraccion:" << endl;
        cin >> motivo;
        cout << "Ingrese valor de la multa:" << endl;
        cin >> valor;
        cout << "Ingrese gravedad de la infraccion (L, M, G):" << endl;
        cin >> gravedad;

        switch (gravedad)
        {
            case 'L': 
                totalL += valor;
            break;
            case 'M': 
                totalM+= valor;
            break;
            case 'G': 
                totalG+= valor;
            break; 
        }
        
        
        if((tipo == 3 || tipo == 4 ) && gravedad == 'G') 
        {
            acumulador ++;
        }
    }

    if(acumulador > 3)
    {
        cout <<  "Clausurar fábrica" << endl;
    } 
    else 
    {
        cout << "El valor a pagar es de L: " << totalL << endl;
        cout << "El valor a pagar es de M: " << totalM << endl;
        cout << "El valor a pagar es de H: " << totalG << endl;
    }

 system ("pause");
 return 0;
}