#include <iostream>
using namespace std;

int main()
{

    int escala = 0;

    cout << "ingrese el numero final de la escala:";
    cin >> escala;

    for (int i = 0; i < escala; i++)
    {

        cout << "el iterador esta en " << i << endl;
    }

    return 0;
}

/*



//-----------------------------------------------------------------------------
#include <iostream>
using namespace std;

//~ En C++, los arrays son una estructura de datos fundamental que permite almacenar múltiples elementos del mismo tipo en una secuencia contigua de memoria. A continuación se presentan algunos ejemplos de cómo declarar, inicializar y manipular arrays en C++.

//~ Ejemplo 1: Declaración y Acceso a Elementos


#include <iostream>

int main() {
    // Declarar un array de 5 enteros
    int arr[5];

    // Inicializar los elementos del array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // Acceder e imprimir los elementos del array
    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}

//-----------------------------------------------------------------------------
//~ Ejemplo 2: Declaración e Inicialización Simultánea
#include <iostream>
int main() {
    // Declarar e inicializar un array de 5 enteros
    int arr[5] = {10, 20, 30, 40, 50};
    // Imprimir los elementos del array
    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }
    return 0;
}
//-----------------------------------------------------------------------------
//~ Ejemplo 3: Usar Arrays Multidimensionales
#include <iostream>
int main() {
    // Declarar un array bidimensional de 3x3
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Acceder e imprimir los elementos del array bidimensional
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Element at index [" << i << "][" << j << "]: " << arr[i][j] << endl;
        }
    }

    return 0;
}
//-----------------------------------------------------------------------------
//~ Ejemplo 4: Arrays y Funciones
#include <iostream>
// Función para imprimir los elementos de un array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }
}

int main() {
    // Declarar e inicializar un array de 5 enteros
    int arr[5] = {10, 20, 30, 40, 50};

    // Llamar a la función para imprimir el array
    printArray(arr, 5);

    return 0;
}
//-----------------------------------------------------------------------------
//~ Ejemplo 5: Uso de array (C++11 y posteriores)
#include <iostream>
#include <array>

int main() {
    // Declarar e inicializar un array de 5 enteros
    array<int, 5> arr = {10, 20, 30, 40, 50};
    // Imprimir los elementos del array
    for(int i = 0; i < arr.size(); i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }
    return 0;
}
//~ Explicaciones:
//~ Declaración y Acceso a Elementos: Este ejemplo muestra cómo declarar un array de tamaño fijo y cómo acceder e imprimir cada elemento del array.
//~ Declaración e Inicialización Simultánea: Aquí se muestra cómo declarar e inicializar un array en una sola línea.
//~ Arrays Multidimensionales: Muestra cómo trabajar con arrays bidimensionales, que pueden ser útiles para representar matrices o tablas.
//~ Arrays y Funciones: Ejemplo de cómo pasar arrays a funciones para realizar operaciones en ellos.
//~ Uso de array: Introduce la clase plantilla array disponible en C++11 y posteriores, que ofrece una alternativa más segura y conveniente a los arrays de C.
    return 0;
}
//-----------------------------------------------------------------------------
//~ Ejemplo 6: Modificar Elementos de un Array


#include <iostream>

int main() {
    // Declarar e inicializar un array de 5 enteros
    int arr[5] = {10, 20, 30, 40, 50};

    // Modificar los elementos del array
    arr[0] = 15;
    arr[4] = 55;

    // Imprimir los elementos modificados del array
    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}
//~ Ejemplo 7: Arrays Dinámicos con new y delete


#include <iostream>

int main() {
    // Declarar el tamaño del array
    int size = 5;

    // Crear un array dinámico
    int* arr = new int[size];

    // Inicializar los elementos del array dinámico
    for(int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
    }

    // Imprimir los elementos del array dinámico
    for(int i = 0; i < size; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    // Liberar la memoria del array dinámico
    delete[] arr;

    return 0;
}
//~ Ejemplo 8: Usar vector para Arrays Dinámicos


#include <iostream>
#include <vector>

int main() {
    // Crear un vector de enteros
    vector<int> arr = {10, 20, 30, 40, 50};

    // Agregar un nuevo elemento al vector
    arr.push_back(60);

    // Imprimir los elementos del vector
    for(int i = 0; i < arr.size(); i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}
//~ Ejemplo 9: Pasar Arrays Dinámicos a Funciones


#include <iostream>

// Función para imprimir los elementos de un array dinámico
void printDynamicArray(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }
}

int main() {
    // Declarar el tamaño del array
    int size = 5;

    // Crear un array dinámico
    int* arr = new int[size];

    // Inicializar los elementos del array dinámico
    for(int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
    }

    // Llamar a la función para imprimir el array
    printDynamicArray(arr, size);

    // Liberar la memoria del array dinámico
    delete[] arr;

    return 0;
}
//~ Ejemplo 10: Arrays Multidimensionales Dinámicos


#include <iostream>

int main() {
    // Declarar el tamaño del array bidimensional
    int rows = 3;
    int cols = 3;

    // Crear un array bidimensional dinámico
    int** arr = new int*[rows];
    for(int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // Inicializar los elementos del array bidimensional dinámico
    int value = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            arr[i][j] = value++;
        }
    }

    // Imprimir los elementos del array bidimensional dinámico
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Element at index [" << i << "][" << j << "]: " << arr[i][j] << endl;
        }
    }

    // Liberar la memoria del array bidimensional dinámico
    for(int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
//~ Explicaciones Adicionales:
//~ Modificar Elementos de un Array: Este ejemplo muestra cómo modificar los valores de un array después de su inicialización.
//~ Arrays Dinámicos con new y delete: Este ejemplo enseña cómo crear y manejar arrays dinámicos en C++, así como liberar la memoria correctamente.
//~ Usar vector para Arrays Dinámicos: vector es una clase de la biblioteca estándar de C++ que maneja automáticamente la gestión de memoria dinámica y proporciona muchas funcionalidades útiles.
//~ Pasar Arrays Dinámicos a Funciones: Este ejemplo muestra cómo pasar un puntero a un array dinámico a una función y trabajar con él dentro de la función.
//~ Arrays Multidimensionales Dinámicos: Este ejemplo muestra cómo crear y trabajar con arrays multidimensionales dinámicos, y cómo liberar la memoria correctamente.
//~ Estos ejemplos cubren una amplia gama de operaciones y técnicas para trabajar con arrays en C++, desde arrays estáticos simples hasta arrays dinámicos y multidimensionales.






//~ Para crear un array dinámico en C++ que pueda crecer y llenarse con nuevos datos a medida que sea necesario, la mejor opción es utilizar la clase vector de la biblioteca estándar de C++. A continuación, se muestra cómo crear un vector con dos elementos iniciales, cómo llenarlo con datos y cómo agregar nuevos elementos.

#include <iostream>
#include <vector>

int main() {
    // Crear un vector con 2 elementos iniciales
    vector<int> arr = {10, 20};

    // Imprimir los elementos iniciales
    cout << "Elementos iniciales del vector:" << endl;
    for (size_t i = 0; i < arr.size(); i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    // Agregar nuevos elementos al vector
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    // Imprimir los elementos después de agregar nuevos
    cout << "Elementos del vector después de agregar nuevos:" << endl;
    for (size_t i = 0; i < arr.size(); i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}

//~ Inicialización del vector:

//~ vector<int> arr = {10, 20};: Inicializa un vector con dos elementos, 10 y 20.
//~ Imprimir los Elementos Iniciales:

//~ Se recorre el vector y se imprimen los elementos iniciales.
//~ Agregar Nuevos Elementos al Vector:

arr.push_back(30);: Agrega el elemento 30 al final del vector.
arr.push_back(40);: Agrega el elemento 40 al final del vector.
arr.push_back(50);: Agrega el elemento 50 al final del vector.
//~ Imprimir los Elementos Después de Agregar Nuevos:

//~ Se recorre el vector nuevamente y se imprimen los elementos después de agregar los nuevos.
//~ Consideraciones Adicionales
//~ Flexibilidad: vector es muy flexible y se puede redimensionar automáticamente cuando se agregan nuevos elementos.
//~ Eficiencia: Internamente, vector maneja la memoria de manera eficiente y solo redimensiona su almacenamiento cuando es necesario.
//~ Acceso a Elementos: Permite acceso aleatorio a sus elementos mediante el operador de índice [].
//~ Alternativa con Arrays Dinámicos (Menos Recomendado)
//~ Si deseas una implementación más básica y menos flexible usando arrays dinámicos, aquí hay un ejemplo:



#include <iostream>

int main() {
    // Declarar el tamaño inicial del array
    int size = 2;
    int* arr = new int[size];

    // Inicializar el array con dos elementos
    arr[0] = 10;
    arr[1] = 20;

    // Imprimir los elementos iniciales
    cout << "Elementos iniciales del array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    // Redimensionar el array para agregar nuevos elementos
    int newSize = size + 3;
    int* newArr = new int[newSize];

    // Copiar los elementos antiguos al nuevo array
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    // Agregar nuevos elementos
    newArr[2] = 30;
    newArr[3] = 40;
    newArr[4] = 50;

    // Liberar la memoria del array antiguo
    delete[] arr;

    // Actualizar el puntero y el tamaño
    arr = newArr;
    size = newSize;

    // Imprimir los elementos después de agregar nuevos
    cout << "Elementos del array después de agregar nuevos:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    // Liberar la memoria del array final
    delete[] arr;

    return 0;
}
//~ Código de Arrays Dinámicos
//~ Inicialización del Array Dinámico:

//~ int* arr = new int[size];: Crea un array dinámico de tamaño inicial size.
//~ Redimensionar el Array:

//~ Crea un nuevo array dinámico newArr de tamaño newSize.
//~ Copia los elementos del array antiguo al nuevo array.
//~ Libera la memoria del array antiguo con delete[] arr.
//~ Actualiza el puntero arr para que apunte al nuevo array y actualiza size.
//~ Agregar Nuevos Elementos:

//~ Agrega los nuevos elementos al nuevo array.
//~ Liberar la Memoria del Array Final:

//~ Libera la memoria del array final con delete[] arr.
//~ Conclusión
//~ Usar vector es más seguro y conveniente que manejar arrays dinámicos manualmente. vector maneja automáticamente la gestión de memoria y proporciona muchas funcionalidades útiles para trabajar con arrays dinámicos.

*/
