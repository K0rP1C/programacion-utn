#include <iostream>
using namespace std;

int main () {
int valLote, acumulador = 0, contador = 0, acumSubl = 1, 
    valMax , sublValMax , posSubl = 1, valMin;
float promedio;

cout << "Ingrese un valor: " << endl;
cin >> valLote;

valMin = valLote;
valMax = valLote;



if(valLote < 0) {
   acumSubl = 0;
   valMax = 0;
   posSubl = 0;
   valMax = 0;
}

while (valLote >= 0) {

   if (valLote < valMin && valLote > 0) {
      valMin = valLote;
   }

   if (valLote !=0) {
      contador ++;
      acumulador += valLote;
   } else {
      cout << "El valor minimo del sublote es: "  << valMin << endl;
      promedio = acumulador / contador;
      cout << "El promedio del sublote es: "  << promedio << endl;
      contador = 0;
      acumulador = 0;
      acumSubl ++;
   }

   if (valLote > valMax) {
      valMax = valLote;
      sublValMax = acumSubl;
      posSubl = contador;
   }

   cout << "Ingrese un valor" << endl;
   cin >> valLote;
 
}


cout << "La cantidad de sublotes existentes dentro del lote es: " << acumSubl << endl;
cout << "El valor maximo es " << valMax << ", y esta en el sublote " << sublValMax <<
      " en la posicion "<< posSubl << endl;

 system("pause");
 return 0;
}


