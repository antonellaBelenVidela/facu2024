#include <iostream>
using namespace std;

int main () 
{
    float menorFacturacion = INT_MIN, mayorFacturacionDiaria = 0, facturacionTotal = 0, facturacionTotalPorDia = 0;
    int diaMenorFacturacion = 0, horaMenorFacturacion = 0, diaMayorFacturacion = 0, contadorClientesTotales = 0;

    cout << "Bienvenida al sistema de registro de 'Comida al paso' " << endl;

    for (int j = 1; j <= 3; j++)
    {
        cout << "Dia: " << j << endl;

        for (int i = 9; i < 11 ; i++) //xq <= 21 seria de 21 a 22 y queremos de 20 a 21
        {
            cout << "Hora: " << i << endl;
            int cambioClientePorHora = 0, contadorClientesPorHora = 0;
            float facturacionTotalPorHora = 0;

            cout << "Ingrese un '1' para ingresar cliente: " ;
            cin >> cambioClientePorHora;

            int numeroCliente = 0;

            while(cambioClientePorHora == 1)
            {
                cout << endl << "Cliente " << numeroCliente + 1 << endl;

                float facturacionTotalPorCliente = 0;

                cout << "Ingresar venta en pesos: ";
                cin >> facturacionTotalPorCliente; 

                facturacionTotalPorHora += facturacionTotalPorCliente;
                contadorClientesPorHora ++;

                contadorClientesTotales ++;
                facturacionTotal += facturacionTotalPorCliente;
                
                facturacionTotalPorDia += facturacionTotalPorCliente;
                

                // DIA Y HORA MENOR FACTURACION
                if(facturacionTotalPorCliente < menorFacturacion)
                {
                    menorFacturacion = facturacionTotalPorCliente;
                    diaMenorFacturacion = j;
                    horaMenorFacturacion = i;
                }

                cout << "Ingrese '1' al cambiar de cliente dentro de la misma hora y '0' si cambia de hora: " << endl;
                cin >> cambioClientePorHora;
            }
            
            // cambia de hora, cambia valor
            facturacionTotalPorHora = 0;
            contadorClientesPorHora = 0;
        }

        // cambia de dia

        //DIA MAYOR FACTURACION DIARIA
        if (mayorFacturacionDiaria < facturacionTotalPorDia)
        {
            mayorFacturacionDiaria = facturacionTotalPorDia;
            diaMayorFacturacion = j;
        }

        facturacionTotalPorDia = 0;
    }

    cout << endl << "EL DIA " << diaMenorFacturacion << " DEL MES DE ABRIL DEL 2024, A LAS " << horaMenorFacturacion << "hrs. SE REGISTRO LA MENOR FACTURACION DEL MES :(" << endl;

    cout << endl << "EL DIA " << diaMayorFacturacion << " DEL MES DE ABRIL DEL 2024, FUE EL DIA DE MAYOR FACTURACION, CON UN TOTAL DE $" << mayorFacturacionDiaria << " :)" << endl;

    cout << endl << "EL PROMEDIO DE FACTURACION POR CLIENTE FUE DE: $" << (facturacionTotal/contadorClientesTotales) << "." << endl;
    
system("pause");
 return 0;
}