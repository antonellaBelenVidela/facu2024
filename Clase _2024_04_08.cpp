#include <iostream>
using namespace std;

int funcion_tiposDeDaDatos(void);
int reloj(void);
int main()
{
    reloj();
    int numero1ro,numero2do,numero3ro,numero4to, dato, ingreso , regresoDesdeFuncion ;
    float resultado;
    numero1ro = 8;
    numero2do = 80;
    numero3ro = 5;
    numero4to = 6;
    resultado =  numero1ro +  numero2do + numero3ro + numero4to;

    cout << "Primera version :" << resultado << "\n" ;

    for (dato = 0; dato <= resultado; dato=dato+1)
    {
        cout << "con for" << dato << "\n";
    }

    dato =0 ;
    cout << "while -----------\n";
    resultado=-9;

    while (dato <= resultado)
    {
        cout << "con while " << dato << "\n";
        cout << "Ingrese el nuevo valor";
        cin >> ingreso;
        dato = dato + ingreso;
    }
    dato =0 ;
    cout << "do... while -----------\n";
    do
    {
        cout << "con while " << dato << "\n";
        cout << "Ingrese el nuevo valor";
        cin >> ingreso;
        dato = dato + ingreso;
    }while (dato <= resultado);
    cout <<  "extra:" << dato << "fin     \n";
    regresoDesdeFuncion = funcion_tiposDeDaDatos();
    cout <<  "desde funcion:" << regresoDesdeFuncion;
    return 0;
}
//---------------------------------------------------------------
int funcion_tiposDeDaDatos()
{
    int entero; // Variable entera
    float flotante; // Variable de punto flotante
    char caracter; // Variable de carácter

    // Asignación de valores a las variables
    entero = 10;
    flotante = 3.14159;
    caracter = 'a';

    // Imprimir los valores de las variables
    cout << "Valor de la variable entero: " << entero << std::endl;
    cout << "Valor de la variable flotante: " << flotante << std::endl;
    cout << "Valor de la variable caracter: " << caracter << std::endl;

    // Declaración y asignación en una sola línea
    double numero = 5.678;
    cout << "Valor de la variable numero: " << numero << std::endl;
    int numero_user;
    cout << "ingreser el fin:\n";
    cin >> numero_user;
    //if numero_user < 2500000000:
    cout << "Imprimiendo numeros del 1 al "<< numero_user<< ":\n";
    numero_user = numero_user+numero_user;
    //~ numero_user += numero_user*2;
     cout << numero_user <<"fin \n";
    for (int i = 1; i <= numero_user; i=i+10000) {
        cout << i << " ";
    }
    cout << endl;
    // Imprimir numeros del 10 al 1 en orden descendente
    cout << "Imprimiendo numeros del 10 al 1 en orden descendente:\n";
    for (int j = 10; j >= 1; --j) {
        cout << j << " ";
    }
    cout << std::endl;
    reloj();
    return 0;
}
//~ }
//~ un int sea de al menos 16 bits, lo que significa que puede representar valores en el rango de -32,767 a 32,767 para int con signo, y de 0 a 65,535 para unsigned int sin signo.

//~ Sin embargo, en la práctica, la mayoría de las implementaciones modernas de C++ utilizan un int de 32 bits, lo que permite representar valores en el rango de -2,147,483,648 a 2,147,483,647 para int con signo, y de 0 a 4,294,967,295 para unsigned int sin signo.

//~ Para conocer los límites exactos de un int en tu plataforma e


int reloj() {
    //~ // Array de strings que contiene los nombres de los meses del año


    std::string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                           "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    int dias_por_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int minuto,segundo, hora, dia,dia_final,indice;
    for (indice = 0 ;indice <=11;indice++)
    {
        dia_final = dias_por_mes[indice];
        for (dia =1; dia <=  dia_final ;dia=dia+1)
        {
            for (hora =0; hora <=23;hora=hora+1)
            {
                for (minuto =0; minuto <=59;minuto=minuto+1)
                {
                    for (segundo =0; segundo <=59;segundo=segundo+1)
                    {
                        cout << "mes: "<< meses[indice] << " ";
                        cout << "-"<< indice+1 << " ";
                        cout << "dia: "<< dia << " ";
                        cout << "hora: "<< hora << " ";
                        cout << "minuto: "<< minuto << " ";
                        cout << "segundo: "<< segundo << "\n";
                    }
                }
            }
        }
    }









    //~ std::string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                           //~ "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    //~ int dias_por_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    //~ std::cout << "Cantidad de días de cada mes en un año no bisiesto:\n";
    //~ for (int i = 0; i < 12; ++i) {
        //~ std::cout << meses[i] << ": " << dias_por_mes[i] << " días\n";

        //~ // Imprimir los días de cada mes
        //~ std::cout << "Días de " << meses[i] << ":\n";
        //~ for (int dia = 1; dia <= dias_por_mes[i]; ++dia) {
            //~ std::cout << dia << "\n";
        //~ }
        //~ std::cout << std::endl;
    //~ }

    return 0;
}



