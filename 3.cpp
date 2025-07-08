#include <iostream>
using namespace std;

/* 3) Dada un número entero de la forma (AAAAMMDD), que representa una fecha valida mostrar el dia, mes y
año que representa. 

AAAAMMDD
20031213
*/

int main()
{
    int day, month, year, date;

    cout << "DATE de la forma (AAAAMMDD): ";
    cin >> date;

    day = date % 100;
    month = ((date % 10000) / 100);
    year = date / 10000;


    cout << "DAY: " << day << endl;
    cout << "MONTH: " << month << endl;
    cout << "YEAR: " << year << endl;

    return 0;
}