#include <iostream>
using namespace std;

float FuncionQuintaParte(int valor)
{
    return (float)valor/5;
}

float FuncionSeptimaParte(int valorQuintaParte)
{
    return (float)valorQuintaParte/7;
}

float FuncionResto(int valor)
{
    return valor % 5;
}

int main () 
{
    int valor; 
    int valorQuintaParte;

    cout << "Valor: ";
    cin >> valor;

    valorQuintaParte = FuncionQuintaParte(valor);

    cout << "QUINTA PARTE: " << FuncionQuintaParte(valor) << "." <<endl;
    cout << "RESTO QUINTA PARTE: " << FuncionResto(valor) << "." << endl;
    cout << "SEPTIMA PARTE DE LA QUINTA PARTE: " << FuncionSeptimaParte(valorQuintaParte) << "." <<endl;
 
 system("pause");
 return 0;
}