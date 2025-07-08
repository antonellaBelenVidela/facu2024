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

// Definición de la estructura para almacenar los resultados
struct Mi_Estructura {
    int mayor;
    int menor;
    double media;
};
// void calcularMayorMenorMedia(int array[], int tamano, int& mayor, int& menor, double& media
// Función para calcular el mayor, menor y media de un array
Mi_Estructura calcularMayorMenorMedia(int array[], int tamano) {
    Mi_Estructura resultados;
    resultados.mayor = array[0]; // Suponemos que el primer elemento es el mayor inicialmente
    resultados.menor = array[0]; // Suponemos que el primer elemento es el menor inicialmente
    resultados.media = 0; // Inicializamos la media en 0

    // Sumamos todos los elementos del array para calcular la media
    for (int i = 0; i < tamano; ++i) {
        resultados.media += array[i];
        // Buscamos el mayor y el menor
        if (array[i] > resultados.mayor) {
            resultados.mayor = array[i];
        }
        if (array[i] < resultados.menor) {
            resultados.menor = array[i];
        }
    }
    // Calculamos la media dividiendo la suma por el tamaño del array
    resultados.media /= tamano;
    return resultados;
}

int main() {
    const int tamano = 10; // Tamaño del array
    int numeros[tamano]; // Array para almacenar los valores ingresados por el usuario

    // Solicitar al usuario que ingrese los valores para el array
    cout << "Ingrese " << tamano << " valores enteros separados por espacios: ";
    for (int i = 0; i < tamano; ++i) {
        cin >> numeros[i];
    }

    // Llamar a la función para calcular el mayor, menor y la media
    Mi_Estructura ingreso;
    ingreso = calcularMayorMenorMedia(numeros, tamano);

    // Imprimir los resultados
    cout << "El mayor valor es: " << ingreso.mayor << endl;
    cout << "El menor valor es: " << ingreso.menor << endl;
    cout << "La media de los valores es: " << ingreso.media << endl;
    return 0;
}
/*
En En este código, definimos una estructura Resultados que contiene tres miembros: mayor, menor y media. La función calcularMayorMenorMedia ahora devuelve un objeto de esta estructura, que contiene los resultados calculados. Luego, en el main, imprimimos los resultados accediendo a los miembros de este objeto devuelto.
*/
