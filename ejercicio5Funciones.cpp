#include <iostream>
using namespace std;

void FuncionPidoDatos(int &a, int &b)
{
    cout << "Ingrese el primer numero: "<<endl;
    cin >> a;

    cout << "Ingrese el segundo numero: "<<endl;
    cin >> b;
}

void FuncionEsMayor(int a, int b)
{
    if (a > b) 
    {
        cout << "El 1er numero (" << a << ") es mayor al 2do numero (" << b << ")." << endl;
    }
    else if (b > a) 
    {
        cout << "El 2do numero (" << b << ") es mayor al 1er numero (" << a << ")." << endl;
    } 
    else 
    {
        cout << "Los numeros son iguales" << endl;
    }
}
int main () 
{
    int valor1, valor2;

    cout << " CUAL ES MAYOR?" << endl;
    FuncionPidoDatos(valor1, valor2);
    FuncionEsMayor(valor1, valor2);

 
system("pause");
 return 0;
}