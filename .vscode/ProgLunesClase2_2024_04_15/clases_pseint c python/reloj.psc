Algoritmo reloj
	Definir option como entero
	//option = 1;	
	//Mientras option <> 1 Hacer
	//	Escribir "(mientras )Ingrese 1 para iniciar contador, o esperar"
	//	Leer option
	//Fin Mientras
	//escribir "Largamos............."
	
	//Repetir
	//	Escribir "(hasta) Ingrese 1 para iniciar contador, o esperar"
	//	Leer option
	//Hasta Que  option == 1 
	//escribir "Largamos............."
	
	Definir option_2 Como Caracter
	Repetir
		Escribir "(hasta) Ingrese I o i para iniciar contador, o esperar"
		Leer option_2
	Hasta Que  option_2 == "I" o option_2 == "i" 
	escribir "Largamos............."
	
	
	
	Para dia<-1 Hasta 365 Con Paso 1 Hacer
		Para hora<-0 Hasta 23 Con Paso 1 Hacer
			Para minuto<-0 Hasta 59 Con Paso 1 Hacer
				Para seg<-0 Hasta 59 Con Paso 1 Hacer
					Escribir 'dia: ', dia, 'hora: ', hora, ' Minuto : ', minuto, ' seg : ', seg
				FinPara
			FinPara
		FinPara
	FinPara
FinAlgoritmo
//------------------------------------------------------------------------------------------------------------
//               lenguaje C
//           int option =0;
//           while (option != 1)
//           {
//               printf ("\n (mientras )Ingrese 1 para iniciar contador, o esperar" );
//               scanf ("%i", &option);
//            }
//------------------------------------------------------------------------------------------------------------
//           int option =0;
//           do
//           {
//               printf ("\n (mientras )Ingrese 1 para iniciar contador, o esperar" );
//               scanf ("%i", &option);
//            } while (option != 1);
//------------------------------------------------------------------------------------------------------------
//               lenguaje Python
// 			option = 0
//          while option != "1":
//               option = input ("\(mientras )Ingrese 1 para iniciar contador, o esperar" )# siempre ingresa un string
//
//        
