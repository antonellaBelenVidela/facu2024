#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Ingrese un número entero: ";
    if (!(cin >> numero))
    {
        cerr << "Error: Entrada inválida." << endl;
        return 1;
    }
    cout << "El número ingresado es: " << numero << endl;
    system("pause");
    return 0;
}