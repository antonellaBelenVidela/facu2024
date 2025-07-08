/* Ingresar un valor entero N (< 25). A continuación ingresar un conjunto VEC de N componentes.
Si la suma de los componentes resulta mayor que cero imprimir las de índice impar, sino los otros
elementos.*/

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

    int VEC[N], numero, acum = 0;
    bool resultado = false;

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        VEC[i] = numero;
        acum += VEC[i];
    }

    if (acum > 0)
    {
        for (int i = 1; i < N; i += 2)
        {
            cout << "posicion " << i << ": " << VEC[i] << endl;
        }
    }
    else
    {
        for (int i = 0; i < N; i += 2)
        {
            cout << "posicion " << i << ": " << VEC[i] << endl;
        }
    }

    return 0;
}