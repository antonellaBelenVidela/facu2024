/*
Ej. MI-3: Dada un número entero de la forma (AAAAMMDD), que representa una fecha valida mostrar el dia, mes y año que representa.
*/

#include <iostream>
using namespace std;

int main () 
{
    int AAAAMMDD = 0;
    int day = 0;
    int month = 0;
    int year = 0;

    cout << "Ingrese una fecha valida en el formato (AAAAMMDD)" << endl;
    cin >> AAAAMMDD;

    day = AAAAMMDD % 100;
    month = ((AAAAMMDD % 10000) / 100);
    year = AAAAMMDD / 10000;

    cout << "La fecha ingresada pertenece al dia " << day << ", del mes " << month << ", del año " << year << "." << endl;

    system("pause");
    return 0;
}