//Implementación del Merge en C++

#include <iostream>

using namespace std;
void merge_arrays(int arr1[], int size1, int arr2[], int size2, int merged_arr[]) {
    int i = 0, j = 0, k = 0;

    // Combinar los elementos de arr1 y arr2 en merged_arr en orden ascendente
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged_arr[k] = arr1[i];
            i++;
        } else {
            merged_arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    // Añadir los elementos restantes de arr1 a merged_arr
    while (i < size1) {
        merged_arr[k] = arr1[i];
        i++;
        k++;
    }
    // Añadir los elementos restantes de arr2 a merged_arr
    while (j < size2) {
        merged_arr[k] = arr2[j];
        j++;
        k++;
    }
}



int main() {
    // Definir arreglos de ejemplo
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    // Calcular el tamaño de cada arreglo
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Calcular el tamaño total del arreglo fusionado
    int merged_size = size1 + size2;

    // Definir un arreglo para almacenar el resultado
    int merged_arr[merged_size];

    // Llamar a la función merge_arrays para fusionar los arreglos
    merge_arrays(arr1, size1, arr2, size2, merged_arr);


    // Imprimir el arreglo fusionado
    cout << "Arreglo fusionado: ";
    for (int i = 0; i < merged_size; i++) {
        cout << merged_arr[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
Explicación del Código
    Función merge_arrays:

        Toma dos arreglos arr1 y arr2, así como sus tamaños size1 y size2, respectivamente, y un arreglo merged_arr donde se almacenará el resultado de la fusión.
        Utiliza tres índices i, j y k para recorrer arr1, arr2 y merged_arr respectivamente.
        Compara los elementos actuales de arr1 y arr2, y añade el menor de los dos a merged_arr, avanzando los índices correspondientes.
        Añade los elementos restantes de arr1 y arr2 a merged_arr si aún quedan elementos sin procesar.
        Función main:

        Define dos arreglos de ejemplo arr1 y arr2.
        Calcula sus tamaños size1 y size2.
        Calcula el tamaño total del arreglo fusionado merged_size.
        Define un arreglo merged_arr para almacenar el resultado de la fusión.
        Llama a la función merge_arrays para fusionar los arreglos.
        Imprime el arreglo fusionado.
*/
