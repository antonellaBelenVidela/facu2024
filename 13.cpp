/*
Ej. MI-13: Dados N y M números naturales, informar su producto por sumas sucesivas.
*/

#include <iostream>
using namespace std;

int main () 
{
    int N = 0;
    int M = 0;
    int productoPorSumasSuces = 0;

    cout << "Ingrese N (Debe ser numero natural): ";
    cin >> N;
    cout << "Ingrese M: (Debe ser numero natural): ";
    cin >> M;

    if (N == 0 || M == 0)
    {
        productoPorSumasSuces = 0;
    }
    else
    {
        for ( int i = 0; i < M; i++)
        {
            productoPorSumasSuces += N;
        }
    }
    
    cout << "Resultado entre " << N << " x " << M << ": " << productoPorSumasSuces << endl;

    system("pause");
    return 0;
}