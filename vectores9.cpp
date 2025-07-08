/*Ingresar un valor entero N (< 40). A continuación ingresar un conjunto A y luego otro conjunto B
ambos de N elementos. Generar un arreglo C donde cada elemento se forme de la siguiente
forma: C[1] = A[1]+B[N] C[2] = A[2]+B[N-1]*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    int A[N], B[N], numero;

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        A[i] = numero;

        cout << "Ingrese un numero: ";
        cin >> numero;

        B[i] = numero;
    }

    int C[N];

    for (int i = 0; i < N; i++)
    {
        C[i] = A[i] + B[N - 1 - i];
    }

    return 0;
}