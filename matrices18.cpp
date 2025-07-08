#include <iostream>
using namespace std;

int main()
{
    /*
 18. Ingresar un valor N (< 25) y luego por filas una matriz cuadrada CUADRADA de N filas y
 columnas. Desarrollar un programa que determine e imprima:
 */
    int N;

    cout << "Ingresar un valor N (<25): ";
    cin >> N;

    int CUADRADA[N][N] = {0};

    int sumatoriaDiagPrincipal = 0;
    int sumatoriaDiagSecundaria = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "Ingrese numero para la posicion Fila " << i << " Columna " << j << ": ";
            cin >> CUADRADA[i][j];
            /*
            if (i == j)
            {
                sumatoriaDiagPrincipal += CUADRADA[i][j]; 
            }
            */
            sumatoriaDiagPrincipal += CUADRADA[i][i];
            sumatoriaDiagSecundaria += CUADRADA[i][j-1-i];
        }
    }

    // muestro
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << CUADRADA[i][j] << " ";
        }
        cout << endl;
    }
/*
 a) Todos los elementos de la diagonal principal o secundaria según de cual resulte mayor la
 sumatoria de elementos.
*/

if (sumatoriaDiagPrincipal > sumatoriaDiagSecundaria)
{
    for ( i = 0; i < count; i++)
    {
        cout << CUADRADA[i][i] << " - ";
    }
}
else
{
    
}


/*
 b) Los elementos del cuarto (N/2 filas y N/2 columnas) cuya sumatoria resulte mayor
 (considerando que N fuera par).
 */

/*
 c) Los elementos de la triangular superior o inferior dependiendo de cual tenga mayor sumatoria
 de elementos.*/

    system("pause");
 return 0;
}