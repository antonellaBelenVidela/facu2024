#include <iostream>
using namespace std;

// FUNCION: DEVUL¿ELVE ALGO
int suma(int n1, int n2)
{
    return n1 + n2;
}

//PROCEDIMIENTO: HACE ALGO Y NO DEVUELVE NADA
void imprimirMensaje(string mensaje)
{
    cout << mensaje << endl;
}

int main () 
{
    int numero1 = 5, numero2= 3;

    string mensaje = "Hola, cómo estas?";

    imprimirMensaje(mensaje);

    cout << suma(numero1, numero2) << endl;

system("pause");
 return 0;
}

//cuando lo paso por referancia le paso la variable, por lo que puede ser modificada &
//sobreescribe el main. ej un acumulador

// por parametro

/*

#include <iostream>
using namespace std;

// FUNCION: DEVUL¿ELVE ALGO
int suma(int &n1, int &n2)
{
    return n1 + n2;
}

//PROCEDIMIENTO: HACE ALGO Y NO DEVUELVE NADA
void imprimirMensaje(string mensaje)
{
    cout << mensaje << endl;
}

int main () 
{
    int numero1 = 5, numero2= 3;

    string mensaje = "Hola, cómo estas?";

    imprimirMensaje(mensaje);

    cout << suma(numero1, numero2) << endl;

system("pause");
 return 0;
}

*/