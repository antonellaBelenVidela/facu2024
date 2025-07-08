#include <iostream>
using namespace std;

/* 2) Dada una terna de números naturales que representan al día, al mes y al año de una determinada
fecha informarla como un solo número natural de 8 dígitos con la forma (AAAAMMDD).*/

int main()
{
    int day, month, year, fecha;

    cout << "DAY: ";
    cin >> day;

    cout << "MONTH: ";
    cin >> month;

    cout << "YEAR: ";
    cin >> year;

    fecha = day+(month*100)+(year*10000);

    cout << "Numero natural de 8 digitos con la forma (AAAAMMDD): " << fecha;

    return 0;
}