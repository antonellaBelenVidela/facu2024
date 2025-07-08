#include <iostream>
using namespace std;
INT_MAX 100

int factorial(int numero)
{
    // 5! 1*2*3*4*5
    int resultado = 1;
    for (int i = 1; i < numero; i++)
    {
        resultado = resultado * i;
    }
    return resultado;
    
}

int main()
{

    int tamanio = 3;
    int numero; 
    
    int VEC[100];
    int FACT[100];

    cout << "Ingrese el tamaño del vector: " << endl;
    cin >> tamanio;

    int VEC[tamanio];
    int FACT[tamanio];

    for (int i = 0; i < tamanio; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        VEC[i] = numero;
    }

    for (int i = 0; i < n; i++)
    {
        FACT[i] = factorial(VEC[i]);

        //mostras en el mismo for
    }

    //hacemos otro for para imrpimir todo de una 
    cout << endl << endl << "FACTORIAL = { ";
    
    for (int i = 0; i < n; i++)
    {
        cout << FACT[i] << " , ";
    }

    cout << "}";
    

    system("pause");
    return 0;
}