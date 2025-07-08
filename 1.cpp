#include <iostream>
using namespace std;

int main()
{
    
    // 1) Dados dos valores enteros A y B, informar la suma, la resta y el producto.

    int A, B, resultado;

    cout << "Tirame un numero! ";
    cin >> A;

    cout << "Tirame otro numero! ";
    cin >> B;

    cout << " Voy a realizar la SUMA!! " << endl;
    resultado =  A + B;
    cout << A << "+" << B << "= " << resultado << endl << endl;

    cout << " Voy a realizar la RESTA!! " << endl;
    resultado =  A - B;
    cout << A << "-" << B << "= " << resultado << endl << endl;

    cout << " Voy a realizar el PRODUCTO!! " << endl;
    resultado =  A * B;
    cout << A << "x" << B << "= " << resultado << endl << endl;


    return 0;
}
