/*Ingresar un valor entero N (< 20). A continuación ingresar un conjunto VEC de N componentes.
A partir de este conjunto generar otro FACT en el que cada elemento sea el factorial del elemento
homólogo de VEC. Finalmente imprimir ambos vectores a razón de un valor de cada uno por
renglón*/

#include <iostream>
using namespace std;

int factorial(int numero)
{
    // 5! = 1x2x3x4x5
    int resultado = 1;
    for (int i = 1; i <= numero; i++)
    {
        resultado = resultado * i;
    }

    return resultado;
}

int main()
{
    int N;
    cout << "Ingrese el tamanio del vector: ";
    cin >> N;

    int numero;
    int VEC[N], FACT[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> numero;

        VEC[i] = numero;
    }

    for (int i = 0; i < N; i++)
    {
        FACT[i] = factorial(VEC[i]);

        cout << "El factorial de: " << VEC[i] << " es: " << FACT[i] << endl;
    }

    return 0;
}