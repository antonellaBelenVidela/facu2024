#include <iostream>
using namespace std;

// Funciones para calcular el mayor, menor y media de un array
double calcularMayorMenorMedia(int array[], int tamano, int operacion ) {
    double mayor = array[0]; // Suponemos que el primer elemento es el mayor inicialmente
    double menor = array[0]; // Suponemos que el primer elemento es el menor inicialmente
    double media=0, salida=0;
    for (int i = 0; i < tamano; ++i) {
        media += array[i];
        if (array[i] > mayor) {
            mayor = array[i];
        }
        if (array[i] < menor) {
            menor = array[i];
        }
    }
    /*
    if (operacion==0)
        {return mayor;}
    else if (operacion==1)
        {return menor;}
        else
        {return media /= tamano;}
    */
    if (operacion==0)
        {salida= mayor;}
    else if (operacion==1)
        {salida=  menor;}
        else
        {salida=  media /= tamano;}

    return salida;

}


int main() {
    const int tamano = 10; // Tamaño del array
    int numeros[tamano]; // Array para almacenar los valores ingresados por el usuario
    int i;
    int resultados[3];
    // Solicitar al usuario que ingrese los valores para el array
    cout << "Ingrese " << tamano << " valores enteros separados por espacios: ";
    for (int i = 0; i < tamano; ++i) {
        cin >> numeros[i];
    }
    // Llamar a las funciónes para calcular el mayor, menor y la media
    for (i =0;i<3 ;i++) {
        resultados[i]=calcularMayorMenorMedia(numeros, tamano,i);
    }

    // Imprimir los resultados
    cout << "El mayor valor es: " << resultados[0] << endl;
    cout << "El menor valor es: " << resultados[1] << endl;
    cout << "La media de los valores es: " << resultados[2] << endl;

    return 0;
}