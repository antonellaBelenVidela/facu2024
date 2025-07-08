Algoritmo función_IMC
	definir peso como real;
	definir altura como real;
	definir imc como real;
	
	Escribir "Por favor ingrese su peso";
	Leer peso;
	Escribir "Por favor ingrese su altura";
	Leer altura;
	imc = peso / (altura*altura);
	Escribir "su IMC es ", imc;
	Escribir "A partir de un peso de ", peso;
	Escribir "y de una altura de ", altura;
	
//	Peso bajo					<18.50
//		Delgadez severa				<16.00
//		Delgadez moderada			16.00-16.99
//		Delgadez leve				17.00-18.49
//	Normal						18.50-24.99
//	Sobrepeso					>=25.00
//		Preobesidad					15.00-29.00
//		Obesidad					>=30.00
//				Leve					30.00-34.99	
//				Media					35.00-39.99
//				morbída					>=40.00
	
	Si imc < 18.50 entonces
		escribir "Peso bajo";
		si imc <16.00 Entonces
			escribir "Delgadez severa";
		SiNo
			si imc < 17 Entonces
				escribir "Delgadeaz moderada";
			SiNo
				escribir "Delgadez leve";
			FinSi
		FinSi
	SiNo
		//escribir "No peso bajo"; este es opcional
		//SI IMC >= 18.5 Y IMC <25 entonces (este es la vercion larga del de abajo)
		Si imc <25 Entonces
			escribir "Peso normal";
	SiNo
		escribir "Sobrepeso";
		si imc <30 entonces
			escribir "Preobesidad";
		SiNo
			escribir "Obesidad";
			si imc <35 Entonces
				escribir 	"Leve";
			Sino 
				si imc <40 Entonces
					escribir 	"Media";
				sino	
					escribir 	"Morbida";
				FinSi
			FinSi
		FinSi
	FinSi
FinSi
FinAlgoritmo
