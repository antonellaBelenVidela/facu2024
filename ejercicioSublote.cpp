#include <iostream>
using namespace std;

main()
{

    int valor;
    int cantidadNumeroPorSublote;
    int sumatoriaSublote;

    //a)
    while( valor > 0 )
    {
        cout << "Ingrese valor: ";
        cin >> valor;

        // valodar fin del sublote
        if (valor > 0)
        {
            cantidadNumeroPorSublote ++;
            sumatoriaSublote += valor;
        }
        else
        {
            if(cantidadNumeroPorSublote > 0)
            {
                cout << "Promedio sublote: " << (sumatoriaSublote / cantidadNumeroPorSublote);
            }
            else
            {
                cout << "Sublote vacio!" << endl << endl;
            }

            cantidadNumeroPorSublote = 0;   // INICIALIZO EN 0 DE NUEVO YA QUE VOY A VOLVER A INGRESAR OTRO LOTE Y ME TIENE QUE CONTAR OTRO VALOR
            sumatoriaSublote = 0;
        }
    }
     
}