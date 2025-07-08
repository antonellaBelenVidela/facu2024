#include <iostream>
#include <string>
#include <cstring> // Para strcpy
#include <cstdlib> // Para limpiar la consola
#include <algorithm> // Para std::find

#define MAX_LENGTH 8
#define VECTOR_SIZE 20

// Definición de la estructura
struct Datos {
    char patentes[VECTOR_SIZE][MAX_LENGTH + 1]; // +1 para el carácter nulo de terminación de la cadena
    int horaEntrada[VECTOR_SIZE];
    char tipoVehiculo[VECTOR_SIZE];
};

using namespace std;

void limpiar(void)
{
    // Limpiar la consola
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

void mostrarStock(struct Datos datos)
{
    // Imprimir los datos de los vehículos
    for (int i = 0; i < VECTOR_SIZE; ++i) {
        if (datos.patentes[i][0] != '\0') {
            cout << "Patente: " << datos.patentes[i] << ", Hora de ingreso: " << datos.horaEntrada[i] << ", Tipo de vehiculo: " << datos.tipoVehiculo[i] << endl;
        }
    }
}

void cargarDatosIniciales(struct Datos &datos)
{
    // Inicialización de algunos datos de ejemplo
    const char* patentesEjemplo[VECTOR_SIZE] = {"ABC123","ZXC123","QWE123",""};
    int horaEntradaEjemplo[VECTOR_SIZE] = {8, 9, 10, 0}; // Aquí inicializamos con 0 para indicar lugares vacíos
    char tipoVehiculoEjemplo[VECTOR_SIZE] = {'C', 'A', 'V', '\0'}; // '\0' para indicar lugares vacíos

    // Copiamos los datos de ejemplo a la estructura datos
    for (int i = 0; i < VECTOR_SIZE; ++i) {
        strcpy(datos.patentes[i], patentesEjemplo[i]);
        datos.horaEntrada[i] = horaEntradaEjemplo[i];
        datos.tipoVehiculo[i] = tipoVehiculoEjemplo[i];
    }
}

int main() {
    struct Datos datos;
    int horaActual = 0;

    limpiar();

    // Cargamos los datos iniciales
    cargarDatosIniciales(datos);

    string patenteActual;
    char tipoVehiculoActual;

    // Ingreso de la patente y hora actuales
    cout << "Ingrese la patente buscada: ";
    cin >> patenteActual;
    cout << "Ingrese la hora actual: ";
    cin >> horaActual;

    // Búsqueda de la patente y obtención del índice
    int index_buscado = -1;
    for (int i = 0; i < VECTOR_SIZE; ++i) {
        if (strcmp(datos.patentes[i], patenteActual.c_str()) == 0) {
            index_buscado = i;
            break;
        }
    }

    // Si la patente fue encontrada, procedemos a evaluar si debe retirar el vehículo
    if (index_buscado != -1) {
        // Evaluamos si debe retirar el vehículo
        if (datos.horaEntrada[index_buscado] < horaActual) {
            // Eliminamos la entrada encontrada
            strcpy(datos.patentes[index_buscado], "");
            datos.horaEntrada[index_buscado] = 0;
            datos.tipoVehiculo[index_buscado] = '\0';

            cout << "Ya le traemos su vehiculo.\n";
        } else {
            cout << "Su vehiculo no esta listo para retirarse.\n";
        }
    } else {
        // Si el vehículo no está en el array y hay lugares vacíos disponibles, agregamos la patente y la hora de entrada
        for (int i = 0; i < VECTOR_SIZE; ++i) {
            if (datos.patentes[i][0] == '\0') {
                strcpy(datos.patentes[i], patenteActual.c_str());
                datos.horaEntrada[i] = horaActual;
                // En este punto, podríamos solicitar al usuario que ingrese el tipo de vehículo
                // pero por simplicidad, lo dejaremos como un valor predeterminado ('N')
                datos.tipoVehiculo[i] = 'N';

                cout << "Se ha estacionado su vehículo.\n";
                break;
            }
        }
    }

    // Mostramos el stock después de las operaciones
    mostrarStock(datos);

    return 0;
}
