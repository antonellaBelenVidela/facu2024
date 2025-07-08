#include <iostream>
using namespace std;

/*
5) Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe cuál es el mayor entre ellos.
*/

int main()
{
    int val1 = 0;
    int val2 = 0;

    cout << "ESPECIFIQUE VALOR 1: ";
    cin >> val1;

    cout << "ESPECIFIQUE VALOR 2: ";
    cin >> val2;

    if (val1 > val2)
    {
        cout << "EL 1ER VALOR (" << val1 << ") ES EL MAYOR.";
    }
    else if (val1 == val2)
    {
        cout << "AMBOS VALORES SON IGUALES.";
    }
    else
    {
        cout << "EL 2DO VALOR (" << val2 << ") ES EL MAYOR.";
    }

    system("pause");
    return 0;
}