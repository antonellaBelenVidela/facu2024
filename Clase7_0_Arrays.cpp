/*
Arrays en C++
En C++, un array es una estructura de datos que permite almacenar una colección de elementos del mismo tipo. Estos elementos están dispuestos en memoria de forma contigua y pueden ser accedidos mediante un índice.

Declaración de un Array
Para declarar un array en C++, se utiliza la sintaxis:

        tipo nombre_array[tamaño];
donde:

tipo es el tipo de datos de los elementos del array (como int, float, char, etc.).
nombre_array es el nombre que se le da al array.
tamaño es el número de elementos que puede contener el array.
Ejemplo:
/*


*/
int numeros[5]; // Declara un array de enteros con capacidad para 5 elementos
/*
Inicialización de un Array
Un array puede ser inicializado al momento de su declaración o después de la misma.


*/
int numeros[5] = {1, 2, 3, 4, 5}; // Inicializa un array de enteros con los valores 1, 2, 3, 4 y 5
/*
También es posible omitir el tamaño del array si se proporcionan valores entre llaves, en cuyo caso el compilador determinará automáticamente el tamaño del array.


*/
int numeros[] = {1, 2, 3, 4, 5}; // El compilador infiere automáticamente el tamaño del array como 5
/*
Acceso a los Elementos de un Array
Los elementos de un array se acceden mediante un índice, que comienza en 0 y termina en tamaño - 1. Por ejemplo, para acceder al primer elemento del array numeros:


*/
int primer_elemento = numeros[0];/*
Uso de Arrays en Funciones
Los arrays pueden ser pasados a funciones como argumentos. En la declaración de la función, el array se especifica como parámetro con corchetes vacíos [], lo que indica que se está pasando un array.


*/
void funcion_ejemplo(int arr[]) {
    // Código de la función
}/*
En la llamada a la función, el nombre del array se pasa como argumento.



funcion_ejemplo(numeros);
Consideraciones Importantes
Los arrays en C++ tienen tamaño fijo y estático, lo que significa que una vez que se define su tamaño, no puede ser cambiado dinámicamente durante la ejecución del programa.
El acceso a un índice fuera de los límites de un array puede resultar en un comportamiento indefinido o errores en tiempo de ejecución.
Los arrays son útiles para almacenar y manipular colecciones de datos del mismo tipo de manera eficiente.
Espero que esta explicación te sea útil para entender el concepto de arrays en C++. Si tienes alguna pregunta adicional, no dudes en preguntar.

/*

