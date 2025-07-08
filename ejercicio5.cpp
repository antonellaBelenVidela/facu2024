/*
Ej. MI-5
Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe cuál es el mayor entre ellos.
*/

#include <iostream>
using namespace std;

int main () 
{

    int numero1, numero2;
    cout << "Ingrese el primer numero: "<<endl;
    cin >> numero1;

    cout << "Ingrese el segundo numero: "<<endl;
    cin >> numero2;

    /*
    
    if (numero1==numero2) 
    {
        cout<<"Los numeros son iguales." << endl;
    } 
    else 
    {
       if (numero1>numero2) 
        {
            cout << "El numero1 es mayor al numero2" << endl;
        } 
        else 
        {
            cout << "El numero2 es mayor al numero1" << endl;
        }
    }
    
    */

    if (numero1 > numero2) 
    {
        cout << "El numero 1 es mayor al numero 2." << endl;
    }
    else if (numero2>numero1) 
    {
        cout << "El numero 2 es mayor al numero 1." << endl;
    } 
    else 
    {
        cout << "Los numeros son iguales" << endl;
    }

    system("pause");
    return 0;
}