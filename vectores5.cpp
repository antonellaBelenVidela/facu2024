/*Ingresar un valor entero N (< 30). A continuación ingresar un conjunto UNO y luego otro
conjunto DOS, ambos de N componentes. Generar e imprimir otro conjunto TRES intercalando los
valores de posición impar de DOS y los valores de posición par de UNO.
*/

#include <iostream>
using namespace std;

bool esPar(int numero)
{
    return numero % 2 == 0;
}

int main()
{
    int N;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    int UNO[N], DOS[N], numero;

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese un numero (VEC1): ";
        cin >> numero;

        UNO[i] = numero;

        cout << "Ingrese otro numero (VEC2): ";
        cin >> numero;

        DOS[i] = numero;
    }

    int TRES[N];

    for (int i = 0; i < N; i++)
    {
        if (esPar(i))
        {
            TRES[i] = UNO[i];
        }
        else
        {
            TRES[i] = DOS[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << TRES[i] << endl;
    }

    return 0;
}