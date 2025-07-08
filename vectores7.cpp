/*Ingresar un valor entero N (< 15). A continuación ingresar un conjunto DATO de N elementos.
Generar otro conjunto de dos componentes MEJORDATO donde el primer elemento sea el mayor
valor de DATO y el segundo el siguiente mayor (puede ser el mismo si está repetido). Imprimir el
conjunto MEJORDATO con identificación.*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    int DATO[N], MEJORDATO[2], numero;

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        DATO[i] = numero;
    }

    MEJORDATO[0] = DATO[0];
    MEJORDATO[1] = DATO[1];

    for (int i = 1; i < N; i++)
    {
        if (DATO[i] >= MEJORDATO[0])
        {
            MEJORDATO[1] = MEJORDATO[0];
            MEJORDATO[0] = DATO[i];
        }
        else if (DATO[i] > MEJORDATO[1])
        {
            MEJORDATO[1] = DATO[i];
        }
    }

    cout << "El maximo: " << MEJORDATO[0] << " el segundo maximo: " << MEJORDATO[1];

    return 0;
}