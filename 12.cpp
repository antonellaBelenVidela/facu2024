/*
Ej. MI-12 Informar los primeros 100 números naturales y su sumatoria
*/

#include <iostream>
using namespace std;

int main () 
{
    int contador = 0;

    for (int i = 1; i <= 100; i++)
    {
        cout << i << ", ";
        contador += i;
    }

    cout << " Sumatoria: " << contador << ".";
        
    system("pause");
    return 0;
}