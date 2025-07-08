#include <iostream>
using namespace std;

int edadAGrupoEtario(int edad)
{
    int resultado; 

    if (edad <= 14)
    {
        resultado = 1;
    }
    else 
    {
        if ((edad >= 15) && (edad <= 21))
        {
            resultado = 2;
        }
        else
        {
            if ((edad >= 22) && (edad <= 28))
            {
                resultado = 3;
            }
            else
            {
                if ((edad >= 29) && (edad <= 35))
                {
                    resultado = 4;
                }
                else
                {
                    if ((edad >= 36) && (edad <= 42))
                    {
                       resultado = 5;
                    }
                    else
                    {
                        if ((edad >= 43) && (edad <= 49))
                        {
                           resultado = 6;
                        }
                        else
                        {
                            if ((edad >= 50) && (edad <= 63))
                            {
                                resultado = 7;
                            }
                            else
                            {
                                resultado = 8;
                            }
                        }
                    }
                }
                
            }
            
        }
        
    }

    return resultado;
       
}

int main () 
{
    int edad;
    string nombre;

    cout << "Ingrese Nombre: " << endl;
    cin >> nombre;

    cout << "Ingrese edad: " << endl;
    cin >> edad; 

    cout << "La persona " << nombre << " de " << edad << " años, pertence al grupo etario numero" << edadAGrupoEtario(edad) << "." << endl;
 
    system("pause");
    return 0;
}