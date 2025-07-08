/*
Ejercicio UTN Vectores: Calcular el mayor, menor y la media de un array

Pide al usuario que ingrese 10 valores enteros para llenar un array.
Implementa una función que tome este array como entrada y calcule el mayor, el menor y la media de los valores.
Devuelve estos tres valores desde la función.
En el main, llama a esta función pasando el array ingresado por el usuario.
Imprime los valores obtenidos: el mayor, el menor y la media.
*/
#include <iostream>
#include <vector>// <--------------no usar en programacion I
using namespace std;
// Función para calcular el mayor, menor y media de un vector de enteros
vector<double> calcularMayorMenorMedia(int array[], int tamano) {
    double mayor = array[0];
    double menor = array[0];
    double suma = 0;
    // Calculamos la suma, el mayor y el menor
    for (int i = 0; i < tamano; ++i) {
        suma += array[i];
        if (array[i] > mayor) {
            mayor = array[i];
        }
        if (array[i] < menor) {
            menor = array[i];
        }
    }
    // Calculamos la media
    double media = suma / tamano;
    // Devolvemos el vector con los resultados
    return {mayor, menor, media};
}

int main() {
    int tamano = 10; // Tamaño del vector
    int numeros[tamano]; // Vector para almacenar los valores ingresados por el usuario
    // Solicitar al usuario que ingrese los valores para el vector
    cout << "Ingrese " << tamano << " valores enteros separados por espacios: ";
    for (int i = 0; i < tamano; ++i) {
        cin >> numeros[i];
    }
    // Llamar a la función para calcular el mayor, menor y la media
    vector<double> resultados = calcularMayorMenorMedia(numeros,tamano);
    // Imprimir los resultados
    cout << "El mayor valor es: " << resultados[0] << endl;
    cout << "El menor valor es: " << resultados[1] << endl;
    cout << "La media de los valores es: " << resultados[2] << endl;
    return 0;
}