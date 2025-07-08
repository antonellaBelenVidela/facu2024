Algoritmo clase3
	definir inicio Como Entero;
	definir limite_final Como Entero;
	escribir "ingrese el inicio";
	leer inicio;// = 5;
	escribir "ingrese el limite final"
	leer limite_final ;//= 15;
	si limite_final == inicio Entonces
		escribir "no hay nada que contar";
	SiNo
		si inicio < limite_final Entonces// si esta coondicion no se da  el flujo del programa va a sino
			Mientras inicio <> limite_final Hacer
				escribir "contando (sumando) en el bucle ", inicio;
				inicio = inicio + 1;
			Fin Mientras
			
		sino // sii inicio es mayor que limite final	
			Mientras inicio <> limite_final Hacer
			//si      inicio <> limite_final entonces
				escribir "contando (restando) en el bucle ", inicio;
				inicio = inicio - 1;
			Fin Mientras
		
			escribir "sali del bucle!!!!!!!!!!!"
		FinSi
;	FinSi
	
	//definir index Como Entero;
	//Para index<-0 Hasta 60 Con Paso 1 Hacer
		//Escribir "Ingrese el " index " numero"
	//fin para
FinAlgoritmo
