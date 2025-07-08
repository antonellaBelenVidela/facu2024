Algoritmo alg1
	Definir jugada_usuario Como entero           // dato entero                     int  
	Definir jugada_compu Como Entero            // dato entero                     int
    dimension jugadas(3) ;                       // coleccion de 3(4) datos int     array de int
	//#-----------------------------tipos de datos preestablecidos
	jugadas(1)<-"Piedra"//roca
    jugadas(2)<-"Papel"
	jugadas(3)<-"tijeras"
	Repetir
		mostrar 'ingrese 1 para Piedra'
		mostrar '        2 para Papel'
		mostrar '        3 para Tijeras'
		mostrar '        4 para Salir'
		Repetir
			leer jugada_usuario
		Hasta Que  jugada_usuario>=1  y jugada_usuario <=4
		si jugada_usuario >=1 y  jugada_usuario <= 3 Entonces
			jugada_compu = azar(3)+1 
			Escribir "El valor aleatorio generado es: ", jugada_compu
			Escribir "corresponde a: ", jugadas(jugada_compu)
			escribir "***************************************************************"
			Escribir "El valor del jugador es: ", jugada_usuario
			Escribir "corresponde a: ", jugadas(jugada_usuario)
			si jugada_compu == jugada_usuario Entonces
				Escribir "empate"
			SiNo
				Escribir "no empate"

				//si jugada_compu==1 y jugada_usuario == 3 Entonces	
				//	Escribir "gano compu"
				//sino 
				//	si jugada_compu==2 y jugada_usuario == 1 Entonces	
				//		Escribir "gano compu"
				//	sino 
				//		si jugada_compu==3 y jugada_usuario == 2 Entonces	
				//			Escribir "gano compu"
				
				si (jugada_compu==1 y jugada_usuario == 3) o (jugada_compu==2 y jugada_usuario == 1) o (jugada_compu==3 y jugada_usuario == 2) Entonces	
					Escribir "gano compu"
				sino 
					Escribir "gano usuario"//				dar vuelta dar las opciones para que gane usuario y pierda por sino la comu
				FinSi
			FinSi
		FinSi
	Hasta Que jugada_usuario==4
	Escribir  "Adios"
FinAlgoritmo
