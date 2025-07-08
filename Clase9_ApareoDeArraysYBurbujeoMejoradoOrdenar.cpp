//Implementación del Merge en C++

#include <iostream>

using namespace std;
void merge_arrays(int arr1[], int size1, int arr2[], int size2, int merged_arr[] , int merged_size)
{
    int valorAgredaro=0;
    for (int total = 0 ; total < merged_size; total++)
    {
        if (total<size1)
        {
            valorAgredaro= arr1[total];
        }
        else
        {
            valorAgredaro= arr2[total-size1];
        }
        merged_arr[total] =  valorAgredaro ;
    }
}
//-------------------------------------------------------------
//-------------------------------------------------------------
//-------------------------------------------------------------
void orden_burbuja(int merged_arr[], int merged_size)
{
int temp=0;
int contador=0;
/*
    for (int gral=0; gral < merged_size-1;gral++  )
    {
        for (int index=1; index <= merged_size-1;index++  )// en index el hasta anteultimo
        {
            if (merged_arr[index-1]<merged_arr[index])
            {
                temp = merged_arr[index];
                merged_arr[index]=merged_arr[index-1];
                merged_arr[index-1]= temp;
            }
            // comparo el anteultimo contra el ultimo
            contador++;
        }
    }
    for (int total = 0 ; total < merged_size; total++)
    {
        cout << "en el index " << total<< " esta el dato " << merged_arr[total] << endl;
    }
    cout << "el proceso itero "<<contador <<" veces \n";
}
*/
contador=0;
    for (int gral=0; gral < merged_size-1;gral++  )
    {
        for (int index=0; index <= merged_size-1-1;index++  )// en index el hasta anteultimo
        {
            if (merged_arr[index]<merged_arr[index+1])
            {
                temp = merged_arr[index];
                merged_arr[index]=merged_arr[index+1];
                merged_arr[index+1]= temp;
            }
            // comparo el anteultimo contra el ultimo
            contador++;
        }
    }
    for (int total = 0 ; total < merged_size; total++)
    {
        cout << "en el index " << total<< " esta el dato " << merged_arr[total] << endl;
    }
    cout << "en orden_burbuja el proceso itero "<<contador <<" veces \n";
}

//-------------------------------------------------------------
void orden_burbuja_mejora_1(int merged_arr[], int merged_size)
{
int temp=0;
int contador=0;
int gral=0;
bool cambio;// tipo de variable que solo admite true o false
    do
    {
        cambio = false;
        for (int index=0; index <= merged_size-1;index++  )// en index el hasta anteultimo
        {
            if (merged_arr[index]>merged_arr[index+1])
            {
                temp = merged_arr[index];
                merged_arr[index]=merged_arr[index+1];
                merged_arr[index+1]= temp;
                cambio = true;
            }
            // comparo el anteultimo contra el ultimo
            contador++;
        }
        gral++;
    } while (cambio == true);
    for (int total = 0 ; total < merged_size; total++)
    {
        cout << "en el index " << total<< " esta el dato " << merged_arr[total] << endl;
    }
    cout << "en orden_burbuja_mejora_1 el proceso itero "<<contador <<" veces \n";
}




int main() {
    int tamanio= 50;
    // Definir arreglos de ejemplo
    int arr1[tamanio] = {};
    int arr2[tamanio*2] = {};

    srand(time(0));
    // Llenar el array con números aleatorios
    for (int i = 0; i < 50; ++i) {
        arr1[i] = rand() % 1000; // Números aleatorios entre 0 y 999
    }
    for (int i = 0; i < 50*2; ++i) {
        arr2[i] = rand() % 1000; // Números aleatorios entre 0 y 999
    }
    cout << "el array arr1 se cargo con 50 elementos random"<<endl;
    cout << "el array arr2 se cargo con 50 elementos random"<<endl;

    // Calcular el tamaño de cada arreglo
    //  int size1 = sizeof(arr1) / sizeof(arr1[0]);//tamaño total en RAM
    //  int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size1=tamanio;
    int size2=tamanio*2;
    // Calcular el tamaño total del arreglo fusionado
    int merged_size = size1 + size2;

    // Definir un arreglo para almacenar el resultado
    int merged_arr[merged_size];

    // Llamar a la función merge_arrays para fusionar los arreglos
    merge_arrays(arr1, size1, arr2, size2, merged_arr, merged_size);
    orden_burbuja(merged_arr, merged_size);
    orden_burbuja_mejora_1(merged_arr, merged_size);
    // Imprimir el arreglo fusionado
    //~ cout << "Arreglo fusionado: \n";
    //~ for (int total = 0 ; total < merged_size; total++)
    //~ {
        //~ cout << "en el index " << total<< " esta el dato " << merged_arr[total] << endl;
    //~ }
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
