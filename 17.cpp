/*
Ej. MI-17: Se ingresa un conjunto de valores float, cada uno de los cuales representan el sueldo de un empleado,
excepto el último valor que es cero e indica el fin del conjunto. Se pide desarrollar un programa que determine e informe:
a) Cuántos empleados ganan menos $1.520.
b) Cuántos ganan $1.520 o más pero menos de $2.780.
c) Cuántos ganan $2.780 o más pero menos de $5.999.
d) Cuántos ganan $5.999 o más.
*/

#include <iostream>
using namespace std;

int main () 
{
     
    float sueldo;
    int empleadoNumero = 1;
    int menorA1520 = 0;
    int mayorOigualA1520MenorA2780 = 0;
    int mayorOigualA2780MenorA5999 = 0;
    int igualOmasDe5999 = 0;

    cout << "Ingresa el sueldo del empleado numero " << empleadoNumero << ":" << endl;
    cin >> sueldo;
    
    if (sueldo >= 0)
    {
        while (sueldo > 0)
        {
            empleadoNumero ++;

            if (sueldo < 1520)
            {
                menorA1520 ++;
            }
            else
            {
                if ((sueldo >= 1520) && (sueldo < 2780))
                {
                    mayorOigualA1520MenorA2780 ++;
                }
                else
                {
                    if ((sueldo >= 2780) && (sueldo < 5999))
                    {
                        mayorOigualA2780MenorA5999 ++;
                    }
                    else
                    {
                        igualOmasDe5999 ++;
                    }
                }
            }

            cout << "Ingresa el sueldo del empleado numero " << empleadoNumero << ":" << endl;
            cin >> sueldo;
            
        }
    }
    else
    {
        cout << "no puede ser que haya un salario negativo, vuelve a intentarlo";
    }

    cout << "Hay " << menorA1520 << " empleados que ganan menos de $1520." << endl;
    cout << "Hay " << mayorOigualA1520MenorA2780 << " empleados que ganan mas o igual a $1520, pero menos que $2780." << endl;
    cout << "Hay " << mayorOigualA2780MenorA5999 << " empleados que ganan mas o igual a $2780, pero menos que $5999." << endl;
    cout << "Hay " << igualOmasDe5999 << " empleados que ganan mas o igual a $5999." << endl;
    
    system("pause");
    return 0;
}