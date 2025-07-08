#include <iostream>
using namespace std;

// Funciones para calcular el mayor, menor y media de un array
int calcularMayor(int array[], int tamano) {
    int mayor = array[0]; // Suponemos que el primer elemento es el mayor inicialmente
    for (int i = 0; i < tamano; ++i) {
        // Buscamos el mayor
        if (array[i] > mayor) {
            mayor = array[i];
        }
    }
    return mayor;
}
int calcularMenor(int array[], int tamano) {
    int menor = array[0]; // Suponemos que el primer elemento es el menor inicialmente
    for (int i = 0; i < tamano; ++i) {
        // Buscamos el menor
        if (array[i] < menor) {
            menor = array[i];
        }
    }
    return menor;
}
double calcularMedia(int array[], int tamano ) {
    double media = 0; // Inicializamos la media en 0
    // Sumamos todos los elementos del array para calcular la media
    for (int i = 0; i < tamano; ++i) {
        media += array[i];
    }
    // Calculamos la media dividiendo la suma por el tamaño del array
    media /= tamano;
    return media;
}

int main() {
    const int tamano = 10; // Tamaño del array
    int numeros[tamano]; // Array para almacenar los valores ingresados por el usuario
    int mayor, menor;
    double media;

    // Solicitar al usuario que ingrese los valores para el array
    cout << "Ingrese " << tamano << " valores enteros separados por espacios: ";
    for (int i = 0; i < tamano; ++i) {
        cin >> numeros[i];
    }
    // Llamar a las funciónes para calcular el mayor, menor y la media
    mayor=calcularMayor(numeros, tamano);
    menor=calcularMenor(numeros, tamano);
    media=calcularMedia(numeros, tamano);
    // Imprimir los resultados
    cout << "El mayor valor es: " << mayor << endl;
    cout << "El menor valor es: " << menor << endl;
    cout << "La media de los valores es: " << media << endl;

    return 0;
}
