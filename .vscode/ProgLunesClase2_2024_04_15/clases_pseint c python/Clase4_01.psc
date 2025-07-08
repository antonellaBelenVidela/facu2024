Algoritmo alg1
	Definir valor_1 Como Entero
	Definir valor_2 Como Entero
	Escribir 'ingrese un numero entero : '
	Leer valor_1
	Escribir 'ingrese un segundo numero entero : '
	Leer valor_2
	Si valor_1>0 Y valor_2>0 Entonces
		Escribir 'ambos positivos'
	SiNo
		Si valor_1<0 Y valor_2<0 Entonces
			Escribir 'ambos negativos'
		SiNo
			Si (valor_1>0 Y valor_2<0) O (valor_1<0 Y valor_2>0) Entonces
				Escribir 'hay uno positivo y otro negativo'
			SiNo
				si  (valor_1==0 Y valor_2==0) entonces
					Escribir 'son 0 ambos'
				SiNo
					Escribir 'alguno de los dos es cero'
			FinSi
		FinSi
	FinSi
	// -------	
	Escribir 'chau'
FinAlgoritmo
