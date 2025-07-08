#include <iostream>
using namespace std;

void mostrarSin(int vec[], int tam, int x)
{
    int posicion = -1;
    int encontrado = 0;

    for (int i = 0; i < tam; i++)
    {
        if (vec[i] == x)
        {
            posicion = i;
            encontrado ++;
        }
    }
    
    if (encontrado >= 1)
    {
        for (int i = 0; i < tam; i++)
        {
            if (i != posicion)
            {
                cout << vec[i] << " - ";
            }
        }
    }
    else
    {
        cout << "El numero pedido no estaba en el vector" << endl;
    }
}

int main()
{
    int vec[5] = { 1,4,3,7,9};

   int x = 3;

    mostrarSin(vec, 5, x);
}
