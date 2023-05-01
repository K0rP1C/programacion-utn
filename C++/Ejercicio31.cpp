#include <iostream>
using namespace std;

int main () {
    string domicilio, nombre, domMaxInt;
    char vivienda, sexo, estudios, completo;
    int integrantes, edad, contPrimario = 0, contAnalfabetos = 0,
        integrantesMax = 0, acumuladorEdad = 0, acumEdadTotal,
        contadorInt = 0, contP = 0, contS = 0, contT = 0, contU = 0,
        contadorF = 0;
    string edadPromFamilia, edadPromCiudad, porcM, porcF;

    cout << "Cantidad de integrantes: " << endl;
    cin >> integrantes;

    while (integrantes > 0) {
        
        acumuladorEdad = 0;

        cout << "Domicilio: " << endl;
        cin >> domicilio;

        cout << "Tipo de vivienda: " << endl;
        cin >> vivienda;

        for(int i = 0; i < integrantes; i++) {

            cout << "Nombre y apellido: " << endl;
            cin >> nombre;

            cout << "Edad: " << endl;
            cin >> edad;

            cout << "Sexo: " << endl;
            cin >> sexo;

            cout << "Tipo de vivienda: " << endl;
            cin >> vivienda;

            cout << "Nivel de estudios alcanzados ( N, P, S, T, U): " << endl;
            cin >> estudios;

            cout << "completo o incompleto¿? ('C','I'): " << endl;
            cin >> completo;

            //los datos de los encuestados que hayan completado los estudios primarios

            if(estudios == 'U' || estudios == 'S' || estudios == 'T' ||  (estudios == 'P' && completo == 'C' )){
                contPrimario ++;
            }

            // el porcentaje de analfabetismo en la ciudad (se considera analfabetos a los mayores de 10 años que no poseanestudios)

            if (edad > 10 && estudios == 'N') {
                contAnalfabetos ++;
            }

            // edad promedio de cada familia y de la ciudad
            acumEdadTotal += edad;
            acumuladorEdad += edad;
            contadorInt ++;
            edadPromFamilia = acumuladorEdad / integrantes;
            edadPromCiudad = acumEdadTotal / contadorInt;

            //cantidad de encuestados en cada tipo de nivel de estudios alcanzados incompletos.

            if (completo == 'I'){
                switch (estudios){
                    case 'P':
                        contP ++;
                    break;
                    case 'S': 
                        contS ++;
                    break;
                    case 'T':
                        contT ++;
                    break;
                    default:
                        contU ++;
                    break;
                }
            }

            // porcentaje de encuestados de sexo femenino y masculino.

            if (sexo == 'F') {
                contadorF ++;
            }

        }
            // el domicilio de la familia con mayor cantidad de integrantes que viven en departamento

        if(vivienda = 'D' && integrantes > integrantesMax) {   
            integrantesMax = integrantes;
            domMaxInt = domicilio;
        }            
        cout << "Edad promedio familiar: " << edadPromFamilia << endl;

        cout << "Cantidad de integrantes: " << endl;
        cin >> integrantes;
    }

    cout << "Cantidad de personas con estudios primarios completos: " << contPrimario << endl;
    cout << "Porcentaje de analfabetos: " << (contAnalfabetos*100) / contadorInt << endl;
    cout << "Direccion departamento de familia mas numerosa: " << domMaxInt <<endl;
    cout << "Edad promedio de la ciudad: " << acumEdadTotal << endl;
    cout << "Primarios Incompletos: " << contP << ". Secundario incompleto:  " << contS << ". Terciario incompleto: " << contT << ". Universitario incompleto: " << contU << endl;
    cout << "Porcentaje femenino encuestado: " << (contadorF*100)/contadorInt << ". Porcentaje masculino encuestado: " << ((contadorInt-contadorF)*100)/contadorInt << endl;

    system("pause");
    return 0;
}