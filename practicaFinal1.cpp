/*
1) Realizar una función llamada encuentraNumeroMayor (no hace falta escribir el main), 
que recibe un vector con números enteros, el tamaño de ese vector y un número X. La 
función deberá devolver true si ese número recibido es mayor a algún numero del 
vector multiplicado por 2. (realizarlo de la manera que lo considere más eficiente).
*/

#include <iostream>
using namespace std;

bool encuentraNumeroMayor(int vecNumsEnt[], int tam, int numX)
{
    int contador = 0;
    bool resultado = false;

    while ((contador < tam) or (resultado == true))
    {
        if ( numX > (vecNumsEnt[contador]*2))
        {
            resultado = true;
            return resultado;
        }
        else
        {
            contador ++;
        }
    }

    return resultado;
}

int main () 
{
    int tamanio = 6;
    int vec[tamanio] = {11, 4, 7, 3, 8, 9};  // x > 2, 8, 14, 4, 16, 18, 10 ? 
    int x = 0;

    bool resultado = false;

    cout << "Ingrese numero x : ";
    cin >> x;

    resultado = encuentraNumeroMayor(vec, tamanio,x);

    if (resultado == false)
    {
        cout << "El número recibido NO es mayor a algún numero del vector multiplicado por 2. ";
    }
    else
    {
        cout << "El número recibido ES mayor a algún numero del vector multiplicado por 2. ";
    }
    
    

system("pause");
 return 0;
}