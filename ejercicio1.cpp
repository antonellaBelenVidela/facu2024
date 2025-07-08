#include <iostream>
using namespace std;

/*
Ej. MI-1 Dados dos valores enteros A y B, informar la suma, la resta y el producto.
*/


int main () 
{
    int A;
    int B;

    cout << "Ingrese el primer numero: " << endl;
    cin >> A;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> B;

    // A
    cout << "La suma de los dos numeros es: " << A+B << endl;

    // B
    cout << "La resta de los dos numeros es: " << A-B << endl;

    // C
    cout << "El producto de los dos numeros es: " << A*B << endl;

    system("pause");
    return 0;
}