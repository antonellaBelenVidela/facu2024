/*Se ingresa una edad, mostrar por pantalla alguna de las siguientes leyendas:
❖ ‘menor’ si la edad es menor o igual a 12
❖ ‘cadete’ si la edad está comprendida entre 13 y 18
❖ ‘juvenil’ si la edad es mayor que 18 y no supera los 26
❖ ‘mayor’ en el caso que no cumpla ninguna de las condiciones anteriores*/

#include <iostream>
using namespace std;

int main () {
    int edad;
    cout << "Ingrese una edad: " << endl; 
    cin >> edad;
    string resultado;

    if (edad<=12) {
        resultado="MENOR";
    } else if (edad>=13 && edad<=18) {
        resultado="CADETE";
    } else if (edad>18 && edad<=26){
        resultado="JUVENIL";
    } else {
        resultado="MAYOR";
    }

    cout << "Resultado: " << resultado << endl;
    
    system("pause");
    return 0;
}