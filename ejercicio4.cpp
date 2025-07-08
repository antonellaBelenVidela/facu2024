/*
Ej. MI-4: A partir de un valor entero ingresado por teclado, se pide informar:
a) La quinta parte de dicho valor
b) El resto de la división por 5
c) La séptima parte del resultado del punto a)
*/

#include <iostream>
using namespace std;

int main () 
{
    int numero;
    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    // A
    float quintaParte = (float)numero / 5;
    cout << "La quinta parte del numero es: " << quintaParte << endl;

    // B
    float resto = numero % 5;
    cout << "El resto de la division por 5 es: " << resto << endl;

    // C
    float septimaParte = quintaParte / 7;
    cout << "La septima parte del punto A es: " << septimaParte << endl;

    system("pause");
    return 0;
}