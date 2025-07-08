Algoritmo reloj
	Definir mes,dia,hora,minuto,seg como entero
	dimension nombresMeses(12) ;
    nombresMeses(1) <- "Enero"
    nombresMeses(2) <- "Febrero"
    nombresMeses(3) <- "Marzo"
    nombresMeses(4) <- "Abril"
    nombresMeses(5) <- "Mayo"
    nombresMeses(6) <- "Junio"
    nombresMeses(7) <- "Julio"
    nombresMeses(8) <- "Agosto"
    nombresMeses(9) <- "Septiembre"
    nombresMeses(10) <- "Octubre"
    nombresMeses(11) <- "Noviembre"
    nombresMeses(12) <- "Diciembre"
	dimension cantidadDeDias(12) ;
    cantidadDeDias(1) <- 31
    cantidadDeDias(2) <- 29
    cantidadDeDias(3) <- 31
    cantidadDeDias(4) <- 30
    cantidadDeDias(5) <- 31
    cantidadDeDias(6) <- 30
    cantidadDeDias(7) <- 31
    cantidadDeDias(8) <- 31
    cantidadDeDias(9) <- 30
    cantidadDeDias(10) <- 31
    cantidadDeDias(11) <- 30
    cantidadDeDias(12) <- 31
	para mes <-1 Hasta 12 con paso 1 Hacer
		Para dia<-1 Hasta cantidadDeDias[mes] Con Paso 1 Hacer
			Para hora<-0 Hasta 23 Con Paso 1 Hacer
				Para minuto<-0 Hasta 59 Con Paso 1 Hacer
					Para seg<-0 Hasta 59 Con Paso 1 Hacer
						Escribir 'mes :', mes,' - ' nombresMeses[mes]  ,': dia: ', dia, ' hora: ', hora, ' Minuto : ', minuto, ' seg : ', seg
					FinPara
				FinPara
			FinPara
		FinPara
	FinPara
FinAlgoritmo