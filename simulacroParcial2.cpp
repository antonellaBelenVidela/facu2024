#include <iostream>
using namespace std;
/*
Una agencia de autos nos contrata para crear una estrategia para el control de sus
ventas. Se cuenta con un vector de modelos de autos que esta misma empresa
comercializa, y un vector con las ventas del último mes. 
Actualmente se cuenta con 5 autos, 
y se utilizaran de prueba las ventas del mes pasado que fueron 30. 
(asumir que ambos vectores ya vienen cargados).

La agencia, de esto mismo almacena los siguientes datos:
Modelo (ordenado por idModelo)
o idModelo (entero) (orden secuencial (1,2,3,4,5))
o marca (Cadena caracteres)
o nombreModelo (cadena caracteres)

Venta (ordenado por fecha)
o idModelo (entero)
o fecha (entero (ddmm))
o nombreCliente (cadena caracteres)

Se requiere:
desarrollar un programa que permita emitir el siguiente listado ordenado por
fecha, con el siguiente formato:
Fecha: ddmm
nombre cliente marca nombre modelo
XXXXXXXXX XXXXXXXXX XXXXXXXXX
XXXXXXXXX XXXXXXXXX XXXXXXXXX
XXXXXXXXX XXXXXXXXX XXXXXXXXX
Cantidad de ventas de la fecha: 99
Fecha: ddmm
..........
Cantidad de ventas del mes: 99
o Indicar la fecha que más automóviles se vendieron.
o Indicar la cantidad de autos se vendieron de cada modelo.
*/
// -----------------------------------------------------------------------------------------------

// Modelo (ordenado por idModelo)
struct modelo
{
    int idModelo; // (entero) (orden secuencial (1,2,3,4,5))       // 1
    string marca; // (Cadena caracteres)                              //volswaguen
    string nombreModelo; // (cadena caracteres)                       // up
};

 // Venta (ordenado por fecha)
struct venta
{
    int idModelo; // (entero)
    int fecha; // (entero (ddmm))
    string nombreCliente; //(cadena caracteres)
};


int main () 
{

    //vector de modelos de autos que esta empresa comercializa (5)
    modelo vecModelos[5] = { {1, "Volswaguen", "Up"},{2, "Ford", "Fiesta"}, {3, "Fiat", "Uno"}, {4, "Ford", "4x4"}, {5, "Peugeot", "208"}};
    // vector con las ventas del último mes (30)
    venta vecVentas[10] = 
    {
        {1, 1105, "Anto"},
        {5, 1905, "Jose"},
        {3, 1305, "Facu"},
        {1, 2105, "Luis"},
        {2, 1505, "Pili"},
        {5, 2105, "Ancina"},
        {1, 1005, "Nico"}, 
        {1, 2105, "Fiore"},
        {4, 3005, "Ale"},
        {3, 1505, "Mora"}, 
    };
/*

int cantVentas = 10;
int cantAutos = 5;

// ordenar vector BURBUJEO MEJORADO
/*
    venta vecVentas[10] = 
        {{1, 1005, "Nico"}, 
        {1, 1105, "Anto"},
        {3, 1305, "Facu"},
        {3, 1505, "Mora"},
        {2, 1505, "Pili"},
        {5, 1905, "Jose"},
        {5, 2105, "Ancina"},
        {1, 2105, "Fiore"},
        {1, 2105, "Luis"},
        {4, 3005, "Ale"} };
*/

int i = 0;
int j;
venta aux;
bool ordenado;

while (i < cantVentas)
{
    while ((i<cantVentas)&&(!ordenado))
{
    ordenado = true; 
    for (j = 0; j < cantVentas; j++)
    {
        if (vecVentas[j].fecha > vecVentas[j+1].fecha)
        {
            aux = vecVentas[j];
            vecVentas[j] = vecVentas[j+1];
            vecVentas[j+1] = aux;

            ordenado = false;
        }  
    }
    i ++;
}

}
/*
desarrollar un programa que permita emitir el siguiente listado ordenado por fecha, con el siguiente formato:    ------> CORTE DE CONTROL FECHA  IMPRIMO .NOMBRE .MARCA .MODELO

Fecha: 1505
nombre cliente   marca     nombre modelo    COMPARA POR ID MODELO? 
PILI             FORD      FIESTA
MORA             FIAT      UNO

Cantidad de ventas de la fecha: 2

Fecha: 19
..........
Cantidad de ventas del mes: 99
*/


int cant = 0;
venta key;

while (cant < cantVentas)
{
    key = vecVentas[cant].fecha;

    cout << "FECHA: " << key << endl;
    cout << " NOMBRE CLIENTE      MARCA        NOMBRE MODELO" << endl;

    while ((cant< cantVentas)&&(key == vecVentas[i].fecha)) // por fecha 
    {
        int contadorVentasPorFecha = 0;
        int contadorVentasPorModelo = 0;

        int cantVentasMayor = 0;
        int fechaVentasMayor = 0;

        cout << vecVentas[cant].nombreCliente << "      " << vecModelos[cant].marca << "      " << vecModelos[cant].nombreModelo
    }
}

/*
o Indicar la fecha que más automóviles se vendieron.
o Indicar la cantidad de autos que se vendieron de cada modelo.
*/

system("pause");
 return 0;
}