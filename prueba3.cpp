#include <iostream>
#include <string>
using namespace std;

int main()
{
    int entero;
    double flotante;
    string cadena;

    cout << "Ingrese un número entero: ";
    cin >> entero;

    cout << "Ingrese un número flotante: ";
    cin >> flotante;

    cout << "Ingrese una cadena de texto: ";
    cin.ignore(); // Ignorar el salto de línea anterior
    getline(cin, cadena);

    cout << "Número entero: " << entero << endl;
    cout << "Número flotante: " << flotante << endl;
    cout << "Cadena ingresada: " << cadena << endl;

    system("pause");
    return 0;
}