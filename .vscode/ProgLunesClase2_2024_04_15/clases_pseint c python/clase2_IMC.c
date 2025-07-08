/*
fuente : https://es.wikipedia.org/wiki/%C3%8Dndice_de_masa_corporal

Clasificación   IMC (kg/m²)

Valores principales Valores adicionales
Peso bajo                   <18.50
     Delgadez severa            <16.00
     Delgadez moderada          16.00-16.99
     Delgadez leve              17.00-18.49
Normal                      18.50-24.99
Sobrepeso                   ≥25.00
     Preobesidad                25.00-29.99
     Obesidad                   ≥30.00
          leve                      30.00-34.99
          media                     35.00-39.99
          mórbida                   40.00


Algunas organizaciones consideran sobrepeso un índice superior a 27.0.
En adultos (mayores de 18 años) estos valores son independientes de la edad. sea hombre o mujer.


Categoría de nivel de peso  Intervalo del percentil
Bajo peso                   Menos del percentil 5
Eutrófico                   > percentil 5 y < percentil 85
Sobrepeso                   > 85 hasta y < percentil 95
Obeso                       > percentil 95


Limitaciones
Correlación entre el IMC y el porcentaje de grasa corporal (%BF) de 8550 hombres en una estadística realizada por el National Health and Nutrition Examination Survey. Los datos en el cuadrante superior izquierdo y en el inferior derecho muestran algunas limitaciones del IMC.9​
El matemático Keith Devlin y el Center for Consumer Freedom (asociación de la industria de la restauración) defiende que el error en el IMC es significante y tan habitual que lo hace inútil para la evaluación de la salud.10​11​ El profesor Eric Oliver de la Universidad de Chicago dijo sin embargo que el IMC era conveniente pero también era una medida del peso inexacto. que fuerza a ciertos grupos de la población y debería ser revisado.12​

Escala
El exponente en el denominador de la fórmula para el IMC es arbitrario. El IMC depende del peso y del «cuadrado» de la altura. Mientras que la masa se incrementa del orden de la tercera potencia. al ser una medida que depende del volumen tridimensional. implica que los individuos más altos con la misma forma de cuerpo y composición relativa tienen un índice mayor de BMI.13​

Ignora variaciones en las características físicas
El IMC añade aproximadamente un 10 % para los individuos más altos y recorta aproximadamente otros 10 % para los más pequeños. En otras palabras. una persona con una talla pequeña podría tener más grasa que el óptimo. pero su BMI reflejar que es «normal». Por el contrario. una persona de talla grande (o alto) podría ser un individuo saludable con un índice de grasa bajo. pero ser clasificado con sobrepeso14​

No diferencia entre masa muscular y masa grasa
El IMC asume una distribución entre la masa muscular y la masa grasa que no son ciertas. El IMC generalmente sobreestima el tejido adiposo en aquellos con mayor masa corporal (por ejemplo atletas) y subestima el exceso de grasa en aquellos con menor masa corporal. Un estudio en junio de 2008 por Romero-Corral examinó a 13 601 sujetos de Estados Unidos y encontró que la obesidad (IMC>30) se encontraba presente en el 21 % de los hombres y el 31 % de las mujeres. Sin embargo. usando el porcentaje de grasa corporal se encontró que la obesidad se encontraba en el 50 % de los hombres y el 62 % de las mujeres. A pesar del subcontaje que estimó el IMC. los valores del IMC sí se encontraban en un rango asociado con porcentajes de grasa corporal grandes.

Variación en la relación con la salud
Un estudio publicado por el Journal of the American Medical Association en 2005 demostró que las personas con sobrepeso tienen una probabilidad de morir similar a las personas con peso normal tal y como lo define el IMC. mientras aquellas «obesas» o «por debajo de lo normal» tienen una probabilidad mayor de morir.15​

Un estudio de 2010 que siguieron a 11 000 sujetos durante 8 años concluyó que el IMC no es una buena medida para considerar el riesgo de ataque al corazón. infarto de miocardio o muerte. Una medida mejor podría ser el índice cintura-altura.16​

Un estudio GWAS publicado en 2015 (realizado en población europea). consiguió identificar loci (Locus) relacionados con el IMC y que ejercían diferentes efectos dependiendo de la edad del grupo de población. Gracias a esto. se pudieron establecer co-relaciones con rasgos cardiometabólicos u obesidad. Sin embargo. aún es necesario investigar más en profundidad estas relaciones con muestras poblacionales más amplias. con el fin de obtener una mejor significación y objetivización de los parámetros.17​

IMC y diabetes
Saber si el índice de masa corporal puede correlacionarse con enfermedades como la diabetes tipo 2. ha despertado gran interés en la comunidad científica. Sin embargo. las investigaciones a la fecha no han confirmado una relación directa entre estos dos parámetros.18​19​

El interés despertó a partir de datos extraídos de dos servicios de medicina en Estados Unidos. La mayoría de los pacientes con índice de masa corporal alto tenían tendencia a trastornos en el metabolismo crónicos como la diabetes. Sin embargo. los resultados obtenidos en las investigaciones no lo confirmaron. Dichos estudios dejan en claro que el IMC no es el mejor método para estimar si una persona puede tener diabetes o no.20​
*/

#include <stdio.h>

int main()
{
    /*
    definir peso como real;
    definir altura como real;
    definir imc como real;

    float peso;
    float altura;
    float imc;


    float peso=0;
    float altura=0;
    float imc=0;

    float peso, altura, imc;
    */
    float peso=0, altura=0, imc=0;


    printf ("\n|          imc = peso /altura**2                       |");
    printf ("\n|Peso bajo                   <18.50                    |");
    printf ("\n|     Delgadez severa            <16.00                |");
    printf ("\n|     Delgadez moderada          16.00-16.99           |");
    printf ("\n|     Delgadez leve              17.00-18.49           |");
    printf ("\n|Normal                      18.50-24.99               |");
    printf ("\n|Sobrepeso                   >=25.00                   |");
    printf ("\n|     Preobesidad                25.00-29.99           |");
    printf ("\n|     Obesidad                   >=30.00               |");
    printf ("\n|          leve                      30.00-34.99       |");
    printf ("\n|          media                     35.00-39.99       |");
    printf ("\n|          morbida                   40.00             |");

printf ("\n\n\n-------------------------------------------------------------\n\n\n");

printf ("\n|          imc = peso /altura**2                       |"
    "\n|Peso bajo                   <18.50                    |"
    "\n|     Delgadez severa            <16.00                |"
    "\n|     Delgadez moderada          16.00-16.99           |"
    "\n|     Delgadez leve              17.00-18.49           |"
    "\n|Normal                      18.50-24.99               |"
    "\n|Sobrepeso                   >=25.00                   |"
    "\n|     Preobesidad                25.00-29.99           |"
    "\n|     Obesidad                   >=30.00               |"
    "\n|          leve                      30.00-34.99       |"
    "\n|          media                     35.00-39.99       |"
    "\n|          morbida                   40.00             |");

printf ("\n\n\n-------------------------------------------------------------\n\n\n");

    //------------------------------------------------------------------
    //                               ingreso de datos
    printf ("Por favor ingrese su peso:");
    //peso <- 80;
    //Leer peso;
    scanf ("%f", &peso);



    printf ("Por favor ingrese su altura:");
    // altura <- 1.8;
    // Leer altura ;
    scanf ("%f", &altura);

    //------------------------------------------------------------------
    //                               calculo de imc

    /*
    imc <- peso / (altura*altura);
    Escribir "su IMC es ", imc;
    Escribir "a partir de un peso de  ", peso;
    Escribir "y de una altura de ", altura;
    */

    imc = peso / (altura*altura);
    printf ( "su IMC es ", imc);
    printf ( "a partir de un peso de  ", peso);
    printf ( "y de una altura de ", altura);

    //------------------------------------------------------------------
    //                               condicion de salida
    /*
    Si imc < 18.5 Entonces
        Escribir "Peso bajo ";
        Si imc < 16 Entonces
            Escribir "        Delgadez severa ";
        SiNo
            Si imc < 17 Entonces
                Escribir "        Delgadez moderada ";
            SiNo
                Escribir "        Delgadez leve ";
            FinSi
        FinSi
    SiNo
        //Escribir "no Peso bajo ";
        //demas Si imc >= 18.5 y imc <25 Entonces
        Si imc <25 Entonces
            Escribir "peso normal ";
        SiNo
            Escribir "Sobrepeso ";
            Si imc<30 Entonces
                Escribir "        Preobesidad ";
            SiNo
                Escribir "        Obesidad ";
                Si imc < 35 Entonces
                    Escribir "                leve ";
                SiNo
                    Si  imc < 40 Entonces
                        Escribir "                media ";
                    SiNo
                        Escribir "                morbida ";
                    Fin Si
                Fin Si
            Fin Si
        Fin Si
    Fin Si
    */
    //------------------------------------------------------------------
    //                               condicion de salida
    if ( imc < 18.5)
    {
        printf (  "\nPeso bajo ");

        if (imc < 16 )
        {
            printf (  "\n        Delgadez severa ");
        }
        else
        {
            if (imc < 17 )
            {
                printf (  "\n        Delgadez moderada ");
            }
            else
            {
                printf (  "\n        Delgadez leve ");
            }
        }
    }
    else
    {
        //printf (  "no Peso bajo ";
        //demas Si imc >= 18.5 y imc <25 Entonces
        if ( imc <25 )
        {
            printf (  "\npeso normal ");
        }
        else
        {
            printf (  "\nSobrepeso ");
            if ( imc<30 )
            {
                printf (  "\n        Preobesidad ");
            }
            else
            {
                printf (  "\n        Obesidad ");
                if ( imc < 35 )
                {
                    printf (  "\n                leve ");
                }
                else
                {
                    if ( imc < 40 )
                    {
                        printf (  "\n                media ");
                    }
                    else
                    {
                        printf (  "\n                morbida ");
                    }
                }
            }
        }
    }

    return 0;
}

