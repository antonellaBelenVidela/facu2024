#include <iostream>
using namespace std;

/*
2) Un supermercado nos contrató para realizar un algoritmo basado en sus
requerimientos. Este posee un vector de los productos que vende (son 20
actualmente) y dos vectores con las compras realizadas por los clientes de esos
productos, un vector del mes pasado y otro del mes actual. (Suponer que todos los
vectores vienen cargados y que también sabemos la cantidad de compras (el tamaño
de los dos vectores)). Cada uno de ellos tienen la siguiente estructura:

Compra (ordenado por nombreCompletoCliente)
- IdProducto (int)
- CantidadPedida (int)
- nombreCompletoCliente (string)

Producto (ordenado por idProducto)
- idProducto (int (1,2,3...20))
- descripcion (string)
- precioUnitario (float)

Se pide:
- Generar un array de todas las compras ordenadas por nombreCompletoCliente,
independientemente de que mes sean, y mostrarlo.
- Generar un array con las compras de personas que hayan pedido menos de una
cantidad de ‘5’ de ese producto, y mostrarlo.
- Generar un array con la cantidad vendida de cada producto, y mostrarlo.
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

void apareo (Compra vector1[], Compra vector2[], int tam1, int tam2, Compra vectorResultado[]) {
    int i=0, j=0, k=0;
    while (i<tam1 && j<tam2) {
        if (vector1[i].nombreCompletoCliente < vector2[j].nombreCompletoCliente) {
            vectorResultado[k]=vector1[i];
            i++;
        } else if (vector1[i].nombreCompletoCliente > vector2[j].nombreCompletoCliente) {
            vectorResultado[k]=vector2[j];
            j++;
        } else {
            vectorResultado[k]=vector1[i];
            k++;
            vectorResultado[k]=vector2[j];
            i++;
            j++;
        }

        k++;
    }

    while (i<tam1) {
        vectorResultado[k]=vector1[i];
        i++;
        k++;
    }

    while (j<tam2) {
        vectorResultado[k]=vector2[j];
        j++;
        k++;
    }

    cout << "idProducto    cantPedida    nombreCompleto" << endl;
    for (int h=0;h<k;h++) {
        cout << vectorResultado[h].idProducto << "           " <<  vectorResultado[h].cantidadPedida 
        << "            " << vectorResultado[h].nombreCompletoCliente << endl;
    }
}


void infoProductos (Compra compras[], int cantCompras, int cantProductos) {
    int cantidadPorProducto[cantProductos]={0};
    Compra comprasMenoresA5[cantCompras];
    int cantMenoresA5=0;

    for (int i=0;i<cantCompras;i++) {
        if (compras[i].cantidadPedida < 5) {
            comprasMenoresA5[cantMenoresA5]=compras[i];
            cantMenoresA5++;
        }

        cantidadPorProducto[compras[i].idProducto - 1]+=compras[i].cantidadPedida;
    }

    cout << "Compras con una cantidad pedida menor a 5: " << endl;
    for (int i=0;i<cantMenoresA5;i++) {
        cout << comprasMenoresA5[i].idProducto << "    " << comprasMenoresA5[i].nombreCompletoCliente 
        << "    " << comprasMenoresA5[i].cantidadPedida << endl;
    }

    cout << "Cantidades por producto: " << endl;
    for (int i=0;i<cantProductos;i++) {
        cout << "Producto " << i+1 << ": " << cantidadPorProducto[i] << endl;
    }
}

int main () 
{

 // prueba ejercicio 2
    int cantCompras=5, cantProductos=5;
    Compra comprasMesPasado[cantCompras]={ 
        {3, 10, "AntonioLopez"},
        {1, 5, "AntonioLopez"},
        {5, 20, "DelfinaLopez"},
        {3, 1, "ManuelLopez"},
        {4, 2, "PabloLopez"}
    }, 
    comprasMesActual[cantCompras]={
        {2, 10, "AntonioLopez"},
        {1, 11, "DelfinaLopez"},
        {2, 3, "FernandoLopez"},
        {1, 4, "OrlandoLopez"},
        {4, 11, "YamilaLopez"}
    };
    Producto productos[cantProductos]={
        {1, "adsdasada", 1000},
        {2, "qwerty", 2500},
        {3, "afjwopasp", 8000},
        {4, "apfosadngpoad", 250},
        {5, "asdaspdasldaspd", 50}
    };
    int tamanioFinal=cantCompras*2;
    Compra comprasFinal[tamanioFinal];
    
    apareo(comprasMesPasado, comprasMesActual, cantCompras, cantCompras, comprasFinal);
    infoProductos(comprasFinal, tamanioFinal, cantProductos);

    return 0;
}
