/*
Ejercicio UTN Vectores: Calcular el mayor, menor y la media de un array

Pide al usuario que ingrese 10 valores enteros para llenar un array.
Implementa una función que tome este array como entrada y calcule el mayor, el menor y la media de los valores.
Devuelve estos tres valores desde la función.
En el main, llama a esta función pasando el array ingresado por el usuario.
Imprime los valores obtenidos: el mayor, el menor y la media.
*/


#include <iostream>
using namespace std;

// Función para calcular el mayor, menor y media de un array
void calcularMayorMenorMedia(int array[], int tamano, int& mayor, int& menor, double& media) {
    mayor = array[0]; // Suponemos que el primer elemento es el mayor inicialmente
    menor = array[0]; // Suponemos que el primer elemento es el menor inicialmente
    media = 0; // Inicializamos la media en 0

    // Sumamos todos los elementos del array para calcular la media
    for (int i = 0; i < tamano; ++i) {// podria iniciar i = 1 ya que el index 0 esta dado
        media += array[i];

        // Buscamos el mayor y el menor
        if (array[i] > mayor) {
            mayor = array[i];
        }
        if (array[i] < menor) {
            menor = array[i];
        }
    }
    // Calculamos la media dividiendo la suma por el tamaño del array
    media /= tamano; //     media = media  / tamano;

    /*
    x++     //     x = x  + 1;
    x--     //     x = x  - 1;
    ---------------------------------operadores de asignacion
    x += y; //     x = x  + y;
    x -= y; //     x = x  - y;
    x /= y; //     x = x  / y;
    x *= y; //     x = x  * y;
    */

    return ;
}

int main() {
    const int tamano = 10; // Tamaño del array
    int numeros[tamano]; // Array para almacenar los valores ingresados por el usuario
    int mayor , menor;
    double media;

    // Solicitar al usuario que ingrese los valores para el array
    cout << "Ingrese " << tamano << " valores enteros separados por espacios: ";
    for (int i = 0; i < tamano; ++i) {
        cin >> numeros[i];
    }

    // Llamar a la función para calcular el mayor, menor y la media
    calcularMayorMenorMedia(numeros, tamano, mayor, menor, media);

    // Imprimir los resultados
    cout << "El mayor valor es: " << mayor << endl;
    cout << "El menor valor es: " << menor << endl;
    cout << "La media de los valores es: " << media << endl;

    return 0;
}
/*
En C++, los parámetros pasados a una función pueden ser tanto por valor como por referencia. Cuando pasas un parámetro por valor, estás pasando una copia de su valor original, mientras que cuando pasas un parámetro por referencia, estás pasando una referencia al valor original.
En este caso, los parámetros mayor, menor y media en la función calcularMayorMenorMedia están siendo pasados por referencia, lo que significa que la función tiene acceso directo a las variables originales definidas en main. Por lo tanto, cualquier modificación realizada a estos parámetros dentro de la función se reflejará en las variables correspondientes en main, incluso sin necesidad de devolver explícitamente estos valores mediante return.
Cuando pasas parámetros por referencia, la función opera directamente sobre las variables originales que se pasaron como argumento, en lugar de hacer una copia de su valor. Esto permite que la función modifique esos valores y esos cambios se mantengan después de que la función haya terminado de ejecutarse.
Así, en el caso del código proporcionado, la función calcularMayorMenorMedia modifica los valores de mayor, menor y media, y estos cambios se reflejan fuera de la función en main, ya que main y la función comparten las mismas variables debido a que se pasaron por referencia.

*/
