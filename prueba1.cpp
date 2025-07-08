#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double pi = 3.14159;
    // Establecer el ancho de campo y la precisión decimal
    cout << "El valor de pi es: " << fixed << setprecision(2) << pi << endl;

    system("pause");
    return 0;
}