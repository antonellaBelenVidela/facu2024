
#!/usr/bin/env python
# -*- coding: utf-8 -*-
# AGT1973
# Copyright 2023 Ariel H Garcia Traba <cursos.agt@gmail.com> +54 9 11 4475 4637
import os
import time
try:
    from colorama import *
except Exception as error_:
    import pip
    pip.main(['install', 'colorama'])
    from colorama import *
def limpiar():
    os.system('cls' if os.name == "ce" or os.name == "nt" or os.name == "dos"  else 'clear')

def pausa():
    input("\tPresione una tecla para continuar")
    print("\n")

limpiar();
def ya_hechos():
    pass


'''
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

'''
limpiar()
print(F'''{Fore.BLACK+Back.GREEN}
|          imc = peso /altura**2                       |
|Peso bajo                   <18.50                    |
     Delgadez severa            <16.00                |
     Delgadez moderada          16.00-16.99           |
     Delgadez leve              17.00-18.49           |
Normal                      18.50-24.99               |
Sobrepeso                   ≥25.00                    |
     Preobesidad                25.00-29.99           |
     Obesidad                   ≥30.00                |
          leve                      30.00-34.99       |
          media                     35.00-39.99       |
          mórbida                   40.00             |'''+Style.RESET_ALL)
def ya_hechos():


    pausa()
    minimo = 2
    maximo = 200

    edad = ""
    # ~ print ("pediatra".center(50))
    while not (edad.isdigit() and int(edad)>= minimo and int(edad)<=maximo) :
        edad= input ("Ingrese su edad:")

    print (f"el dato ingresado es {edad} del tipo o clase {type(edad)}")
    edad = int (edad)

    #'bool' object has no attribute 'replace'




    print (f"el dato ingresado es {edad} del tipo o clase {type(edad)}")
    #-----------------------------------------------------------------------
    peso = ""
    while not (peso.replace(".","",1).isdigit() and float(peso)>= 0.5 and float(peso)<=250) :
        peso= input ("Ingrese su peso:").lower().replace("kg","").replace(",",".").replace(" ","")
    print (f"el dato ingresado es {peso} del tipo o clase {type(peso)}")
    peso = float (peso)
    print (f"el dato ingresado es {peso} del tipo o clase {type(peso)}")
    #-----------------------------------------------------------------------


    unidad = ""
    peso = ""
    while not (peso.replace(".","",1).isdigit() and float(peso)>= 0.5 and float(peso)<=250) :
        peso= input ("Ingrese su peso con kg o lb o gr:").lower().replace(",",".").replace(" ","")
        if "lb" in peso or "libra" in peso:
            unidad = "lb"
            peso= peso.replace("lb","").replace("libra","")
        elif "grs" in peso or "gr" in peso or "gramos" in peso:
            unidad = "gr"
            peso= peso.replace("gramos","").replace("grs","").replace("gr","")

    # en kg
    if unidad =="gr":
        peso = float(peso )/1000
    elif unidad == "lb":
        peso = float(peso )/0.45

    print (f"el dato ingresado es {peso} del tipo o clase {type(peso)}")
    #-----------------------------------------------------------------------
    #-----------------------------------------------------------------------


    unidad = ""
    altura = ""
    while not (altura.replace(".","",1).isdigit() and float(altura)>= 0.20 and float(altura)<=2.50) :
        altura= input ("Ingrese su altura con mtr o pulgadas o cm:").lower().replace(",",".").replace(" ","")
        if "pulgada" in altura or '"' in altura:
            unidad = "pulgadas"
            altura= altura.replace('"',"").replace("pulgadas","").replace("pulgada","")
        elif "centimetro" in altura or "cm" in altura:
            unidad = "cm"
            altura= altura.replace("centimetros","").replace("centimetro","").replace("cm","")

    # en kg
    if unidad =="pulgadas":
        altura = float(altura )*2.54
    elif unidad == "cm":
        altura = float(altura )/100

    print (f"el dato ingresado es {altura} del tipo o clase {type(altura)}")


    # ~ peso = "50 kg y 400 gramos"
    # ~ if ("kg" in peso and ( "gramos" in peso or  "gr" in peso or  "grs" in peso) ):
        # ~ peso = peso.replace(" ","").replace(",","").replace("gramos","").replace("grs","").replace("gr","").replace("kg",".").replace("y","")
    # ~ peso = float(peso)
    # ~ print (peso)

    # ~ 50 kg y 400 gramos








def input_validado(texto ,tipo_de_dato, *min_max  ):
    minimo,maximo = min_max
    dato_desde_usuario=""
    if tipo_de_dato==str:
        while not (dato_desde_usuario.replace(" ","").isalnum() and \
                    len(dato_desde_usuario) >= minimo and \
                    len(dato_desde_usuario) <= maximo) :
            dato_desde_usuario= input (f"{texto} :").title()
    else:
        while not (dato_desde_usuario.replace(".","",1).isdigit() and \
                    float(dato_desde_usuario)>= minimo and \
                    float(dato_desde_usuario)<=maximo) :
            dato_desde_usuario= input (f"{texto} :")
    resultado_final = tipo_de_dato(dato_desde_usuario)
    return resultado_final

"""
edad     str >  int   en años entre (minimo y maximo)
peso     str >  float en kg
altura   str >  float en mts
"""





diccionario = {
                "Nombre":{
                        "texto"         :"Ingrese su nombre",
                        "tipo_de_dato"  :str,
                        "min_max"       :(2,50),
                        "info"          :""
                        },
                "Apellido":{
                        "texto"         :"Ingrese su Apellido",
                        "tipo_de_dato"  :str,
                        "min_max"       :(2,50),
                        "info"          :""
                        },
                "edad":{
                        "texto"         :"Ingrese su edad",
                        "tipo_de_dato"  :int,
                        "min_max"       :(0,125),
                        "info"          :""
                        },
                "peso":{
                        "texto"         :"Ingrese su peso",
                        "tipo_de_dato"  :float,
                        "min_max"       :(0.5,250),
                        "info"          :""
                        },
                "altura":{
                        "texto"         :"Ingrese su altura",
                        "tipo_de_dato"  :float,
                        "min_max"       :(0.200,3),
                        "info"          :""
                        }
                }
for clave in diccionario.keys():
    diccionario[clave]["info"] = input_validado(diccionario[clave]["texto"] ,diccionario[clave]["tipo_de_dato"], *diccionario[clave]["min_max"]  )

for clave in diccionario.keys():
    print (f"\t{clave=}")
    for item, valor in diccionario[clave].items():
        print (f"\t\t{item}-- {valor}")


# ~ altura = input_validado("Ingrese su altura",float, *(0.2,3)   )

print(F'''{Fore.BLACK+Back.GREEN}
_______________________________________________________
|          imc = peso /altura**2                       |
|Peso bajo                   <18.50                    |
|     Delgadez severa            <16.00                |
|     Delgadez moderada          16.00-16.99           |
|     Delgadez leve              17.00-18.49           |
|Normal                      18.50-24.99               |
|Sobrepeso                   ≥25.00                    |
|     Preobesidad                25.00-29.99           |
|     Obesidad                   ≥30.00                |
|          leve                      30.00-34.99       |
|          media                     35.00-39.99       |
|          mórbida                   40.00             |
|______________________________________________________|
'''+Style.RESET_ALL)


diccionario["IMC"] = diccionario["peso"]["info"]   /    (diccionario["altura"]["info"]**2)


print (f"{diccionario['IMC']=}")
##############################################################
"""
if diccionario['IMC'] <18.50:  #  True
    print (f"\tPeso bajo  ")
else:#                             False
    # Peso NO bajo
    if diccionario['IMC'] <25: # False        True
        print (f"\tPeso normal  ")# imc >18.50 and imc< 25
    else:#                         False        False
        print (f"\tSobre Peso")#imc >= 25
"""
#################################   primer paso
"""
if diccionario['IMC'] <18.50:  #  True
    print (f"\tPeso bajo  ")
elif diccionario['IMC'] <25:   # False        True
    print (f"\tPeso normal  ")# imc >18.50 and imc< 25
else:#                         False        False
    print (f"\tSobre Peso")#imc >= 25
"""
#################################   segundo paso

"""
if diccionario['IMC'] <18.50:  #  True
    print (f"\tPeso bajo  ")
    if diccionario['IMC'] < 16:
         print (f"\t\Delgadez severa")
    elif  diccionario['IMC'] < 17:          #diccionario['IMC'] >= 16 and diccionario['IMC'] < 17
         print (f"\t\Delgadez moderada")
    else:                                   #elif diccionario['IMC'] >= 17 and diccionario['IMC'] <18.50
         print (f"\t\Delgadez leve")

elif diccionario['IMC'] <25:   # False        True
    print (f"\tPeso normal  ")# imc >18.50 and imc< 25
else:#                         False        False
    print (f"\tSobre Peso")#imc >= 25

"""
#################################   tercer paso
"""
|Sobrepeso                   ≥25.00                    |
|     Preobesidad                25.00-29.99           |
|     Obesidad                   ≥30.00                |


"""

"""
if diccionario['IMC'] <18.50:  #  True
    print (f"\tPeso bajo  ")
    if diccionario['IMC'] < 16:
         print (f"\t\tDelgadez severa")
    elif  diccionario['IMC'] < 17:          #diccionario['IMC'] >= 16 and diccionario['IMC'] < 17
         print (f"\t\tDelgadez moderada")
    else:                                   #elif diccionario['IMC'] >= 17 and diccionario['IMC'] <18.50
         print (f"\t\tDelgadez leve")

elif diccionario['IMC'] <25:   # False        True
    print (f"\tPeso normal  ")# imc >18.50 and imc< 25
else:#                         False        False
    print (f"\tSobre Peso")#imc >= 25
    if diccionario['IMC'] < 30:
         print (f"\t\tPreobesidad")
    else:                                   #elif diccionario['IMC'] >= 17 and diccionario['IMC'] <18.50
         print (f"\t\tObesidad")
"""
#################################   cuarto paso
"""
|Sobrepeso                   ≥25.00                    |
|     Preobesidad                25.00-29.99           |
|     Obesidad                   ≥30.00                |
|          leve                      30.00-34.99       |
|          media                     35.00-39.99       |
|          mórbida                   40.00             |
|______________________________________________________|

"""
if diccionario['IMC'] <18.50:  #  True
    print (f"\tPeso bajo  ")
    if diccionario['IMC'] < 16:
         print (f"\t\tDelgadez severa")
    elif  diccionario['IMC'] < 17:          #diccionario['IMC'] >= 16 and diccionario['IMC'] < 17
         print (f"\t\tDelgadez moderada")
    else:                                   #elif diccionario['IMC'] >= 17 and diccionario['IMC'] <18.50
         print (f"\t\tDelgadez leve")

elif diccionario['IMC'] <25:   # False        True
    print (f"\tPeso normal  ")# imc >18.50 and imc< 25
else:#                         False        False
    print (f"\tSobre Peso")#imc >= 25
    if diccionario['IMC'] < 30:
        print (f"\t\tPreobesidad")
    else:                                      #elif diccionario['IMC'] >= 30 and diccionario['IMC'] <35
        print (f"\t\tObesidad")
        if diccionario['IMC'] < 35:
             print (f"\t\t\t leve")
        elif  diccionario['IMC'] < 40:          #diccionario['IMC'] >= 35 and diccionario['IMC'] < 40
             print (f"\t\t\t media")
        else:                                   #elif diccionario['IMC'] >= 17 and diccionario['IMC'] <18.50
             print (f"\t\t\t mórbida")


