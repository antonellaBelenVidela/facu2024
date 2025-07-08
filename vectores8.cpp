#include <iostream>
using namespace std;
int main()
{
    int N = 0, acum;
    char choice;
    cout << "Ingrese el tamaño de vector: " << endl;
    cin >> N;
    int GG[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> GG[i];
    }
    cout << "Elegi una opcion para mostrar el vector: " << endl;
    cin >> choice;
    if (choice == 'a')
    {
        for (int i = N - 1; i >= 0; i--)
        {
            cout << GG[i] << endl;
        }
    }
    else if (choice == 'b')
    {
        for (int i = N - 1; i >= 0; i--)
        {
            acum++;
            if (acum == 10)
            {
                cout << endl;
                acum = 0;
            }
            else
            {
                cout << GG[i];
            }
        }
    }
    else
    {
        for (int i = N - 1; i >= 0; i--)
        {
            cout << " posicion: " << i << " numero: " << GG[i];
            acum++;
            if (acum == 5)
            {
                cout << endl;
                acum = 0;
            }
        }
    }
    return 0;
}
