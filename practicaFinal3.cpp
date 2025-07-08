#include <iostream>
using namespace std;

/*
1) Realizar una función llamada estaNumeroTresVeces (no hace falta escribir el main) que 
recibe un vector con números enteros, el tamaño de ese vector y un número X. Esta 
función deberá devolver true si el número X se encontraba al menos 3 veces en el 
vector. En caso contrario, devolverá false. 
*/
bool estaNumeroTresVeces (int vec[], int tam, int numX)
{
    bool respuesta = false;
    int contador = 0;
    int cont3 = 0;

    while ((contador < tam) && (cont3 < 3) )
    {
        if(numX == vec[contador])
        {
            cont3 ++;
        }
        
        contador ++;

        if (cont3 >= 3)
        {
            respuesta = true;
        }
    }
    return respuesta;
}

int main () 
{
    int vec[6] = {4, 6, 7, 4, 1, 4};
    int x;

    cout << "Ingrese x: ";
    cin >> x;

    bool respuesta = estaNumeroTresVeces(vec, 6, x);

    if (respuesta == true)
    {
        cout << "El numero esta al menos tres veces" << endl;
    }
    else
    {
        cout << "El numero está menos de tres veces." << endl;
    }
    
 
 system("pause");
 return 0;
}