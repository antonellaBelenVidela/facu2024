#include <iostream>
using namespace std;

IngresarCantJugadores(int cantidadJugadores)
{
    cout << "Ingresar Cantidad de Jugadores (>=2): ";
    cin >> cantidadJugadores;

    while (cantidadJugadores <2)
    {
        cout << "Vuelve a intentarlo! (Recuerda que la cantidad de jugadores debe ser mayor o igual a 2): " ;
        cin >> cantidadJugadores; 
    }

    return cantidadJugadores;
    
}

int CalcularPuntosJugador(int distancia1, int distancia2, int distancia3, int &contadorTirosAlCentro)
{
    int puntajeJugador = 0;
    int distancia = 0;

    contadorTirosAlCentro = 0;

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            distancia = distancia1;
        }
        else if (i == 1)
        {
            distancia = distancia2;
        }
        else
        {
            distancia = distancia3;
        }
        
        if (distancia == 0)
        {
            puntajeJugador += 500;
            contadorTirosAlCentro ++;
        }
        else if(distancia<= 10)
        {
            puntajeJugador+= 250;
        }
        else if ((distancia >= 11) && (distancia <= 50))
        {
            puntajeJugador += 100;
        }
        else
        {
            puntajeJugador += 0; // fuera del tablero
        }
    }

    return puntajeJugador;

}

void CalcularGanador(int puntajeJugador, int &mayorPuntaje, string nombreJugador, string &nombreJugadorMayorPuntaje, int contadorTirosAlCentro, int &contadorTirosAlCentroGanador)
{
    if (puntajeJugador > mayorPuntaje)
    {
        mayorPuntaje = puntajeJugador;
        nombreJugadorMayorPuntaje = nombreJugador;
        contadorTirosAlCentroGanador = contadorTirosAlCentro;
    }  
}

int main () 
{
    int cantidadJugadores = 0; 

    int contadorTirosAlCentro = 0;
    int contadorTirosAlCentroGanador = 0;

    int distancia1 = 0, distancia2 = 0, distancia3 = 0;

    int puntajeJugador = 0;
    int mayorPuntaje = 0;

    string nombreJugador;
    string nombreJugadorMayorPuntaje;

    cout << "BIENVENIDOS A - TIRO AL BLANCO -" << endl;

    cantidadJugadores = IngresarCantJugadores(cantidadJugadores);

    for (int i = 0; i < cantidadJugadores; i++)
    {

        cout << "Nombre del Jugador: ";
        cin >> nombreJugador;

        cout << "--->Distancia del Centro 1er Tiro: ";
        cin >> distancia1;

        cout << "--->Distancia del Centro 2do Tiro: ";
        cin >> distancia2;

        cout << "--->Distancia del Centro 3er Tiro: ";
        cin >> distancia3;

        cout << endl;

        puntajeJugador = CalcularPuntosJugador(distancia1, distancia2, distancia3, contadorTirosAlCentro);
        CalcularGanador(puntajeJugador, mayorPuntaje, nombreJugador, nombreJugadorMayorPuntaje, contadorTirosAlCentro, contadorTirosAlCentroGanador);

    }

    cout << endl << "El Ganador del Torneo del Tiro al Blanco es " << nombreJugadorMayorPuntaje << " con un total de " << mayorPuntaje << " puntos, y una cantidad total de tiros al centro de " << contadorTirosAlCentroGanador << "." << endl;
    
 
 system("pause");
 return 0;
}