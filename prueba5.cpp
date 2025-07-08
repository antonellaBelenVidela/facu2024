#include <iostream>
using namespace std;

int main()
{
    int edad;
    string nombre;
    
    cout << "Ingrese su nombre y edad: ";
    cin >> nombre >> edad;

    cout << "Hola, " << nombre << ". Tienes " << edad << " años." << endl;

    system("pause");
    return 0;
}