// Valores principales Valores adicionales

//      Sobrepeso                  >=25.00
//          Obesidad                   >=30.00
//              mórbida                    40.00
//              media                      35.00-39.99
//              leve                       30.00-34.99
//          Preobesidad                25.00-29.99
//      Normal                     18.50-24.99
//      Peso bajo                  <18.50
//          Delgadez leve              17.00-18.49
//          Delgadez moderada          16.00-16.99
//          Delgadez severa            <16.00

#include <iostream>
using namespace std;

int main () 
{
    float peso = 0;
    float altura = 0;
    float imc = 0;

    cout << "Ingrese su PESO: ";
    cin >> peso;

    cout << "Ingrese su ALTURA: ";
    cin >> altura;

    //IMC
    imc = peso / (altura * altura);

    cout <<endl << endl << "Su IMC es de: " << imc << "." << endl;
    cout << "-> ESTADO: " << endl;

    while (peso != 0)
    {
        //Sobrepeso .......................................................................>=25.00
        if (imc >= 25)
        {
            cout << ">>> SOBREPESO !!!" << endl;

            //Obesidad ---------------------------------------------  >=30.00
            if (imc >= 30.00)
            {
                cout << ">> OBESIDAD !!" << endl;

                //Mórbida ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,, 40.00
                if (imc >= 40.00)
                {
                    cout << "> Morbida !" << endl;
                }
                else
                {
                    //Media ,,,,,,,,,,,,,,,,,,,,,,,,,,,,, 35.00-39.99
                    if ((imc >= 35.00) && (imc <= 39.99))
                    {
                        cout << "> Media !" << endl;
                    }
                    //Leve ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,  30.00-34.99
                    else
                    {
                        cout << "> Leve !" << endl;
                    }
                }      
            }
            else
            {
                //Preobesidad  -----------------------------------------  25.00-29.99
                cout << ">> PREOBESIDAD !!" << endl;
            }
        }
        else
        {
            //Normal ...................................................................... 18.50-24.99
            if ((imc >= 18.50) && (imc <= 24.99))
            {
                cout << ">> PESO NORMAL !!!" << endl;
            }
            else
            {
                //Peso bajo .................................................................  <18.50
                cout << ">> PESO BAJO !!!" << endl;

                //Delgadez leve -------------------------------- 17.00-18.49
                if((imc >=17.00) && (imc <=18.49))
                {
                    cout << "> Delgadez leve !" << endl;
                }
                else
                {
                    //Delgadez moderada ------------------------- 16.00-16.99
                    if ((imc >=16.00) && (imc <=16.99))
                    {
                        cout << "> Delgadez moderada !" << endl;
                    }
                    //Delgadez severa --------------------------  <16.00
                    else
                    {
                        cout << "> Delgadez severa !" << endl;
                    }
                }
            }  
        }

    cout << endl << "............................................................." << endl << endl;

    cout << "Ingrese su PESO: ";
    cin >> peso;

    cout << "Ingrese su ALTURA: ";
    cin >> altura;

    //IMC
    imc = peso / (altura * altura);

    cout <<endl << endl << "Su IMC es de: " << imc << "." << endl;
    cout << "-> ESTADO: " << endl;
    }

    system("pause");
    return 0;
}