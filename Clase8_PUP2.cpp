#include <iostream>
using namespace std;
#define DIAS_MES 31

void leer(string mensaje, int &valor) {
    cout << mensaje;
    cin >> valor;
    return;
}

void leer(string mensaje, float &valor) {
    cout << mensaje;
    cin >> valor;
    return;
}

void imprimirVtas(float vtas[], int cant) {
    for (int i = 0; i < cant; i++)
    {
        cout << "El dia " << i + 1 << " se vendio: $ " << vtas[i]  << "La venta mas grande fue de $" << ? << endl;
    }
}

int main () {

 float ventasDiarias[DIAS_MES] = {0};

    int dia;
    leer("Ingrese el dia de la venta: ", dia);
    while (dia > 0)
    {
        float vta;
        leer("Ingrese la venta: ", vta);
        ventasDiarias[dia - 1] += vta;

        leer("Ingrese el dia de la venta: ", dia);
    }

    imprimirVtas(ventasDiarias, DIAS_MES);
    

system("pause");
 return 0;
}