//fuente : https://es.wikipedia.org/wiki/%C3%8Dndice_de_masa_corporal
		
//		Clasificaci�n   IMC (kg/m�)
		
//		Valores principales Valores adicionales
//		Peso bajo                  <18.50
//			Delgadez severa            <16.00
//			Delgadez moderada          16.00-16.99
//			Delgadez leve              17.00-18.49
//		Normal                     18.50-24.99
//		Sobrepeso                  >=25.00
//			Preobesidad                25.00-29.99
//			Obesidad                   >=30.00
//				leve                       30.00-34.99
//				media                      35.00-39.99
//				m�rbida                    40.00
//		
//		Algunas organizaciones consideran sobrepeso un �ndice superior a 27.0.
//		En adultos (mayores de 18 a�os) estos valores son independientes de la edad. sea hombre o mujer.
//		
//		Categor�a de nivel de peso  Intervalo del percentil
//		Bajo peso                   Menos del percentil 5
//		Eutr�fico                   > percentil 5 y < percentil 85
//		Sobrepeso                   > 85 hasta y < percentil 95
//		Obeso                       > percentil 95
		
//		Limitaciones
//		Correlaci�n entre el IMC y el porcentaje de grasa corporal (%BF) de 8550 hombres en una estad�stica realizada por el National Health and Nutrition Examination Survey. Los datos en el cuadrante superior izquierdo y en el inferior derecho muestran algunas limitaciones del IMC.9?
//		El matem�tico Keith Devlin y el Center for Consumer Freedom (asociaci�n de la industria de la restauraci�n) defiende que el error en el IMC es significante y tan habitual que lo hace in�til para la evaluaci�n de la salud.10?11? El profesor Eric Oliver de la Universidad de Chicago dijo sin embargo que el IMC era conveniente pero tambi�n era una medida del peso inexacto. que fuerza a ciertos grupos de la poblaci�n y deber�a ser revisado.12?
//			Escala
//			El exponente en el denominador de la f�rmula para el IMC es arbitrario. El IMC depende del peso y del �cuadrado� de la altura. Mientras que la masa se incrementa del orden de la tercera potencia. al ser una medida que depende del volumen tridimensional. implica que los individuos m�s altos con la misma forma de cuerpo y composici�n relativa tienen un �ndice mayor de BMI.13?
//			Ignora variaciones en las caracter�sticas f�sicas
//			El IMC a�ade aproximadamente un 10 % para los individuos m�s altos y recorta aproximadamente otros 10 % para los m�s peque�os. En otras palabras. una persona con una talla peque�a podr�a tener m�s grasa que el �ptimo. pero su BMI reflejar que es �normal�. Por el contrario. una persona de talla grande (o alto) podr�a ser un individuo saludable con un �ndice de grasa bajo. pero ser clasificado con sobrepeso14?
//					No diferencia entre masa muscular y masa grasa
//					Variaci�n en la relaci�n con la salud
//					Un estudio publicado por el Journal of the American Medical Association en 2005 demostr� que las personas con sobrepeso tienen una probabilidad de morir similar a las personas con peso normal tal y como lo define el IMC. mientras aquellas �obesas� o �por debajo de lo normal� tienen una probabilidad mayor de morir.15?
//						Un estudio de 2010 que siguieron a 11 000 sujetos durante 8 a�os concluy� que el IMC no es una buena medida para considerar el riesgo de ataque al coraz�n. infarto de miocardio o muerte. Una medida mejor podr�a ser el �ndice cintura-altura.16?
//							Un estudio GWAS publicado en 2015 (realizado en poblaci�n europea). consigui� identificar loci (Locus) relacionados con el IMC y que ejerc�an diferentes efectos dependiendo de la edad del grupo de poblaci�n. Gracias a esto. se pudieron establecer co-relaciones con rasgos cardiometab�licos u obesidad. Sin embargo. a�n es necesario investigar m�s en profundidad estas relaciones con muestras poblacionales m�s amplias. con el fin de obtener una mejor significaci�n y objetivizaci�n de los par�metros.17?
//							IMC y diabetes
//							Saber si el �ndice de masa corporal puede correlacionarse con enfermedades como la diabetes tipo 2. ha despertado gran inter�s en la comunidad cient�fica. Sin embargo. las investigaciones a la fecha no han confirmado una relaci�n directa entre estos dos par�metros.18?19?
//								El inter�s despert� a partir de datos extra�dos de dos servicios de medicina en Estados Unidos. La mayor�a de los pacientes con �ndice de masa corporal alto ten�an tendencia a trastornos en el metabolismo cr�nicos como la diabetes. Sin embargo. los resultados obtenidos en las investigaciones no lo confirmaron. Dichos estudios dejan en claro que el IMC no es el mejor m�todo para estimar si una persona puede tener diabetes o no.20?
//										'''





//Definir <var1> , <var2> , ... , <varN>  Como [REAL/ENTERO/LOGICO/CARACTER]; 

Algoritmo funcion_imc
//------------------------------------------------------------------	
	definir peso como real;
	definir altura como real;
	definir imc como real;
	//------------------------------------------------------------------
	//                               ingreso de datos
	Escribir "Por favor ingrese su peso:";
	//peso <- 80;
	Leer peso;
	Escribir "Por favor ingrese su altura:";
	// altura <- 1.8;
	Leer altura ;

	//------------------------------------------------------------------
	//                               calculo de imc
	imc <- peso / (altura*altura);
	Escribir "su IMC es ", imc;
	Escribir "a partir de un peso de  ", peso;
	Escribir "y de una altura de ", altura;

	//		Sobrepeso                  >=25.00
	//			Obesidad                   >=30.00
	//				m�rbida                    40.00
	//				media                      35.00-39.99
	//				leve                       30.00-34.99
	//			Preobesidad                25.00-29.99	
	//		Normal                     18.50-24.99
	//		Peso bajo                  <18.50
	//			Delgadez leve              17.00-18.49
	//			Delgadez moderada          16.00-16.99
	//			Delgadez severa            <16.00
	
	
	//------------------------------------------------------------------
	//                               condicion de salida
	Si imc < 18.5 Entonces
		Escribir "Peso bajo ";
		Si imc < 16 Entonces
			Escribir "        Delgadez severa ";
		SiNo
			Si imc < 17 Entonces
				Escribir "        Delgadez moderada ";
			SiNo 
				Escribir "        Delgadez leve ";
			FinSi
		FinSi
	SiNo
		//Escribir "no Peso bajo ";
		//demas Si imc >= 18.5 y imc <25 Entonces
		Si imc <25 Entonces
			Escribir "peso normal ";
		SiNo
			Escribir "Sobrepeso ";
			Si imc<30 Entonces
				Escribir "        Preobesidad ";
			SiNo
				Escribir "        Obesidad ";
				Si imc < 35 Entonces
					Escribir "                leve ";
				SiNo
					Si  imc < 40 Entonces
						Escribir "                media ";
					SiNo
						Escribir "                morbida ";
					Fin Si
				Fin Si
			Fin Si
		Fin Si
	Fin Si
FinAlgoritmo