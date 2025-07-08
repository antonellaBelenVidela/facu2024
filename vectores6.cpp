/* Ingresar un valor entero N (< 40). A continuación ingresar un conjunto VALOR de N elementos.
Determinar e imprimir el valor máximo y la posición del mismo dentro del conjunto. Si el máximo
no es único, imprimir todas las posiciones en que se encuentra.*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    int VALOR[N], numero;

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        VALOR[i] = numero;
    }

    int maximo = VALOR[0];
    for (int i = 1; i < N; i++)
    {
        if (VALOR[i] > maximo)
        {
            maximo = VALOR[i];
        }
    }

    cout << "Maximo: " << maximo << endl;

    
    
    for (int i = 0; i < N; i++)
    {
        if (maximo == VALOR[i])
        {
            cout << i << endl;
        }
    }

    return 0;
}