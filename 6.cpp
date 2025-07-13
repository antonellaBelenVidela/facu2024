#include <iostream>
using namespace std;

/*
6) Dadas dos fechas informar cual es la más reciente. Determine cuáles serían los datos de entrada y las leyendas
a informar de acuerdo al proceso solicitado.
*/
int main () 
{
    int dayf1;
    int monthf1;
    int yearf1;
    int date1;

    int dayf2;
    int monthf2;
    int yearf2;
    int date2;

    cout << "DATE 1:" << endl;

    cout << "DAY: ";
    cin >> dayf1;

    cout << "MONTH: ";
    cin >> monthf1;

    cout << "YEAR: ";
    cin >> yearf1;

    cout << endl << "DATE 2:" << endl;

    cout << "DAY: ";
    cin >> dayf2;

    cout << "MONTH: ";
    cin >> monthf2;

    cout << "YEAR: ";
    cin >> yearf2;

    date1 = ((yearf1*10000)+(monthf1*100)+dayf1);
    date2 = ((yearf2*10000)+(monthf2*100)+dayf2);

    if (date1 > date2)
    {
        cout << endl <<  "LA 1ER FECHA (" << dayf1 << "/" << monthf1 << "/" << yearf1 << ") ES LA MAS RECIENTE!" << endl;
    }
    else
    {
        cout << endl << "LA 2DA FECHA (" << dayf2 << "/" << monthf2 << "/" << yearf2 << ") ES LA MAS RECIENTE!" << endl;
    }

 system("pause");
 return 0;
}