#include <stdio.h>
int main()
{
    printf("Hola mundo IT 2024 desde C");//codigo en C
    float a=0;
    float b=0;
    float resultado=0;
    a= 9.5;
    b= 2.333;
    resultado = a+b;
    printf ("\nel resultado es  a + b = %f",resultado);
    resultado = a-b;
    printf ("\nel resultado es  a - b = %f",resultado);
    resultado = a/b;
    printf ("\nel resultado es  a / b = %f",resultado);
    resultado = a*b;
    printf ("\nel resultado es  a * b = %f",resultado);



    int entrada=0;
    int ano_en_que_naci=0;
    printf ("\nIngrese su edad:");
    scanf("%i",&entrada);
    ano_en_que_naci = 2024 -entrada;
    printf ("\nanio en que naci: %i",ano_en_que_naci);
    return 0;






}

