/* CHEQUEAR
Ej. MI-24: Se dispone de un lote de valores enteros positivos que finaliza con un número negativo.
El lote está dividido en sublotes por medio de valores cero. Desarrollar un programa que determine e informe:
a) por cada sublote el promedio de valores
b) el total de sublotes procesados
c) el valor máximo del conjunto, indicando en que sublote se encontró y la posición relativa del mismo dentro
del sublote
d) valor mínimo de cada sublote
Nota: el lote puede estar vacío (primer valor negativo), o puede haber uno, varios o todos los sublotes vacíos (ceros
consecutivos)
*/

#include <iostream>
using namespace std;

    int numero = 0;
    int cantidadSublotes = 0;
    int numeroMayor;
    int subloteMayor = 0;

int main () 
{


    cout << "Ingrese un numero;" << endl;
    cin >> numero;

    while (numero >= 0)
    {
        float acumulador = 0;
        float promedio;
        int cantidadNumerosSublote = 0;
        int numeroMenor = 0;

        while (numero != 0)
        {
            acumulador += numero;
            cantidadNumerosSublote++;

            if (numero > numeroMayor)
            {
                numeroMayor = numero;
                subloteMayor = cantidadSublotes;
                posicionMayor = cantidadNumerosSublote;
            }
            
        }
        
    }
    

    system("pause");
    return 0;
}