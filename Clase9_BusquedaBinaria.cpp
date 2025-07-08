/*
 * Búsqueda Binaria en C++
La búsqueda binaria es un algoritmo eficiente para encontrar un elemento en un array ordenado. Funciona dividiendo repetidamente el intervalo de búsqueda a la mitad hasta que el elemento buscado se encuentra o se determina que no está presente en el array.

Principios de la Búsqueda Binaria
Requisitos Previos: El array debe estar ordenado.
Dividir y Conquistar: La búsqueda binaria compara el elemento buscado con el elemento del medio del array.
Si son iguales, se ha encontrado el elemento.
Si el elemento buscado es menor que el elemento del medio, se repite la búsqueda en la mitad inferior.
Si el elemento buscado es mayor que el elemento del medio, se repite la búsqueda en la mitad superior.
Pasos del Algoritmo
Inicialización:

Definir el índice inicial (low) y el índice final (high).
Iteración:

    Calcular el índice del medio: mid = (low + high) / 2.
    Comparar el elemento en mid con el elemento buscado:
    Si son iguales, se ha encontrado el elemento.
    Si el elemento buscado es menor, ajustar high a mid - 1.
    Si el elemento buscado es mayor, ajustar low a mid + 1.
    Terminar:

La búsqueda termina cuando low supera a high, indicando que el elemento no está en el array.

Implementación del Algoritmo de Búsqueda Binaria
*/
#include <iostream>

using namespace std;

int busqueda_binaria(int arr[], int n, int objetivo) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == objetivo) {
            return mid; // Elemento encontrado
        }
        else if (arr[mid] < objetivo) {
            low = mid + 1; // Buscar en la mitad superior
        }
        else {
            high = mid - 1; // Buscar en la mitad inferior
        }
    }

    return -1; // Elemento no encontrado
}

int main() {
    const int n = 10;
    int arr[n] = {2, 3, 4, 10, 18, 20, 23, 35, 42, 47}; // Array ordenado

    int objetivo = 23; // Elemento a buscar
    int resultado = busqueda_binaria(arr, n, objetivo);

    if (resultado != -1) {
        cout << "Elemento encontrado en el índice: " << resultado << endl;
    } else {
        cout << "Elemento no encontrado" << endl;
    }

    return 0;
}
/*
Explicación del Código
Definición de la Función busqueda_binaria:

Parámetros:
arr[]: Array en el que se busca el elemento.
n: Número de elementos en el array.
objetivo: Elemento que se desea encontrar.
Inicialización de Variables:
low: Índice inicial (0).
high: Índice final (n - 1).
Bucle while:

Condición: Se ejecuta mientras low sea menor o igual a high.
Cálculo del Índice del Medio: mid = (low + high) / 2.
Comparación:
Si arr[mid] es igual al objetivo, se retorna el índice mid.
Si arr[mid] es menor que el objetivo, se ajusta low a mid + 1.
Si arr[mid] es mayor que el objetivo, se ajusta high a mid - 1.
Retorno del Resultado:

Si se encuentra el elemento, se retorna su índice.
Si no se encuentra, se retorna -1.
Función main:

Define un array ordenado arr y un elemento objetivo a buscar.
Llama a busqueda_binaria y almacena el resultado.
Imprime si el elemento fue encontrado o no, y su índice si fue encontrado.
Visualización del Proceso
markdown
Copiar código
Array: [2, 3, 4, 10, 18, 20, 23, 35, 42, 47]
Objetivo: 23

Pasos:
1. Inicial: low = 0, high = 9
2. Iteración 1: mid = (0 + 9) / 2 = 4
   - arr[4] = 18 (18 < 23), ajustar low a 5
3. Iteración 2: mid = (5 + 9) / 2 = 7
   - arr[7] = 35 (35 > 23), ajustar high a 6
4. Iteración 3: mid = (5 + 6) / 2 = 5
   - arr[5] = 20 (20 < 23), ajustar low a 6
5. Iteración 4: mid = (6 + 6) / 2 = 6
   - arr[6] = 23 (23 == 23), elemento encontrado en índice 6
Ventajas de la Búsqueda Binaria
Eficiencia: La búsqueda binaria tiene una complejidad de tiempo de O(log n), lo que la hace mucho más eficiente que la búsqueda lineal (O(n)) para grandes conjuntos de datos.
Requisitos: Solo funciona en arrays que ya están ordenados, lo cual puede requerir una ordenación previa.
Este ejemplo demuestra cómo implementar la búsqueda binaria en C++ sin usar librerías adicionales, destacando su eficiencia y simplicidad en la búsqueda de elementos en un array ordenado.

*/
