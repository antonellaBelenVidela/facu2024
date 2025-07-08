#include <iostream>
using namespace std;
int main()
{
    //Definir numero como Entero;
    int numero1, numero2, maximo;

    // Escribir "Algo" ->
    cout << "Ingreso numero" << endl;

    //Leer numero1 ->
    cin >> numero1;

    cout << "Ingrese otro numero distinto" << endl;
    cin >> numero2;

    /*Si (condicion) Entonces
    Sino
    FinSi*/
    if (numero1 > numero2) {
        maximo = numero1;
    } else {
        maximo = numero2;
    }

    cout << "El mayor es: " << maximo << endl;

    // Agregamos esta linea para que la consola no se cierre al terminar
    system("pause");
}

/*

bool -> Logico

int -> Entero
float ->Real

char -> Caracter
string -> String





*/

/*
 "boilerplate": {
        "prefix": "cpp",
        "body": [
            "#include <iostream>",
            "using namespace std;\n",
            "int main () {",
            "\t$1",
            "\treturn 0;",
            "}"
        ],
        "description": "este es el codigo repetitivo para incluir las bibliotecas principales y la funcion main"
    }



*/   
   