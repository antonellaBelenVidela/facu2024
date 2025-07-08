Algoritmo MostrarMeses
	definir mes Como Entero
    dimension nombresMeses(12)
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
    
    Para mes <- 1 Hasta 12 Hacer
        Escribir "Mes ", mes, ": ", nombresMeses[mes]
    FinPara
FinAlgoritmo