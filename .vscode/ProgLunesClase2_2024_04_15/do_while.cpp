#include <iostream>

using namespace std;
int main()
{

    int peso_unitario;
    do
    {
        cout << "Ingrese el numero: ";
        cin >> peso_unitario;
    }     while (peso_unitario %2==0 );
    return 0;
}

