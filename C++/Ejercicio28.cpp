#include <iostream>
using namespace std;


int main () {
    char caracter;
    int contadorA, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0,
        countWords = 1, largeWord = 0, largeWordPrint = 0;

    cout << "Ingrese caracter: " << endl;
    cin >> caracter;

    while (caracter != '.') {

        // cantidad de veces que apareció cada vocal

        switch (caracter)
        {
        case 'a':
        case 'A':
            contadorA++;
            break;
        case 'e':
        case 'E':
            contadorE++;
            break;
        case 'i':
        case 'I':
            contadorI++;
            break;
        case 'o':
        case 'O':
            contadorO++;
            break;
        case 'u':
        case 'U':
            contadorU++;
            break;
        }

        // cantidad de palabras que contiene la oración
        if (caracter == '_') {
            countWords ++;
        }

        // cantidad de letras que posee la palabra más larga.

        if (caracter != '_' ) {
            largeWord ++;
        } else if (caracter == '_'){
            largeWord = 0;
        }
        if (largeWordPrint < largeWord)  {
            largeWordPrint = largeWord;
        }
        cout << "Ingrese caracter: " << endl;
        cin >> caracter;
    }

    cout << "Cantidad a: " << contadorA << endl;
    cout << "Cantidad e: " << contadorE << endl;
    cout << "Cantidad i: " << contadorI << endl;
    cout << "Cantidad o: " << contadorO << endl;
    cout << "Cantidad u: " << contadorU << endl;
    cout << "Cantidad palabras: " << countWords << endl;
    cout << "Cantidad letras palabra mas larga: " << largeWordPrint << endl;

 system("pause");
 return 0;
}