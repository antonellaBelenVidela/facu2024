Algoritmo alg1
	Definir option Como Entero
	Definir valor_1 Como real
	Definir valor_2 Como real
	Definir resultado Como real
	Escribir 'ingrese un valor'
	Leer valor_1
	Escribir 'ingrese un option'
	Escribir 'menu'
	Escribir '1) para sumar'
	Escribir '2) para restar'
	Escribir '3) para multiplicar'
	Escribir '4) para dividir'
	Leer option
	Escribir 'ingrese un segundo valor'
	Leer valor_2
	
	
	
	resultado = 0
	si option == 1 Entonces
		Mostrar  "usted selecciono sumar"
		resultado = valor_1 + valor_2
	SiNo
		si option == 2 Entonces
			Mostrar  "usted selecciono restar"
			resultado = valor_1 - valor_2
		sino
			si option == 3 Entonces
				Mostrar  "usted selecciono multiplicar"
				resultado = valor_1 * valor_2
			SiNo
				si option == 4 Entonces
					Mostrar  "usted selecciono dividir"
					resultado = valor_1 / valor_2//ojo
				SiNo
					Mostrar  "su eleccion es erronea"
					
				FINSI
			FinSi
		FinSi
	FinSi
	Escribir "el resultado de la operacion es ", resultado
	
	Escribir 'chau'
FinAlgoritmo
