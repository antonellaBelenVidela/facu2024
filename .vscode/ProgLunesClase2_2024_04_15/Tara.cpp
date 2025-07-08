#include <iostream>

using namespace std;
int main()
{

    //~ int cont=0;
    //~ float total = 2000;
    //~ while (total >=0)
    //~ {
        //~ cout << "Ingrese el peso del nuevo producto: ";
        //~ cin >> peso_unitario;
        //~ total =  total -peso_unitario ;
        //~ cout << "El vehiculo esta cargando mercaderia, aun queda: " << total << "\n" ;
    //~ }
    int tabla;
    for ( tabla= 0; tabla <=10 ; tabla ++)
    {
    cout << "tabla del 8: "<< tabla * 8 <<"\n"  ;

    }


    tabla= 0;
    while (tabla <=10)
    {
    cout << "tabla del 8: "<< tabla * 8 <<"\n"  ;
    tabla ++;
    }

    tabla= 0;
    do
    {
    cout << "tabla del 8: "<< tabla * 8 <<"\n"  ;
    tabla ++;
    } while (tabla <=10);







    return 0;
}

