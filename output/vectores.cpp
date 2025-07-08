#include <iostream>
using namespace std;

/*
void imprimirNegativos()
{
    if()
    {
        cout << 
    }
}
*/

/*
void imprimirDemas()
{
    if 
}
*/

int main () 
{
    /*
    Ingresar un valor entero n < 30 y a continuacion un conjunto de n elementos.
    Si el ultimo elemento del conjunto tiene un valor menor que 10, imprimir los negativos
    y en caso contrario, los demas
    */

   int n;

   int vector[n];

   int contador = 0;

   cout << "Ingresar un valor entero (<30): ";
   cin >> n;

   vector[n] = 0;

   cout << "INGRESAR VECTOR: " << endl;
   
   for (int i = 0; i < n; i++)
   {
       cout << "Posicion " << i << ": ";
       cin >> vector[contador];
       contador ++;
   }

   for (int i = 0; i < n; i++)
   {
       cout << vector[i];
   }
   
   
 
system("pause");
 return 0;
}