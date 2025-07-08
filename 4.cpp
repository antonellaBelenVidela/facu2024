#include <iostream>
using namespace std;
/*
A partir de un valor entero ingresado por teclado, se pide informar:
a) La quinta parte de dicho valor
b) El resto de la división por 5
c) La séptima parte del resultado del punto a)

*/

int main () 
{
    int valor = 0;
    int quintaParte = 0; 
    int restoDiv = 0;
    int septPart = 0;

    cout << "Ingrese un valor: ";
    cin >> valor;

    quintaParte = valor / 5;
    restoDiv = valor % 5;
    septPart = quintaParte / 7;

    cout << "LA QUINTA PARTE DE " << valor << " ES: " << quintaParte << endl;
    cout << "EL RESTO DE LA DIVISION POR 5 ES: " << restoDiv << endl;
    cout << "LA SEPTIMA PARTE DE LA 5TA PARTE DE " << valor << " ES: " << septPart << endl;

 system("pause");
 return 0;
}