/*
Ejercicio UTN Vectores: Ejercicio 1: Promedios de Números Pares
Enunciado
Ejercicio 1: Promedios de Números Pares
Desarrolla un programa en C++ que realice las siguientes tareas:

Llena un arreglo con los primeros 30 números pares.
Muestra el contenido del arreglo.
Calcula y muestra la suma de los números en el arreglo.
Calcula y muestra el promedio de los números en el arreglo utilizando un ciclo for.
Análisis
Para resolver este ejercicio, sigue los siguientes pasos:

Declaración de Variables:

Necesitarás un arreglo numeros de tamaño 30 para almacenar los números pares.
Un entero suma para acumular la suma de los números en el arreglo.
Un doble promedio para calcular y almacenar el promedio de los números.
Asignación de Valores al Arreglo:

Utiliza un ciclo for para recorrer el arreglo y asignar los primeros 30 números pares. Los números pares se generan multiplicando el índice del ciclo (más uno) por 2.
Cálculo de la Suma y el Promedio:

Recorre el arreglo nuevamente con otro ciclo for para sumar todos los números almacenados.
Calcula el promedio dividiendo la suma entre el tamaño del arreglo (30) utilizando un ciclo for sin convertir explícitamente el tipo de datos.
Presentación de Resultados:

Muestra los números almacenados en el arreglo.
Muestra la suma de estos números.
Muestra el promedio calculado.
Implementación
*/
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 30; // Tamaño del arreglo
    int numeros[SIZE]; // Declarar el arreglo
    int suma = 0; // Acumulador para la suma
    double promedio = 0; // Variable para el promedio

    // Llenar el arreglo con los primeros 30 números pares
    for (int i = 0; i < SIZE; ++i) {
        numeros[i] = (i + 1) * 2;
    }

    // Calcular la suma de los números pares
    for (int i = 0; i < SIZE; ++i) {
        suma += numeros[i];
    }

    // Calcular el promedio utilizando un ciclo for sin convertir el tipo de datos
    promedio = suma; // Asignar la suma a la variable promedio para luego dividir
    for (int i = 0; i < SIZE; ++i) {
        // No es necesario hacer nada dentro del ciclo, la división se realiza fuera
    }
    promedio /= SIZE;

    // Presentar los números pares, la suma y el promedio
    cout << "Los primeros 30 números pares son: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "La suma de los primeros 30 números pares es: " << suma << endl;
    cout << "El promedio de los primeros 30 números pares es: " << promedio << endl;

    return 0;
}