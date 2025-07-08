#include <iostream>
using namespace std;

/*Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. Si el último
elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los
demás.*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Ingrese el tamanio del vector menor a 30: ";
    cin >> N;

    int vector[N];
    int numero;
    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        vector[i] = numero;
    }

    if (vector[N - 1] < 10)
    {
        for (int i = 0; i < N; i++)
        {
            if (vector[i] < 0)
            {
                cout << vector[i] << endl;
            }
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            if (vector[i] > 0)
            {
                cout << vector[i] << endl;
            }
        }
    }

    return 0;
}

/*

REVISAAAR

void PositivosNegativos(int &n, int &numero, int vectorPositivos[], int vectorNegativos[], int &contPos, int &contNeg)
{

    if (numero > 0)
    {
        for (int i = 0; i < n; i++)
        {
            vectorPositivos[i] = numero;
            contPos ++;
        }
    }
    else
    {
        for (int j = 0; j < n; j++)
        {
            vectorNegativos[j] = numero;
            contNeg ++;
        }
    }
}

int main()
{
    2. Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. Si el último
    elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los
    demás.

    int n;

    int numero;

    cout << "Ingresa valor entero < 30: ";
    cin >> n;

    int vector[n];

    int vectorPositivos[n];
    int vectorNegativos[n];

    int contPos = 0;
    int contNeg = 0;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "° elemento: ";
        cin >> vector[i];
    }

    cout << "Muestro conjunto:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vector[i] << ", ";
    }

    cout << endl;

    PositivosNegativos(n, numero, vectorPositivos, vectorNegativos, contPos, contNeg);

    Si el último elemento del conjunto tiene un valor menor que 10 imprimir los negativos
if (vector[n - 1] < 10)
{
    for (int i = 0; i < contPos; i++)
    {
        cout << vectorPositivos[i] << ", ";
    }
}
else
{
    for (int i = 0; i < contNeg; i++)
    {
        cout << vectorNegativos[i] << ", ";
    }
}

system("pause");
return 0;
}

*/