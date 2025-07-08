#include <iostream>
#include <string>
#include <cstring> // Para strcpy
#include <cstdlib> // Para limpiar la consola
#include <algorithm> // Para std::find

#define MAX_LENGTH 8  // caracteres en patente
#define VECTOR_SIZE 10// lugares en el estacionamiento

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
    limpiar();
    // Imprimir los datos de los vehículos
    cout << "Datos actuales del estacionamiento:\n";
    for (int i = 0; i < VECTOR_SIZE; ++i) {
        if (datos.patentes[i][0] != '\0') {
            cout << "Patente: " << datos.patentes[i] << ", Hora de ingreso: " << datos.horaEntrada[i] << ", Tipo de vehiculo: " << datos.tipoVehiculo[i] << endl;
        }
    }
}

int main() {
    struct Datos datos;
    string patenteActual;
    int horaActual;
    char tipoVehiculoActual;
    int index_buscado = -1;
    int index_vacio = -1;
    float caja=0;
    limpiar();

    cout << "Cargamos los datos iniciales\n";
    const char* patentesEjemplo[VECTOR_SIZE] = {"ABC123","ZXC123","QWE123","ABC123","","","","","",""};
    int horaEntradaEjemplo[VECTOR_SIZE] = {8, 9, 10, 12, 0, 0, 0, 0, 0, 0 }; // Aquí inicializamos con 0 para indicar lugares vacíos
    char tipoVehiculoEjemplo[VECTOR_SIZE] = {'C', 'A', 'V', 'M', '\0', '\0', '\0', '\0', '\0', '\0'}; // '\0' para indicar lugares vacíos

    // Copiamos los datos de ejemplo a la estructura datos
    for (int i = 0; i < VECTOR_SIZE; ++i) {
        strcpy(datos.patentes[i], patentesEjemplo[i]);
        datos.horaEntrada[i] = horaEntradaEjemplo[i];
        datos.tipoVehiculo[i] = tipoVehiculoEjemplo[i];
    }
    for (int i = 0; i < VECTOR_SIZE; ++i) {
        if (datos.patentes[i][0] != '\0') {
            cout << "Patente: " << datos.patentes[i] << ", Hora de ingreso: " << datos.horaEntrada[i] << ", Tipo de vehiculo: " << datos.tipoVehiculo[i] << endl;
        }
    }
    cout << "Bucle principal\n";
    //
    while (true) {
        limpiar();
        mostrarStock(datos);
        // Ingreso de la patente (en mayúsculas)

        cout << "\nIngrese la patente buscada (escriba 'SALIR' para terminar): ";
        cin >> patenteActual;

        // Convertimos la patente ingresada a mayúsculas
        for (size_t i = 0; i < patenteActual.length(); ++i) {
            patenteActual[i] = toupper(patenteActual[i]);
        }

        // Si se escribe "SALIR", terminamos el bucle
        if (patenteActual == "SALIR") {//strcmp
            break;
        }
        // Mostramos los datos actuales
        mostrarStock(datos);
        cout << "\nIngrese la hora actual: ";
        cin >> horaActual;
        index_buscado = -1;
        // chequeo si la patente esta en stock
        for (int i = 0; i < VECTOR_SIZE; ++i) {
            if (datos.patentes[i] == patenteActual) {
                index_buscado = i;
                break;
            }
        }
        // Si la patente fue encontrada, procedemos a eliminarla
        if (index_buscado != -1) {
            // Borramos los datos correspondientes a la patente encontrada

            cout << "El vehículo ha sido eliminado del estacionamiento.\n";
            /*
            si el tipo de vehiculo es una V (camioneta) valor hora 2500
            si el tipo de vehiculo es una C (camion)    valor hora 3500
            si el tipo de vehiculo es una A (auto)      valor hora 2000
            si el tipo de vehiculo es una M (moto)      valor hora 1500
            */

            float tiempoEstacionado = horaActual -  datos.horaEntrada[index_buscado]
            if datos.tipoVehiculo[index_buscado] =='V':
                precioHoraSegunTipoVehiculo == 2500;
            //~ switch case
            cout << "ticket" ,endl;
            /* Patente
             * hora de entrada
             * hora de salida
             * precio x hora
             * total a pagar
             *
             caja+= total a pagar
            */
            strcpy(datos.patentes[index_buscado], "");
            datos.horaEntrada[index_buscado] = 99; // Un valor especial para indicar que está vacío
            datos.tipoVehiculo[index_buscado] = '\0'; // Carácter nulo para indicar que está vacío
        } else {
            // Buscamos un lugar vacío en el estacionamiento
            index_vacio = -1;
            for (int i = 0; i < VECTOR_SIZE; ++i) {
                //                    _________________________es del string el primer caracter
                //                    |
                if (datos.patentes[i][0] == '\0') {
                    //             ^
                    //             |___lugar estacionado (index)



                    index_vacio = i;
                    break;
                }
                /*datos.patentes[i][0] == '\0')
                 * dentro de la estructur
                 *      dentro del vector patentes ----- string el final del string es \0
                 *          dentro tengo hasta 8 caracteres \0 es el ultimo
                 *          check si el el 1er caracter ==\0 ----->>>implica que si el 1ro es el ultimo esta vacio
                 *
                 *
                 * lo lamento no tenemos mas lugar
                 *
                 *
                 * */
            }
            // Si hay un lugar vacío, agregamos el vehículo
            if (index_vacio != -1)  {
                // Solicitamos el tipo de vehículo y verificamos si es válido
                while (true) {
                    cout << "Ingrese el tipo de vehiculo ('M','A','V','C'): ";
                    cin >> tipoVehiculoActual;
                    tipoVehiculoActual = toupper(tipoVehiculoActual); // Convertir a mayúsculas
                    if (tipoVehiculoActual == 'M' || tipoVehiculoActual == 'A' || tipoVehiculoActual == 'V' || tipoVehiculoActual == 'C') {
                        break; // Salir del bucle si es un tipo de vehículo válido
                    } else {
                        cout << "Tipo de vehiculo invalido. Intente de nuevo.\n";
                    }
                }

                // Agregamos el vehículo al estacionamiento
                strcpy(datos.patentes[index_vacio], patenteActual.c_str());
                datos.horaEntrada[index_vacio] = horaActual;
                datos.tipoVehiculo[index_vacio] = tipoVehiculoActual;

                cout << "El vehículo ha sido estacionado.\n";
            } else {
                cout << "No hay lugares disponibles en el estacionamiento.\n";
            }

            // Espera para que el usuario pueda leer el mensaje
            cout << "\nPresione ENTER para continuar...";
            cin.ignore();
            cin.get();
        }
    }
    /*out caja
     *
     *
     *
     */

    return 0;
}