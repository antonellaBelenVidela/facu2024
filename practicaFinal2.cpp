/*
2) Un estacionamiento para el que trabajamos está comenzando el desarrollo de un 
nuevo algoritmo. Este estacionamiento posee 5 pisos, y en cada piso están 
estacionados 10 autos. 
De cada auto se conoce los siguientes datos: - 
marca (string) - - - 
patente (string) 
caballosFuerza (int) 
cantKilometros (double) 

Como el modelo ya estaba iniciado, los datos ya vienen cargados, y cada piso está 
ordenado por patente. 

Se pide: - - - 
generar un array, donde estén los autos con MÁS caballos de fuerza por cada 
piso.

generar un listado ordenado por patente, de los autos de cada piso que 
superan los 125 caballos de fuerza (mostrar todos los datos del auto). 

Indicar la marca del auto que más kilometraje tiene (entre todos los pisos).

PISO    AUTOS                                             VecMasCaballosPorPiso -  vecOrdPorPatente string marcaMasKmTotales
1       1    2    3    4    5   6   7    8    9   10
    RENAULT
    AA123
    2
    10000
2       1    2    3    4    5   6   7    8    9   10
3       1    2    3    4    5   6   7    8    9   10

*/

#include <iostream>
using namespace std;

struct Auto
{
    string marca;
    string patente;
    int caballosFuerza;
    double cantKilometros; 
};

// Indicar la marca del auto que más kilometraje tiene (entre todos los pisos).
string MarcaAutoMasKilometrajeTotal (Auto matriz[][10], int filas)
{
    string marcaMayor = " ";
    int kmMayor = 0;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (matriz[i][j].cantKilometros > kmMayor)
            {
                kmMayor = matriz[i][j].cantKilometros;
                marcaMayor = matriz[i][j].marca;
            }
            
        }
        
    }
    return marcaMayor;
}

int main () 
{
    // prueba ejercicio 2:
    // esta probado con 3 pisos y 10 autos por piso para no tener que ingresar tantos datos.

    int filas = 3; // pisos
    Auto matrizEstacionamiento[3][10]=
    {
        {
            {"Volkswagen", "AA000ZZ", 105, 117000},
            {"Nissan", "AA100AA", 90, 210000},
            {"Fiat", "AE100TT", 150, 20000},
            {"Volkswagen", "AF800ZZ", 180, 75000},
            {"Ferrari", "RQB123", 500, 100000},
            {"Volkswagen", "SS000ZZ", 105, 117000},
            {"Nissan", "TT100AA", 90, 210000},
            {"Fiat", "UU100TT", 170, 20000},
            {"Volkswagen", "VV800ZZ", 180, 75000},
            {"Ferrari", "WWB123", 600, 100000}
        },
        {
            {"Toyota", "AAA111", 130, 50000},
            {"Ford", "BBB222", 125, 125000},
            {"RAM", "EEE291", 110, 1000},
            {"Toyota", "FFFF222", 900, 500},
            {"Volkswagen", "GGG111", 210, 1500},
            {"Volkswagen", "HHH00ZZ", 105, 117000},
            {"Nissan", "III00AA", 90, 210000},
            {"Fiat", "LL100TT", 150, 12300},
            {"Volkswagen", "MMM800ZZ", 190, 75000},
            {"Ferrari", "WWB123", 580, 170000}
        },
        {
            {"Toyota", "BBB111", 10, 90000},
            {"Ford", "CCC222", 12, 12800},
            {"RAM", "DDD291", 11, 1000},
            {"Toyota", "LLL222", 90, 9500},
            {"Volkswagen", "MMM111", 210, 8150},
            {"Volkswagen", "SSS00ZZ", 105, 117000},
            {"Nissan", "TTT00AA", 90, 210000},
            {"Fiat", "UUU00TT", 150, 12300},
            {"Volkswagen", "VVV800ZZ", 880, 800},
            {"Ferrari", "WWB123", 570, 150000}
        }
    };

    //generar un array, donde estén los autos con MÁS caballos de fuerza por cada piso.

    Auto VecCaballosDeFuerzaPorPiso[3] {"","",0,0};

    for (int i = 0; i < 3; i++)
    {
        // voy comparando la matriz con el mismo vector inicializado en lo mas bajo posible
        for (int j = 0; j < 10; j++)
        {
            if (matrizEstacionamiento[i][j].caballosFuerza > VecCaballosDeFuerzaPorPiso[i].caballosFuerza)
            {
                VecCaballosDeFuerzaPorPiso[i] = matrizEstacionamiento[i][j];
            }
                
        }
            
    }
    
    cout << "---------------------------------------------------------------------------" << endl;
    
    cout << "Vector de Autos con Mayor cantidad de Caballos: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << VecCaballosDeFuerzaPorPiso[i].marca << " " << VecCaballosDeFuerzaPorPiso[i].patente << " " << VecCaballosDeFuerzaPorPiso[i].caballosFuerza << " " << VecCaballosDeFuerzaPorPiso[i].cantKilometros << endl;
    }

    // generar un listado ordenado por patente, de los autos de cada piso que  superan los 125 caballos de fuerza (mostrar todos los datos del auto).

    cout << "---------------------------------------------------------------------------" << endl;

    cout << endl << endl << "Autos de cada piso que  superan los 125 caballos de fuerza: " << endl << endl;

    for (int i = 0; i < 3; i++)
    {   
        cout << "PISO " << i + 1 << endl;

        for (int j = 0; j < 10; j++)
        {
            if (matrizEstacionamiento[i][j].caballosFuerza > 125)
            {
                cout << "{" << matrizEstacionamiento[i][j].marca << " , " <<  matrizEstacionamiento[i][j].patente << " , " <<  matrizEstacionamiento[i][j].caballosFuerza << " , " <<  matrizEstacionamiento[i][j].cantKilometros << " } " << endl;
            }
        }
        cout << endl;
    }
    
    cout << "---------------------------------------------------------------------------" << endl;

    // Indicar la marca del auto que más kilometraje tiene (entre todos los pisos). funcion
    string marcaMayorKm = MarcaAutoMasKilometrajeTotal(matrizEstacionamiento, 3);

    cout << "La marca de Auto con MAYOR KILOMETRAJE entre todas las filas fue: " << marcaMayorKm << endl;

 system("pause");
 return 0;
}