#include <iostream>
using namespace std;

int main()
{
    int probabilidad;
    int confianza;

    cout << "Ingresa la probabilidad de que a anto le ande la consola externa (del 1 al 10)" <<endl;
    cin >>probabilidad;

    cout << "Ingresa la confianza que tenias en que funcione (1 al 10)" << endl;
    cin >> confianza;

    if ((probabilidad >= 5) && (confianza >= 5))
    {
        cout << "Tenias mucha confianza! Bien hecho!" << endl;
    }
    else
    {
        if ((probabilidad >= 5) &&(confianza<=5))
        {
            cout << "Habia posibilidades pero tenias que confiar mas!" << endl;
        }
        else
        {
            if ((probabilidad <= 5) && (confianza >= 5))
            {
                cout << "No habia muchas probabilidades pero igual confiaste! Bien hecho!" << endl;
            }
            else
            {
                cout << "No habia posibilidades ni confianza, pero de todas formas se logró! Confia mas!" << endl;
            }
            
        }
        
    }

    system ("pause");
    return 0;
    
}
