/*Dadas dos fechas informar cual es la más reciente. Determine cuáles serían los datos de entrada y las leyendas a informar de acuerdo al proceso solicitado.*/

#include <iostream>
using namespace std;

int main () {
    // AAAAMMDD
    int fecha1 = 0, fecha2 = 0;
    string nombre1, nombre2;

    cout << "Ingrese un nombre: "<<endl;
    cin >> nombre1;
    cout << "Ingrese su fecha de nacimiento: "<<endl;
    cin >> fecha1;

    cout << "Ingrese otro nombre: "<<endl;
    cin >> nombre2;
    cout<<"Ingrese su fecha de nacimiento: " << endl;
    cin >> fecha2;

    if (fecha1 > fecha2) 
    {
        cout << "La fecha 1: "<< (fecha1/10000) << "/" << ((fecha1 % 10000)/100) << "/" << (fecha1 % 100) << " es mas reciente que la fecha 2 (por lo tanto " << nombre1 << " es mas chica que " << nombre2 << "." << endl;
    } 
    else if (fecha2 > fecha1) 
    {
        cout << "La fecha 2:" << (fecha2/10000) << "/" << ((fecha2 % 10000)/100) << "/" << (fecha2 % 100) << " es mas reciente que la fecha 1 (por lo tanto " << nombre2 << " es mas chica que " << nombre1 << "." << endl;
    } 
    else 
    {
        cout << "La fechas de nacimiento de " << nombre1 << " y " << nombre2 << " son iguales." << endl;
    }

    system("pause");
    return 0;
}