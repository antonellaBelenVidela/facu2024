Algoritmo sin_titulo
	definir entrada Como Caracter// porque no voy a operar aritmeticamente con el valor los tomo como char o string
	
	
	
	Escribir "ingrese un dato"
	leer entrada
	Segun entrada Hacer
		"1":
			Escribir "1ra opcion"
			
		"2":
			Escribir "2da opcion"
		"3":
			Escribir "3ra opcion"
		De Otro Modo:
			Escribir "opcion no valida"
	Fin Segun
	//escribir "10 x entrada = ", entrada*10

	Escribir "*****************************************************************************************"
	definir entrada2 Como entero// como valor numerico xq voy a trabajarlo aritmeticamente
	Escribir "ingrese un dato"
	leer entrada2
	Segun entrada2 Hacer
		1:
			Escribir "1ra opcion"
		2:
			Escribir "2da opcion"
		3:
			Escribir "3ra opcion"
		De Otro Modo:
			Escribir "opcion no valida"
	Fin Segun
	escribir "10 x entrada2 = ", entrada2*10
	
	definir variable_numerica Como entera  // nota se definen en los 1ros renglones no aca
	Para variable_numerica<-1 Hasta 100 Con Paso 1 Hacer
		Escribir "el valor de variable es :", variable_numerica
	Fin Para
	
FinAlgoritmo
