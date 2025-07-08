#include <iostream>
using namespace std;

/*
Ej. MI-2: Dada una terna de números naturales que representan al día, al mes y al año de una determinada
fecha informarla como un solo número natural de 8 dígitos con la forma (AAAAMMDD).
*/


int main () 
{
   int dia, mes, anio, fecha;

    cout << "Ingrese un dia: " << endl;
    cin >> dia;
    cout << "Ingrese un mes: " << endl;
    cin >> mes;
    cout << "Ingrese un anio: " << endl;
    cin >> anio;

    fecha = (anio * 10000) + (mes * 100) + dia;

    cout << "La fecha unificada es: " << fecha << endl;

    system("pause");
    return 0;
}
