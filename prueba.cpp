#include <iostream>
using namespace std;

int main () 
{
    int numero = 12345;
// Imprimir número en formato hexadecimal
cout << "El número en hexadecimal es: " << hex << numero << endl;
// Restaurar formato a decimal
cout << "El número en decimal es: " << dec << numero << endl;

system("pause");
 return 0;
}