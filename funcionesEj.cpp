#include <iostream>
using namespace std;

bool esPar(int numero)
{
    bool resultado;
    
    if (numero % 2 == 0)
    {
        resultado = true;
    }
    else
    {
        resultado =false;
    }

    //Otra forma en 1 sola linea
    //return numero % 2 == 0;
    
}

int main () 
{
    int numero;

    cout << "Ingrese un numero";
    cin >> numero;

    if (esPar(numero) == true)
    {
        cout << "El numero es par." << endl;
    }
    else
    {
        cout << "El numero es impar." << endl;
    }
    
 
    system("pause");
    return 0;
}