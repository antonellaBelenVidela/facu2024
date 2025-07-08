Algoritmo tipos_numeros
	definir dato_numero como entero;
	Escribir "escriba un numero:";
	Leer dato_numero;
	si dato_numero > 0 Entonces
		Escribir "el numero es positivo:", dato_numero ;
	SiNo
		si dato_numero < 0 Entonces
			Escribir "el numero es negativo:", dato_numero ;
		sino 
			escribir "cero es neutro";
		FinSi
	FinSi
	escribir "ok";	
	//-------------------------------------------------------------------------------------
	si dato_numero < 0 Entonces
		Escribir "el numero es negativo:", dato_numero ;
	SiNo
		si dato_numero > 0 Entonces
			Escribir "el numero es positivo:", dato_numero ;
		sino 
			escribir "cero es neutro";
		FinSi
	FinSi
	escribir "ok";	
	//-------------------------------------------------------------------------------------
	si dato_numero == 0 Entonces
		escribir "cero es neutro";
	SiNo
		si dato_numero > 0 Entonces
			Escribir "el numero es positivo:", dato_numero ;
		sino 
			Escribir "el numero es negativo:", dato_numero ;
		FinSi
	FinSi
	escribir "ok";	
	//-------------------------------------------------------------------------------------
	si dato_numero == 0 Entonces
		escribir "cero es neutro";
	SiNo
		si dato_numero < 0 Entonces
			Escribir "el numero es negativo:", dato_numero ;
		sino 
			Escribir "el numero es  positivo:", dato_numero ;
		FinSi
	FinSi
	escribir "ok";	
	
	
	
	
	
FinAlgoritmo
