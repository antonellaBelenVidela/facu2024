#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double precio = 123.4567;
    // Imprimir precio con formato monetario
    cout << "El precio es: $" << fixed << setprecision(2) << precio << endl;
    return 0;

    system("pause");
    return 0;
}