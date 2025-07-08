/*
Ej. MI-8: Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir una leyenda según sea:
equilátero, isósceles o escalenos.
*/

#include <iostream>
using namespace std;

int main () 
{
    float l1= 0;
    float l2 = 0;
    float l3 = 0;

    cout << "Ingrese medida Lado 1: ";
    cin >> l1;

    cout << "Ingrese medida Lado 2: ";
    cin >> l2;

    cout << "Ingrese medida Lado 3: ";
    cin >> l3;

    if ((l1 == l2)&&(l2==l3))
    {
        cout << "EQUILATERO" << endl;
    }
    else if ((l1 == l2)&&((l3 != l1)&&(l3 != l2))) || (((l2 == l3 )))
    {
        cout << "ISOSCELES" << endl;
    }
    
    
    system("pause");
    return 0;
}