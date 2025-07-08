Algoritmo alg1
	Definir valor_1 Como Entero
	Definir valor_2 Como Entero
	Definir valor_3 Como Entero
	Definir valor_4 Como Entero
	Escribir 'ingrese un numero entero : '
	Leer valor_1
	Escribir 'ingrese un segundo numero entero : '
	Leer valor_2
	Escribir 'ingrese un tercer numero entero : '
	Leer valor_3
	Escribir 'ingrese un cuarto numero entero : '
	Leer valor_4
	Si valor_1>0 Y valor_2>0 y valor_3>0 Y valor_4>0Entonces
		Escribir 'los 4 son positivos'
	SiNo
		Si valor_1<0 Y valor_2<0 y valor3<0 Y valor_4<0 Entonces
			Escribir 'los 4 son negativos'
		SiNo
			Si (valor_1==0 Y valor_2==0 Y valor_3==0 Y valor_4==0) Entonces
				Escribir 'los 4 son neutros o 0'
			SiNo
				si  (valor_1==0 o valor_2==0 o valor_3==0 o valor_4==0) entonces
					Escribir 'alguno/s es/son 0 y al menos 1 no lo es '
				SiNo
					Escribir 'ninguno es 0 y parte son positivos y parte negativos'
				FinSi	
			FinSi
		FinSi
	FinSi
	// -------	
	Escribir 'chau'
FinAlgoritmo
