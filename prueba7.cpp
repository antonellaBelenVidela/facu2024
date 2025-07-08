#include <iostream>
#include <string>
using namespace std;

int main()
{
    string miString = "Hola Mundo";
    // Buscar una subcadena
    size_t encontrado = miString.find("Mundo");
    if (encontrado != string::npos)
    {
        cout << "Encontrado en la posición: " << encontrado << endl;
    }
    // Extraer una subcadena
    string subcadena = miString.substr(0, 4);
    cout << "Subcadena: " << subcadena << endl;
    // Reemplazar una subcadena
    miString.replace(5, 5, "amigos");
    cout << "Nuevo string: " << miString << endl;


    system("pause");
    return 0;
}