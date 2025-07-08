Algoritmo alg1
	Definir option Como Caracter
	Definir valor_1 Como real
	Definir valor_2 Como real
	Definir resultado Como real
	Escribir 'ingrese un valor'
	Leer valor_1
	Escribir 'ingrese una option (+,-,/,*)'
	Leer option
	Escribir 'ingrese un segundo valor'
	Leer valor_2
	resultado = 0
	Segun option Hacer
		'+' :
			Mostrar  "usted selecciono sumar"
			resultado = valor_1 + valor_2
		'-' :
			Mostrar  "usted selecciono restar"
			resultado = valor_1 - valor_2
		'*' :
			Mostrar  "usted selecciono multiplicar"
			resultado = valor_1 * valor_2
		'/' :
			Mostrar  "usted selecciono dividir"
			si valor_2 == 0 Entonces
				Mostrar  "Error:    divisor igual a 0 imposible"
				resultado = 0
			SiNo
				resultado = valor_1 / valor_2
			FinSi
		De Otro Modo:
			Mostrar  "su eleccion es erronea"		
	Fin Segun
	Escribir "el resultado de la operacion es ", resultado
	Escribir 'chau'
FinAlgoritmo
