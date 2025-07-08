/*
El concepto de "corte de control" en el contexto del procesamiento de arrays o registros.
Este concepto es más común en el ámbito de la programación y manipulación de datos en lenguajes como COBOL,
pero se puede aplicar de manera similar en Python o C++.

¿Qué es el Corte de Control?
El corte de control es una técnica utilizada en el procesamiento de datos secuenciales para agrupar y
procesar registros basados en un campo o clave específica. Básicamente, se refiere al cambio en el valor
de un campo clave que indica que se debe realizar algún tipo de procesamiento o agrupación de datos.

Aplicación del Corte de Control
Vamos a ejemplificar cómo implementar un corte de control.
Supongamos que tenemos una lista de registros de ventas, y queremos procesar las ventas por cada cliente.
Cada registro contiene un identificador de cliente y el monto de la venta.
La lista está ordenada por identificador de cliente.
 */

#include <iostream>

using namespace std;

// Definición de la estructura Venta
struct Venta {
    int cliente_id;
    int monto;
};

// Función para procesar ventas por cliente utilizando corte de control
void procesar_ventas_por_cliente(Venta ventas[], int n) {
    // Inicializar variables
    int cliente_actual = -1;
    int total_por_cliente = 0;

    for (int i = 0; i < n; ++i) {
        int cliente_id = ventas[i].cliente_id;

        // Detectar el corte de control
        if (cliente_id != cliente_actual) {
            // Si no es el primer cliente, imprimir el total acumulado del cliente anterior
            if (cliente_actual != -1) {
                cout << "Cliente " << cliente_actual << " - Total de ventas: " << total_por_cliente << endl;
            }

            // Actualizar el cliente actual y reiniciar el total
            cliente_actual = cliente_id;
            total_por_cliente = 0;
        }

        // Acumular el monto de la venta para el cliente actual
        total_por_cliente += ventas[i].monto;
    }

    // Imprimir el total del último cliente
    if (cliente_actual != -1) {
        cout << "Cliente " << cliente_actual << " - Total de ventas: " << total_por_cliente << endl;
    }
}

int main() {
    // Ejemplo de datos de ventas
    const int n = 5;
    Venta ventas[n] = {
        {1, 100},
        {1, 150},
        {2, 200},
        {2, 250},
        {3, 300}
    };

    // Procesar las ventas por cliente
    procesar_ventas_por_cliente(ventas, n);

    return 0;
}
/*

Definición de la Estructura Venta:

La estructura Venta contiene dos campos: cliente_id y monto.
Función procesar_ventas_por_cliente:

Parámetros:

ventas[]: Un array de estructuras Venta que contiene los registros de ventas.
n: El número de elementos en el array ventas.
Inicialización de Variables:

cliente_actual: Guarda el identificador del cliente actual que se está procesando (inicialmente -1 para indicar que no hay cliente actual).
total_por_cliente: Acumula el total de ventas para el cliente actual.
Iteración sobre los Registros de Ventas:

Recorremos el array ventas usando un bucle for.
Detección del Corte de Control:

Si el cliente_id actual es diferente del cliente_actual, se detecta un corte de control.
Si cliente_actual no es -1 (es decir, no es el primer cliente), se imprime el total acumulado del cliente anterior.
Se actualiza cliente_actual al nuevo cliente_id y se reinicia total_por_cliente.
Acumulación del Monto de la Venta:

Se agrega el monto de la venta al total del cliente actual.
Impresión del Total del Último Cliente:

Después de salir del bucle, se imprime el total del último cliente procesado.
Función main:

Inicialización del Array de Ventas:
Creamos un array estático ventas con 5 elementos y lo inicializamos con datos de ejemplo.
Llamada a la Función procesar_ventas_por_cliente:
Llamamos a la función procesar_ventas_por_cliente pasando el array ventas y el número de elementos n.
*/

/*Paso a Paso del Código
Estructura Venta: Define los registros de ventas con dos campos: cliente_id (identificador del cliente) y monto (monto de la venta).
Función para Procesar Ventas por Cliente

Inicialización de Variables:

cliente_actual: Guarda el identificador del cliente que se está procesando actualmente. Inicialmente se establece en -1 para indicar que no hay cliente actual.
total_por_cliente: Acumula el total de ventas para el cliente actual.
Iteración sobre los Registros de Ventas:

Bucle for: Recorre cada elemento del array ventas.
Obtención del cliente_id: Extrae el cliente_id del registro de ventas actual.
Detección del Corte de Control:

Condición if (cliente_id != cliente_actual):
Si el cliente_id actual es diferente de cliente_actual, se detecta un corte de control.
Si cliente_actual no es -1 (es decir, no es el primer cliente), se imprime el total acumulado del cliente anterior.
Se actualiza cliente_actual con el nuevo cliente_id y se reinicia total_por_cliente a 0.
Acumulación del Monto de la Venta:

Se suma el monto de la venta actual (ventas[i].monto) a total_por_cliente.
Impresión del Total del Último Cliente:

Después de salir del bucle, se imprime el total del último cliente procesado.
Función Principal (main)

Inicialización del Array de Ventas:

    Se define un array estático ventas con 5 elementos y se inicializa con datos de ejemplo. Cada elemento del array es una estructura Venta.
    Llamada a la Función procesar_ventas_por_cliente:

    Se llama a la función procesar_ventas_por_cliente, pasando el array ventas y el número de elementos n.
    Resumen del Proceso
    Inicialización de Datos:

    Se crean los registros de ventas en un array estático.
    Iteración y Detección del Corte de Control:

    Se recorre el array y se detectan cambios en el cliente_id para procesar y agrupar las ventas por cliente.
    Impresión de Resultados:

    Se imprime el total acumulado de ventas para cada cliente cuando se detecta un corte de control y al finalizar la iteración.
    Cuadro Sinóptico

---------------------------------------------------
|             Procesamiento de Ventas             |
---------------------------------------------------
| 1. Definición de la estructura Venta            |
|     - cliente_id                                |
|     - monto                                     |
---------------------------------------------------
| 2. Función procesar_ventas_por_cliente          |
|     - Inicializar variables                     |
|     - Iterar sobre ventas                       |
|     - Detectar corte de control                 |
|     - Acumular montos de ventas                 |
|     - Imprimir total acumulado                  |
---------------------------------------------------
| 3. Función main                                 |
|     - Inicializar array de ventas               |
|     - Llamar a procesar_ventas_por_cliente      |
---------------------------------------------------
Este cuadro sinóptico resume el flujo del proceso de corte de control para agrupar y procesar ventas por cliente.
*/