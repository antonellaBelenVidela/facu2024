#include <iostream>
#include <string>

using namespace std;
int main()
{
int vector [12] = {7, 2, 3, 4, 5, 6, 1, 8, 9, 10, 11, 12 };
int temp =0;


for (int j = 0 ; j < 12;j++)
{
    for (int i = 0 ; i < 11;i++)
    {
        if (vector[i] < vector[i+1])
            {
            temp = vector[i] ;
            vector[i] = vector[i+1];
            vector[i+1] = temp;
        }
    cout << "valor del vector en index : "<<i<<" es :"<< vector[i] <<"\n";
    }
    cout << "valor del vector en index : 11 es :"<< vector[11] <<"\n";
    cout << "--------------------------------------------------\n";
}
for (int i = 0 ; i < 12;i++)
{
    cout << "valor del vector en index : "<<i<<" es :"<< vector[i] <<"\n";
}



return 0;
}



/*
En C++, el corte de control, el apareo y las búsquedas son operaciones comunes en el manejo de datos. Cuando se trabaja con vectores de estructuras, estas operaciones pueden realizarse de manera eficiente y flexible. Aquí tienes una explicación de cómo se pueden llevar a cabo estas operaciones:

Corte de Control con Vector de Estructuras
El corte de control implica la interrupción de una secuencia de acciones basada en una condición específica. Por ejemplo, supongamos que tienes un vector de estructuras que almacena información sobre estudiantes, y quieres imprimir los nombres de todos los estudiantes cuya edad sea mayor que 20 años. Aquí está cómo podrías hacerlo:

Corte de Control
El corte de control es un concepto fundamental en la programación que se refiere a la ejecución selectiva de un conjunto de instrucciones basadas en una condición específica. En esencia, el corte de control permite que un programa tome decisiones y realice diferentes acciones en función de las circunstancias dadas.

En C++, una de las estructuras de control más comunes para implementar el corte de control es la instrucción if. La sintaxis básica de un if es la siguiente:


if (condición) {
    // Bloque de  a ejecutar si la condición es verdadera
}
La condición se evalúa como verdadera o falsa. Si es verdadera, el bloque de  dentro del if se ejecuta. Si es falsa, el bloque de  se omite y el programa continúa con la siguiente instrucción.

Ejemplo de Uso del Corte de Control
Por ejemplo, supongamos que tienes un programa que verifica si un número es positivo. Utilizando el corte de control, podrías escribir algo así:



#include <iostream>

int main() {
    int numero;

    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    // Corte de control para verificar si el número es positivo
    if (numero > 0) {
        std::cout << "El número ingresado es positivo." << std::endl;
    } else {
        std::cout << "El número ingresado no es positivo." << std::endl;
    }

    return 0;
}
En este ejemplo, el programa solicita al usuario que ingrese un número. Luego, utiliza un corte de control (if) para verificar si el número es positivo. Si la condición numero > 0 es verdadera, el programa imprimirá "El número ingresado es positivo.". De lo contrario, imprimirá "El número ingresado no es positivo.".

Tipos de Estructuras de Control
Además del if, hay otras estructuras de control comunes en C++ que permiten realizar cortes de control más complejos:

if-else if-else: Permite evaluar múltiples condiciones en orden secuencial.
switch-case: Permite evaluar una expresión y ejecutar diferentes bloques de  según el valor de la expresión.
while y do-while: Permiten ejecutar un bloque de  repetidamente mientras se cumpla una condición.
for: Permite ejecutar un bloque de  un número específico de veces.
Estas estructuras de control son herramientas poderosas que permiten a los programadores escribir  flexible y realizar acciones específicas basadas en diversas condiciones. El dominio de estas estructuras de control es fundamental para escribir programas efectivos y eficientes en C++.
#include <iostream>
#include <vector>
#include <string>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
};

int main() {
    std::vector<Estudiante> estudiantes = {{"Juan", 18}, {"María", 22}, {"Pedro", 19}, {"Ana", 25}};

    // Corte de control para imprimir nombres de estudiantes mayores de 20 años
    for (const auto& estudiante : estudiantes) {
        if (estudiante.edad > 20) {
            std::cout << estudiante.nombre << std::endl;
        }
    }

    return 0;
}
Apareo con Vectores de Estructuras
El apareo implica combinar dos o más conjuntos de datos en uno solo. Por ejemplo, supongamos que tienes dos vectores de estructuras, uno que almacena información sobre estudiantes y otro que almacena información sobre cursos. Puedes combinar estos vectores para crear un nuevo vector que contenga información sobre qué estudiantes están inscritos en qué cursos:



#include <iostream>
#include <vector>
#include <string>

// Definición de las estructuras Estudiante y Curso
struct Estudiante {
    std::string nombre;
    int id_estudiante;
};

struct Curso {
    std::string nombre_curso;
    int id_curso;
};

int main() {
    std::vector<Estudiante> estudiantes = {{"Juan", 1}, {"María", 2}, {"Pedro", 3}};
    std::vector<Curso> cursos = {{"Matemáticas", 101}, {"Física", 102}, {"Química", 103}};

    // Apareo de estudiantes y cursos
    std::vector<std::pair<Estudiante, Curso>> inscripciones;
    for (size_t i = 0; i < estudiantes.size(); ++i) {
        inscripciones.push_back({estudiantes[i], cursos[i]});
    }

    // Impresión de las inscripciones
    for (const auto& inscripcion : inscripciones) {
        std::cout << inscripcion.first.nombre << " está inscrito en " << inscripcion.second.nombre_curso << std::endl;
    }

    return 0;
}
Búsquedas con Vectores de Estructuras
Las búsquedas implican encontrar un elemento específico en un conjunto de datos. Por ejemplo, supongamos que tienes un vector de estructuras que almacena información sobre estudiantes y quieres encontrar el estudiante cuyo nombre sea "María". Aquí está cómo podrías hacerlo:


#include <iostream>
#include <vector>
#include <string>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int id_estudiante;
};

int main() {
    std::vector<Estudiante> estudiantes = {{"Juan", 1}, {"María", 2}, {"Pedro", 3}};

    // Búsqueda del estudiante llamado "María"
    std::string nombre_a_buscar = "María";
    for (const auto& estudiante : estudiantes) {
        if (estudiante.nombre == nombre_a_buscar) {
            std::cout << "El estudiante " << nombre_a_buscar << " fue encontrado." << std::endl;
            break; // Termina la búsqueda una vez que se encuentra el estudiante
        }
    }

    return 0;
}
En resumen, el corte de control, el apareo y las búsquedas son operaciones fundamentales en el manejo de datos. Cuando se trabaja con vectores de estructuras en C++, estas operaciones pueden realizarse de manera efectiva para manipular y analizar conjuntos de datos estructurados.
*/