/*
Matrices en C++
En C++, una matriz es una estructura de datos bidimensional que permite almacenar una colección de elementos dispuestos en filas y columnas. Esencialmente, una matriz es un array de arrays, donde cada elemento es accesible mediante dos índices: uno para la fila y otro para la columna.

Declaración de una Matriz
Para declarar una matriz en C++, se utiliza la sintaxis:
*/

#include <iostream>
using namespace std;


int main (void)
{

    /*
    tipo nombre_matriz[filas][columnas];
    donde:
    tipo es el tipo de datos de los elementos de la matriz (como int, float, char, etc.).
    nombre_matriz es el nombre que se le da a la matriz.
    filas y columnas son los tamaños respectivos de las dimensiones de la matriz.
    Por ejemplo:


    */

    int matriz_0[3][3]; // Declara una matriz de enteros con 3 filas y 3 columnas
    /*

    Inicialización de una Matriz
    Al igual que con los arrays unidimensionales, una matriz puede ser inicializada al momento de su declaración o después de la misma.


    */





    int vector[3] = {1,2,3};
    for (int index =0; index <3 ; index++)
    {
            cout << "en fila "<< index << "se encuentra el dato "<< vector [index] << endl;
    }









    int matriz_1[3][3] = {{1, 2, 3}, {3, 4, 5},{5, 6, 7}}; // Inicializa una matriz de enteros con los valores proporcionados
    for (int index_1 =0; index_1 <3 ; index_1++)
    {
        for (int index_2 =0; index_2 <3 ; index_2++)
        {
            cout << "en fila: "<< index_1<< " columna: "<< index_2 << " se encuentra el dato "<< matriz_1[index_1][index_2] << endl;
        }
    }
    for (int index_1 =0; index_1 <3 ; index_1++)
    {
        cout <<"        ";
        for (int index_2 =0; index_2 <3 ; index_2++)
        {
            cout << matriz_1[index_1][index_2] << " - ";
        }
        cout << endl;
    }


    for (int index_1 =0; index_1 <3 ; index_1++)
    {
        cout <<"        ";
        for (int index_2 =0; index_2 <3 ; index_2++)
        {
            cout << matriz_1[index_2][index_1] << " - ";
        }
        cout << endl;
    }

    /*
        {
            {1, 2, 3},
            {3, 4, 5},
            {5, 6, 7}
        }

    */







    //~ int matriz_2[3][3][3] ={ {{1, 2, 3}, {3, 4, 5},{5, 6, 7}},{{1, 2, 3}, {3, 4, 5},{5, 6, 7}},{{1, 2, 3}, {3, 4, 5},{5, 6, 7}} }; // Inicializa una matriz de enteros con los valores proporcionados
    //~ for (int index_1 =0; index_1 <3 ; index_1++)
    //~ {
        //~ for (int index_2 =0; index_2 <3 ; index_2++)
        //~ {
            //~ for (int index_3 =0; index_3 <3 ; index_3++)
            //~ {
                //~ cout << "en fila: "<< index_1<< " columna: "<< index_2 << " prof: "<< index_3 << " se encuentra el dato "<< matriz_2[index_1][index_2][index_3] << endl;
            //~ }
        //~ }
    //~ }
    //~ for (int index_1 =0; index_1 <3 ; index_1++)
    //~ {

        //~ for (int index_2 =0; index_2 <3 ; index_2++)
        //~ {
            //~ cout <<"        ";
            //~ for (int index_3 =0; index_3 <3 ; index_3++)
            //~ {
                //~ cout << matriz_2[index_1][index_2][index_3] << " - ";
            //~ }
            //~ cout << endl;
        //~ }
        //~ cout << endl;
    //~ }
    /*
    int matriz_1[3][3][3] =
                                { { {1, 2, 3},
                                    {3, 4, 5},
                                    {5, 6, 7}},
                                               {{1, 2, 3},
                                                {3, 4, 5},
                                                {5, 6, 7}},
                                                          {{1, 2, 3},
                                                           {3, 4, 5},
                                                           {5, 6, 7}
                                                           }
                                };
    */



    /*

    Acceso a los Elementos de una Matriz
    Los elementos de una matriz se acceden mediante dos índices: uno para la fila y otro para la columna.


    */
    int elemento = matriz_1[1][2]; // Accede al elemento en la segunda fila y tercera columna
    cout << "el elemento en fila 1 columna 2 es :" << elemento << endl;
    /*

    Uso de Matrices en Funciones
    Las matrices pueden ser pasadas a funciones como argumentos de manera similar a los arrays unidimensionales. La sintaxis en la declaración de la función es la misma que para una matriz.


    */

    //~ void funcion_ejemplo(int matriz[][3]) {
        //~ // Código de la función
    //~ }


    /*
    En la llamada a la función, se pasa el nombre de la matriz como argumento.


    funcion_ejemplo(matriz);
    Consideraciones Importantes
    Las matrices en C++ tienen tamaño fijo y estático, lo que significa que una vez que se definen sus dimensiones, no pueden ser cambiadas dinámicamente durante la ejecución del programa.
    Las matrices son útiles para representar datos estructurados en forma de tablas o cuadrículas, como matrices numéricas, tableros de juegos, imágenes, etc.
    El acceso a un índice fuera de los límites de una matriz puede resultar en un comportamiento indefinido o errores en tiempo de ejecución.
    Espero que esta explicación te ayude a entender el concepto de matrices en C++. Si tienes alguna pregunta adicional, no dudes en preguntar.
    */


return 0;
}