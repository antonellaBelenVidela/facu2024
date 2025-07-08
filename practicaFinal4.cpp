#include <iostream>
using namespace std;

/*
2) Un sitio de comercio electrónico nos contrató para realizar un algoritmo basado en sus
requerimientos. Este posee un vector de los productos que vende (son 20
actualmente) y un vector con las compras realizadas por los clientes de esos productos.
(Suponer que todos los vectores vienen cargados y que también sabemos la cantidad
de compras (el tamaño del vector)). Cada uno de ellos tienen la siguiente estructura:

Compra (ordenado por nombreCompletoCliente)
- IdProducto (int)
- CantidadPedida (int)
- nombreCompletoCliente (string)

Producto (ordenado por idProducto)
- idProducto (int (1,2,3...20))
- descripcion (string)
- precioUnitario (float)

Se pide:
- Emitir un listado ordenado por nombreCompletoCliente con el siguiente diseño:
Nombre del cliente: XXXXXXXXXXXXXXXXXXXX
Descripción Precio operación
XXXXXXX 9999.99
XXXXXXX 9999.99
XXXXXXX 9999.99
Total cliente: 9999.99
Nombre del cliente: XXXXXXXXXXXXXXXXXXXX
......
Total General: 999999.99

- Informar el nombre completo del cliente que más gastó.
- Generar un array resultante de compras donde el precio de la operación supera
los 10000$ y mostrarlo.
*/

struct Compra {
    int idProducto;
    int cantidadPedida;
    string nombreCompletoCliente;
};

struct Producto {
    int idProducto;
    string descripcion;
    float precioUnitario;
};

void emitirListado (Compra compras[], Producto productos[], int cantCompras) {
    int i=0;
    float totalGeneral=0, gastoMayorCliente=-1;
    string nombreClienteMayor;
    Compra comprasMayoresA10Mil[cantCompras];
    int cantComprasMayores10Mil=0;

    while (i<cantCompras) {
        string key=compras[i].nombreCompletoCliente;
        float totalCliente=0;
        cout << "Nombre del cliente: " << key << endl;
        cout << "Descripcion     Precio operacion" << endl;
        while (i<cantCompras && key==compras[i].nombreCompletoCliente) {
            Producto productoActual=productos[compras[i].idProducto - 1];
            float precioOperacion=productoActual.precioUnitario*compras[i].cantidadPedida;
            cout <<  productoActual.descripcion << "    " << precioOperacion << endl;

            totalCliente+=precioOperacion;
            if (precioOperacion > 10000) {
                comprasMayoresA10Mil[cantComprasMayores10Mil]=compras[i];
                cantComprasMayores10Mil++;
            }
            i++;
        }
        cout << "Total cliente: " << totalCliente << endl;
        totalGeneral+=totalCliente;
        if (totalCliente>gastoMayorCliente) {
            gastoMayorCliente=totalCliente;
            nombreClienteMayor=key;
        }
    }
    cout << "Total general: " << totalGeneral << endl;
    cout << "El cliente que mas gasto es: " << nombreClienteMayor << endl;

    for (int i=0;i<cantComprasMayores10Mil;i++) {
        cout << comprasMayoresA10Mil[i].nombreCompletoCliente << "    " << comprasMayoresA10Mil[i].idProducto
        << "    " << comprasMayoresA10Mil[i].cantidadPedida << endl;
    }
}

int main () {

    int cantCompras=10, cantProductos=5;
    Compra compras[cantCompras]={
    {3, 10, "AntonioLopez"},
    {1, 5, "AntonioLopez"},
    {2, 10, "AntonioLopez"},
    {5, 20, "DelfinaLopez"},
    {1, 11, "DelfinaLopez"},
    {4, 10, "FernandoLopez"},
    {2, 1, "FernandoLopez"},
    {3, 2, "FernandoLopez"},
    {1, 3, "FernandoLopez"},
    {5, 4, "ManueLopez"}
    };
    Producto productos[cantProductos]={
        {1, "adsdasada", 1000},
        {2, "qwerty", 2500},
        {3, "afjwopasp", 8000},
        {4, "apfosadngpoad", 250},
        {5, "asdaspdasldaspd", 50}
    };

    emitirListado(compras, productos, cantCompras);
    
    return 0;
}