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
void calcularMayorMenorMedia(int array[], int tamano) {
    int mayor;
    int menor;
    double media;
    mayor = array[0]; // Suponemos que el primer elemento es el mayor inicialmente
    menor = array[0]; // Suponemos que el primer elemento es el menor inicialmente
    media = 0; // Inicializamos la media en 0

    // Sumamos todos los elementos del array para calcular la media
    for (int i = 0; i < tamano; ++i) {
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
    media /= tamano;
    cout << "El mayor valor es: " << mayor << endl;
    cout << "El menor valor es: " << menor << endl;
    cout << "La media de los valores es: " << media << endl;
    return ;

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

    calcularMayorMenorMedia(numeros, tamano);
    // Imprimir los resultados
    return 0;
}