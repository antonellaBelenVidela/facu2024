/*
Paso a Paso del Proceso de Corte de Control en C++
Generación de Datos Aleatorios: Llenaremos los vectores con datos aleatorios.
Corte de Control: Aplicaremos la técnica de corte de control para procesar y agrupar los datos.
Código en C++ con Generación Aleatoria de Datos y Corte de Control
1. Generación de Datos Aleatorios
Para generar datos aleatorios, usaremos la función rand().

2. Implementación Completa
Vamos a definir una estructura para almacenar las temperaturas, generar datos aleatorios y aplicar el corte de control para calcular la temperatura promedio diaria.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cstdlib>
#include <ctime>
const int SIZE = 20;

using namespace std;
arr1
// Definición de la estructura Temperatura
struct Temperatura {
    int dia;
    int hora;
    float temp;
};

// Función para llenar el array con datos aleatorios
void llenar_temperaturas_aleatorias(Temperatura temperaturas[], int n) {
    srand(time(0)); // Inicializar el generador de números aleatorios

    for (int i = 0; i < n; ++i) {
        temperaturas[i].dia = 1 + rand() % 10; // Días entre 1 y 10
        temperaturas[i].hora = rand() % 24; // Horas entre 0 y 23
        temperaturas[i].temp = (float)(rand() % 350) / 10.0; // Temperaturas entre 0.0 y 35.0
    }
}

// Función para procesar temperaturas por día utilizando corte de control
void procesar_temperaturas_por_dia(Temperatura temperaturas[], int n) {
    // Inicializar variables
    int dia_actual = -1;
    float suma_temp = 0.0;
    int conteo_temp = 0;

    for (int i = 0; i < n; ++i) {
        int dia = temperaturas[i].dia;

        // Detectar el corte de control
        if (dia != dia_actual) {
            // Si no es el primer día, imprimir el promedio acumulado del día anterior
            if (dia_actual != -1) {
                cout << "Día " << dia_actual << " - Temperatura promedio: " << suma_temp / conteo_temp << endl;
            }

            // Actualizar el día actual y reiniciar sumas y conteos
            dia_actual = dia;
            suma_temp = 0.0;
            conteo_temp = 0;
        }

        // Acumular la temperatura y el conteo para el día actual
        suma_temp += temperaturas[i].temp;
        conteo_temp += 1;
    }

    // Imprimir el promedio del último día
    if (dia_actual != -1) {
        cout << "Día " << dia_actual << " - Temperatura promedio: " << suma_temp / conteo_temp << endl;
    }
}

int main() {
    // Definir el tamaño del array
    const int n = 100;
    Temperatura temperaturas[n];

    // Llenar el array con datos aleatorios
    llenar_temperaturas_aleatorias(temperaturas, n);

    // Procesar las temperaturas por día
    procesar_temperaturas_por_dia(temperaturas, n);

    return 0;
}
/*
Explicación del Código
Definición de la Estructura Temperatura:

La estructura Temperatura contiene tres campos: dia, hora, y temp.
Función llenar_temperaturas_aleatorias:

Genera datos aleatorios para llenar el array temperaturas.
Usa srand(time(0)) para inicializar el generador de números aleatorios con la hora actual.
Llena el array con días entre 1 y 10, horas entre 0 y 23, y temperaturas entre 0.0 y 35.0.
Función procesar_temperaturas_por_dia:

Inicialización de Variables:
dia_actual: Guarda el día que se está procesando actualmente (inicialmente -1 para indicar que no hay día actual).
suma_temp: Acumula la suma de temperaturas para el día actual.
conteo_temp: Lleva el conteo de registros de temperatura para el día actual.
Iteración sobre los Registros de Temperatura:
Bucle for: Recorre cada elemento del array temperaturas.
Obtención del dia: Extrae el dia del registro de temperatura actual.
Detección del Corte de Control:
Condición if (dia != dia_actual):
Si el dia actual es diferente del dia_actual, se detecta un corte de control.
Si dia_actual no es -1 (es decir, no es el primer día), se imprime el promedio acumulado del día anterior.
Se actualiza dia_actual con el nuevo dia y se reinician suma_temp y conteo_temp.
Acumulación de la Temperatura:
Se suma la temperatura del registro actual (temperaturas[i].temp) a suma_temp.
Se incrementa conteo_temp en 1.
Impresión del Promedio del Último Día:
Después de salir del bucle, se imprime el promedio del último día procesado.
Puntos de Control o Controles
Inicialización del Array:
Generamos datos aleatorios para llenar el array de temperaturas.
Iteración y Acumulación:
Recorremos el array, detectando cortes de control cuando cambia el día.
Impresión de Resultados:
Imprimimos los resultados acumulados para cada día cuando se detecta un corte de control y al final de la iteración.
Cuadro Sinóptico para el Ejemplo de Temperaturas
markdown
Copiar código
---------------------------------------------------
|           Procesamiento de Temperaturas         |
---------------------------------------------------
| 1. Definición de la estructura Temperatura      |
|     - dia                                       |
|     - hora                                      |
|     - temp                                      |
---------------------------------------------------
| 2. Función llenar_temperaturas_aleatorias       |
|     - Generar datos aleatorios                  |
|     - Llenar array con datos                    |
---------------------------------------------------
| 3. Función procesar_temperaturas_por_dia        |
|     - Inicializar variables                     |
|     - Iterar sobre temperaturas                 |
|     - Detectar corte de control                 |
|     - Acumular temperaturas y conteos           |
|     - Calcular y imprimir promedios             |
---------------------------------------------------
| 4. Función main                                 |
|     - Inicializar array de temperaturas         |
|     - Llamar a llenar_temperaturas_aleatorias   |
|     - Llamar a procesar_temperaturas_por_dia    |
---------------------------------------------------
Este cuadro sinóptico resume el flujo del proceso de corte de control para agrupar y procesar registros de temperatura por día, calcular promedios y generar un reporte de las temperaturas promedio diarias, incluyendo la generación aleatoria de datos.
*/
