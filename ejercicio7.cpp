/*
Ej. MI-7: Dado tres valores determinar e imprimir una leyenda según sea: “Forman triangulo” o “No forman triángulo”.
*/

// A + B es mayor q C 
//        y
// A + C es mayor q B 
//        y
// B + C es mayor q A


// entradas: valor1, valor2, valor3
// salida: forman triangulo, o , no forman triangulo

// la suma de dos de sus lados debe ser mayor a la longitud del tercer lado


#include <iostream>
using namespace std;

int main () 
{
    int ladoA = 0;
    int ladoB = 0;
    int ladoC = 0;

    cout << "FORMAN TRIANGULO O NO FORMAN TRINGULO?" << endl;

    cout << "Lado A: ";
    cin >> ladoA;

    cout << "Lado B: ";
    cin >> ladoB;

    cout << "Lado C: ";
    cin >> ladoC;

    if ((((ladoA + ladoB) > ladoC) | ((ladoB + ladoC)> ladoA) | ((ladoA + ladoC)> ladoB)))
    {
        cout << "Forman Triangulo!" << endl;
    }
    else
    {
        cout << "No forman triangulo!" << endl;
    }
    

    system("pause");
    return 0;
}