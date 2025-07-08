/*
 * PARCIAL II

            FUNCIONES - Return 1 dato (no puedo retornar un array)
                Las funciones sólo devuelven un único resultado, de hecho, así las habíamos definido.

                    Parámetros de Entrada / Pasaje por Valor
                        float calcularPromedioNotas(int nota1, int nota2)



            PROCEDIMIENTO - (Referencia)
                Un Procedimiento es un módulo que puede devolver uno, muchos o incluso ningún resultado

                    Parámetros de Salida / Pasaje por Referencia
                        void obtenerNotas (int &nota1, int &nota2);



            COLECCIONES DE DATOS manipular Arrays

*/
#include <iostream>

using namespace std;
float funcionCambioDeSigno(float dato);
float funcionCambioDeSigno(float dato)
{
    /*
    if (dato >0)
    {
        dato = dato *-1
    }
    else //(dato >0)
    {
        dato = dato *-1
    }
    */
    return -dato;
}

void procCambioDeSigno(float &dato)
{
    dato= -dato;
}

int main(void)/* funcion estandar */
{
    float valor =0;
    cout << "ingrese un numero :"<<endl;
    cin >> valor;
    cout << "el valor ingresado originalmente es " << valor<<endl;
    valor = funcionCambioDeSigno(valor);
    cout << "el valor tras la funcion es " << valor<<endl;
    procCambioDeSigno(valor);
    cout << "el valor tras la procedimiento es " << valor<<endl;
    return 0;
}




/*

● Variables Locales
● Variables Globales



● Modularizar:
    es una técnica de construcción de software que permite separar los
    datos y procedimientos en una parte privada - sólo accesible dentro del módulo -
    y una parte pública - accesible por fuera del módulo -.

● Recursividad
● Abstraccion
● Uso de memoria

Vectores -arreglos unidimensionales o arrays.
    Conjunto finito: La cantidad de elementos de un arreglo es finita y se conoce en el momento de
    definir el arreglo. No se pueden agregar o eliminar elementos, ya que un arreglo tiene siempre la
    misma cantidad de componentes.
    • Elementos del mismo tipo de dato y naturaleza: Todos los elementos son del mismo tipo de
    dato. Por ejemplo, si vamos a utilizar un arreglo para guardar edades de personas, todos los
    elementos serán del tipo de dato ENTERO
    • Ocupan posiciones contiguas de memoria: Los elementos se almacenan en la memoria uno a
    continuación de otro. Como cada uno de los elementos ocupa el mismo espacio, se puede
    acceder a cualquier elemento conociendo la posición de memoria del primer elemento.
    • Asociados a un mismo nombre: Un arreglo es una VARIABLE, por lo tanto, tendrá un solo
    nombre que estará asociado a un conjunto de valores. A cada uno de los elementos se accede
    directamente a través de su posición, utilizando lo que llamaremos el Índice.


Matriz
    Los vectores también son llamados arreglos unidimensionales.
    Tal como vimos en la declaración y acceso a los valores del vector, el vector tiene una única dimensión.
    Pero existen arreglos de más dimensiones por lo cual los arreglos son clasificados en:
        ● Unidimensionales (vectores)
        ● Bidimensionales (tablas o matrices)
        ● Multidimensionales (tres o más dimensiones)
Matrices como parámetros
    void cargarMatriz(int mat[][], int filas, int cols)

Estructura de Datos
    Volviendo a nuestro ejemplo de edades de alumnos, supongamos que ahora además de pedir la
    edad de un alumno, también queremos saber el nombre y la cantidad de materias aprobadas. Es
    decir que por cada alumno tendremos tres valores que guardaremos en tres variables distintas.
    En el caso en que se necesite hacer un procedimiento que imprima los datos de cada alumno,
    tendrá que tener esos tres datos como parámetros.
    Hasta ahora no habrás encontrado ninguna dificultad en este problema, pero qué sucede si te
    decimos que, además de los datos mencionados, también queremos guardar otros valores,
    como, por ejemplo, el número de documento, el sexo, la cantidad de materias que está
    cursando.... Tendrás que agregar todos esos datos en la lista de parámetros de cada módulo que
    quiera trabajar con los datos de un alumno. Como habrás notado, se estará haciendo más
    complejo el algoritmo, y hasta cierto punto, difícil para entenderlo y hasta para probarlo.
    Evidentemente necesitamos algo para poder guardar de forma más apropiada estos valores. Es
    en este momento donde necesitamos utilizar las Estructuras o Registros de datos.
    Veamos cómo definimos un registro para guardar los datos de un alumno en C++:

struct Alumno {
string Nombre;
int Edad;
int Aprobadas;
};



● Campos
    Seguramente te estarás preguntando que, si bien los tres elementos están asociados a un mismo
    nombre lógico, debe haber alguna manera de poder acceder a cada dato. Esa manera es
    utilizando el nombre de cada elemento. Cada elemento de la Estructura se denomina “campo”.


● Diferencias con Arreglos
    La principal diferencia que tienen las estructuras de datos o registros respecto de los arreglos es
    la posibilidad de almacenar datos de distintos tipos bajo el mismo nombre de variable.
    Recordemos que los arreglos, tanto las matrices como los vectores, siempre son de un único
    tipo de datos. Por lo cual si deseamos tener en un mismo lugar el nombre, legajo y las notas de
    los alumnos, no lo podríamos hacer con un único arreglo.


● Burbujeo
● Burbujeo Mejorado

● Búsqueda Secuencial
● Búsqueda por Posición Única Predecible (PUP)
● Búsqueda binaria


● Apareo de Vectores
    El apareo de vectores (o mergeo) nos permite combinar dos vectores en un tercer vector que
    contendrá elementos de los vectores originales. En su versión más sencilla el vector resultante
    contendrá todos los elementos de ambos vectores, pero es muy sencillo adaptar el algoritmo
    original para agregar nuevas reglas o controles al formar el vector resultante.

● Apareo de vectores de registros
    Al igual que en los algoritmos vistos anteriormente, lo único que deberemos hacer para poder
    usar este mismo algoritmo con estructuras propias, será modificar los tipos de datos y la
    condición de comparación. De más está decir que los vectores deberán estar ordenados por el
    mismo criterio que usemos para la comparación en nuestro algoritmo.

● Corte de Control
    El corte de control es una técnica que nos permitirá obtener información a partir de un conjunto
    de datos. Su uso principalmente es obtener impresiones, cantidades, promedios, etc. agrupados
    con algún criterio, y parte de la base de que los datos originales cumplen o se puede hacer que
    cumplan con el agrupamiento necesario para su procesamiento.
*/
