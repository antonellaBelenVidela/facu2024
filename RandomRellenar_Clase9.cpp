//crear un array con 100 datos aleatorios en C++, puedes utilizar la biblioteca estándar <cstdlib> para la generación de números aleatorios y <ctime> para sembrar el generador de números aleatorios con una semilla basada en el tiempo actual. Aquí tienes un ejemplo de cómo hacerlo:
#include <iostream>
#include <cstdlib>
#include <ctime>
const int SIZE = 100;
using namespace std;

void crear_array(int random_numbers[]) {
    // Inicializar el generador de números aleatorios
    srand(time(0));

    // Llenar el array con números aleatorios
    for (int i = 0; i < SIZE; ++i) {
        random_numbers[i] = rand() % 1000; // Números aleatorios entre 0 y 999
    }
}

int main() {
    int random_numbers[SIZE];

    crear_array(random_numbers);

    // Imprimir los números aleatorios
    for (int i = 0; i < SIZE; ++i) {
        cout << random_numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
Explicación del Código Corregido:
Inicialización del Generador de Números Aleatorios:

En la función crear_array, se utiliza srand(time(0)) para inicializar el generador de números aleatorios.
La función time(0) devuelve el tiempo actual en segundos desde el 1 de enero de 1970 (también conocido como la "época Unix").
Generación de Números Aleatorios:

La función rand() se usa para generar un número aleatorio, y el operador % se utiliza para limitar el rango de los números generados (en este caso, entre 0 y 999).
Definición del Array:

En main, se define un array random_numbers con un tamaño de 100.
Llenado del Array:

Se llama a la función crear_array para llenar el array con números aleatorios.
Impresión del Array:

Se recorre el array random_numbers y se imprimen sus valores.

*/





