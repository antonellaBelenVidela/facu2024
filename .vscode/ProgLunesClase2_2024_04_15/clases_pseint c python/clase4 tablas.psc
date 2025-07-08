Algoritmo tablas
	definir tablaValor,contador,contador2 Como Entero
	escribir "ingrese el valor de tabla a generar:"
	leer tablaValor
	escribir "************************************************************************"
	Para contador <-0 Hasta 10 Con Paso 1 Hacer
		escribir "el valor ",tablaValor, " por ", contador, " es " ,tablaValor*contador
	Fin Para
	escribir "************************************************************************"
	Para contador2 <-0 Hasta (tablaValor*10) Con Paso tablaValor Hacer
		escribir "el valor ",tablaValor, " por ", contador2/tablaValor, " es " ,contador2
	Fin Para
	escribir "************************************************************************"
	Para contador <-10 Hasta 0 Con Paso -1 Hacer
		escribir "el valor ",tablaValor, " por ", contador, " es " ,tablaValor*contador
	Fin Para
	escribir "************************************************************************"
	Para contador2 <-(tablaValor*10) Hasta 0 Con Paso -tablaValor Hacer
		escribir "el valor ",tablaValor, " por ", contador2/tablaValor, " es " ,contador2
	Fin Para	
	escribir "************************************************************************"

FinAlgoritmo
