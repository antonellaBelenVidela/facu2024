#include <iostream>
using namespace std;

bool divisionDividendo (int dividendo, int divisor, int &cociente, int &resto) {

    if (divisor == 0) {
        return false;
    }
    cociente = dividendo / divisor;
    resto = dividendo % divisor;
    return true;
}

int main () {
    int divisor, dividendo, c, r;
    cout << "Ingrese el dividendo:" << endl;
    cin >> dividendo;
    cout << "Ingrese el divisor:" << endl;
    cin >> divisor;

    if (divisionDividendo(dividendo, divisor, c, r)) {
        cout << "La division entera es: " << c << endl;
        cout << "El resto de la division es: " << r << endl;

    } else {       
        cout << "No se pudo realizar la division" << endl;
    }

system("pause");
 return 0;
}