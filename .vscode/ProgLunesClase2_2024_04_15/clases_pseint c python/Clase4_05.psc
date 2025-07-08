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
	Segun option Hacer
		1 :
			Mostrar  "usted selecciono sumar"
			resultado = valor_1 + valor_2
		2 :
			Mostrar  "usted selecciono restar"
			resultado = valor_1 - valor_2
		3 :
			Mostrar  "usted selecciono multiplicar"
			resultado = valor_1 * valor_2
		4 :
			Mostrar  "usted selecciono dividir"
			resultado = valor_1 / valor_2//ojo
		De Otro Modo:
			Mostrar  "su eleccion es erronea"		
	Fin Segun
	Escribir "el resultado de la operacion es ", resultado
	
	Escribir 'chau'
FinAlgoritmo
