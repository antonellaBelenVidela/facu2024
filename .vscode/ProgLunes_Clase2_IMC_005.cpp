#include <iostream>

//fuente : https://es.wikipedia.org/wiki/%C3%8Dndice_de_masa_corporal

//      Clasificación   IMC (kg/m²)

//      Valores principales Valores adicionales
//      Peso bajo                  <18.50
//          Delgadez severa            <16.00
//          Delgadez moderada          16.00-16.99
//          Delgadez leve              17.00-18.49
//      Normal                     18.50-24.99
//      Sobrepeso                  >=25.00
//          Preobesidad                25.00-29.99
//          Obesidad                   >=30.00
//              leve                       30.00-34.99
//              media                      35.00-39.99
//              mórbida                    40.00
//
//      Algunas organizaciones consideran sobrepeso un índice superior a 27.0.
//      En adultos (mayores de 18 años) estos valores son independientes de la edad. sea hombre o mujer.
//
//      Categoría de nivel de peso  Intervalo del percentil
//      Bajo peso                   Menos del percentil 5
//      Eutrófico                   > percentil 5 y < percentil 85
//      Sobrepeso                   > 85 hasta y < percentil 95
//      Obeso                       > percentil 95

//      Limitaciones
//      Correlación entre el IMC y el porcentaje de grasa corporal (%BF) de 8550 hombres en una estadística realizada por el National Health and Nutrition Examination Survey. Los datos en el cuadrante superior izquierdo y en el inferior derecho muestran algunas limitaciones del IMC.9?
//      El matemático Keith Devlin y el Center for Consumer Freedom (asociación de la industria de la restauración) defiende que el error en el IMC es significante y tan habitual que lo hace inútil para la evaluación de la salud.10?11? El profesor Eric Oliver de la Universidad de Chicago dijo sin embargo que el IMC era conveniente pero también era una medida del peso inexacto. que fuerza a ciertos grupos de la población y debería ser revisado.12?
//          Escala
//          El exponente en el denominador de la fórmula para el IMC es arbitrario. El IMC depende del peso y del «cuadrado» de la altura. Mientras que la masa se incrementa del orden de la tercera potencia. al ser una medida que depende del volumen tridimensional. implica que los individuos más altos con la misma forma de cuerpo y composición relativa tienen un índice mayor de BMI.13?
//          Ignora variaciones en las características físicas
//          El IMC añade aproximadamente un 10 % para los individuos más altos y recorta aproximadamente otros 10 % para los más pequeños. En otras palabras. una persona con una talla pequeña podría tener más grasa que el óptimo. pero su BMI reflejar que es «normal». Por el contrario. una persona de talla grande (o alto) podría ser un individuo saludable con un índice de grasa bajo. pero ser clasificado con sobrepeso14?
//                  No diferencia entre masa muscular y masa grasa
//                  Variación en la relación con la salud
//                  Un estudio publicado por el Journal of the American Medical Association en 2005 demostró que las personas con sobrepeso tienen una probabilidad de morir similar a las personas con peso normal tal y como lo define el IMC. mientras aquellas «obesas» o «por debajo de lo normal» tienen una probabilidad mayor de morir.15?
//                      Un estudio de 2010 que siguieron a 11 000 sujetos durante 8 años concluyó que el IMC no es una buena medida para considerar el riesgo de ataque al corazón. infarto de miocardio o muerte. Una medida mejor podría ser el índice cintura-altura.16?
//                          Un estudio GWAS publicado en 2015 (realizado en población europea). consiguió identificar loci (Locus) relacionados con el IMC y que ejercían diferentes efectos dependiendo de la edad del grupo de población. Gracias a esto. se pudieron establecer co-relaciones con rasgos cardiometabólicos u obesidad. Sin embargo. aún es necesario investigar más en profundidad estas relaciones con muestras poblacionales más amplias. con el fin de obtener una mejor significación y objetivización de los parámetros.17?
//                          IMC y diabetes
//                          Saber si el índice de masa corporal puede correlacionarse con enfermedades como la diabetes tipo 2. ha despertado gran interés en la comunidad científica. Sin embargo. las investigaciones a la fecha no han confirmado una relación directa entre estos dos parámetros.18?19?
//                              El interés despertó a partir de datos extraídos de dos servicios de medicina en Estados Unidos. La mayoría de los pacientes con índice de masa corporal alto tenían tendencia a trastornos en el metabolismo crónicos como la diabetes. Sin embargo. los resultados obtenidos en las investigaciones no lo confirmaron. Dichos estudios dejan en claro que el IMC no es el mejor método para estimar si una persona puede tener diabetes o no.20?
//                                      '''

//Definir <var1> , <var2> , ... , <varN>  Como [REAL/ENTERO/LOGICO/CARACTER];

using namespace std;
int main()
{
    float peso = 0;
    float altura = 0;
    float imc = 0;

    do
    {
        cout << endl << endl;
        cout << "Calculo de IMC ----------------------------------------------------------- \n";
        cout << "Ingrese su peso: ";
        cin >> peso;

        if (peso == 0)
        {
            cout << "Ingrese un peso valido." << endl;
        }

        cout << "Ingrese su altura: ";
        cin >> altura;

        imc = peso / (altura * altura);

        //~ cout << "su imc es de "<< imc << " puntos \n";
        //~ if (imc < 18.5)
        //~ {
            //~ cout << "Peso bajo \n";
        //~ }
        //~ else if (imc < 25)//(imc >= 18.5 && imc < 25)
        //~ {
            //~ cout << "Peso normal \n";
        //~ }
        //~ else //if (imc >= 25)
        //~ {
            //~ cout << "Sobrepeso \n";
        //~ }
    //      Peso bajo                  <18.50
    //      Normal                     18.50-24.99
    //      Sobrepeso                  >=25.00
            //~ cout << "FIn.......... \n";

            cout << " " << endl;
            cout << "Su imc es de "<< imc << " puntos. \n";
            cout << " " << endl;

            if (imc < 18.5)
            {
                cout << ">  Peso bajo !!! \n";

                if (imc < 16)        //Delgadez severa           16
                {
                    cout << "Delgadez severa !!! \n";
                }
                else if (imc < 17)   //Delgadez moderada          17
                {
                    cout << "Delgadez moderada !!!  \n";
                }
                else                 //Delgadez leve              17.00-18.49
                {
                    cout << "Delgadez leve !!!  \n";
                }
            }
            else if (imc < 25)//(imc >= 18.5 && imc < 25)
            {
                cout << "> Peso normal !!! \n";
            }
            else //if (imc >= 25)
            {
                cout << ">> Sobrepeso !!! \n";

                if (imc<30)//Preobesidad                25.00-29.99
                {
                    cout << "> Preobesidad !!! \n";
                }
                else
                {
                cout << "> Obesidad !!! \n";
                    if (imc<35)
                    {
                    cout << "Leve !!! \n";
                    }
                    else if (imc<40)
                    {
                    cout << "Media !!! \n";
                    }
                    else
                    {
                    cout << "Morbida !!! \n";
                    }
                }

            }
        }
        while (peso!=0);
/////////////////////////             tercer paso


    return 0;
}



//      Valores principales Valores adicionales
//      Peso bajo                  <18.50
//          Delgadez severa            <16.00
//          Delgadez moderada          16.00-16.99
//          Delgadez leve              17.00-18.49
//      Normal                     18.50-24.99
//      Sobrepeso                  >=25.00
//          Preobesidad                25.00-29.99
//          Obesidad                   >=30.00
//              leve                       30.00-34.99
//              media                      35.00-39.99
//              mórbida                    40.00
//--------------------------------------------------------------------
//      Valores principales Valores adicionales
//      Sobrepeso                  >=25.00
//          Preobesidad                25.00-29.99
//          Obesidad                   >=30.00
//              mórbida                    40.00
//              media                      35.00-39.99
//              leve                       30.00-34.99 else
//      Normal                     18.50-24.99
//      Peso bajo                  <18.50
//          Delgadez leve              17.00-18.49
//          Delgadez moderada          16.00-16.99
//          Delgadez severa            <16.00   else
