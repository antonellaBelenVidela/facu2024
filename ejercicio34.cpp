#include <iostream>
using namespace std;

//Ej. MI-34: Desarrollar una función tal que dado un número entero positivo calcule y retorne su factorial.

int factorial(int numero)
{
    //5! =1*2*3*4*5
    int resultado = 1;

    for (int i = 1; i < numero; i++)
    {
        resultado =resultado * 1;
    }
    return resultado;
    
}

int main () 
{
    int numero, int cantMultiplosDe3;
    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    cout << "Su factorial es: " << factorial(numero) << "." << endl;
 
    system("pause");
    return 0;
}