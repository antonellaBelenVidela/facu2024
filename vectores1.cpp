#include <iostream>
using namespace std;

/*
1. Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual las mismas
contengan los primeros números naturales pares e imprimirlo.
*/

bool esPar (int numero)
{
    bool numeroPar = false;
    if (numero % 2 == 0)
    {
        numeroPar = true;
        return numeroPar;
    }
    else
    {
        numeroPar = false;
        return numeroPar;
    }
}

int main () 
{
    int n = 5 // 5 para probar pero deberia ser 25;
    int contador = 0;
    int vector[n];

    // n < 25 , guardar en vector primeros num naturales pares 
/*
    for (int i = 0; i < (n*2); i++)  // porque si son los pares
    {
        // cambio i por un contador para no dejar posiciones del vector vacias
        if (esPar(i))
        {
            vector[contador] = i;
            contador ++;
        }
        
    }
    */

    // cout << "..........." << endl;

    //otra forma de hacerlo
    for (int j = 0; j < n; j++)
    {
        cout << "Pos " << j << ": ";
        vector[j] = contador;
        cin >> vector[j];
        contador ++;
    }

    cout << "..........." << endl;


    //e imprimirlos
    for (int j = 0; j < n; j++)
    {
        if (esPar(j))
        {
            cout << vector[j] << " - ";
        }
        
    }
    
 system("pause");
 return 0;
}