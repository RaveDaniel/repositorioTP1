#include <stdio.h>
#include <stdlib.h>
#include "funcionesCalculadora.h"
#define size 10//dimension del array
int main()
{
    // Aca se pide los datos al usuario
    char valorA[size];
    int a;
    char valorB[size];
    int b;
    int aux;

    do
    {
        printf("Ingresa un numero Entero: ");
        scanf("%s",valorA);
        aux=esNumerica(valorA);

    }while(aux==0);

    a=atoi(valorA);
    do
    {
        printf("Ingresa un numero Entero : ");
        scanf("%s",valorB);
        aux=esNumerica(valorB);

    }while(aux==0);

    b=atoi(valorB);
    //Aca se muestra los dos datos en pantalla
    printf("Valor de A = %d\n", a);//se muestra A y da un salto de linea al final
    printf("Valor de B = %d", b);
    //En esta parte del algoritmo, se van llamando a las funciones por separado
    printf("\nLa suma de %d + %d es: %d", a, b, suma(a,b));//llamado a la funcion Suma
    printf("\nLa resta de %d - %d es: %d", a, b, resta(a,b));//llamado a la funcion Resta
    printf("\nLa multiplicacion de %d * %d es: %d", a, b, multiplicacion(a,b));//llamado a la funcion Multiplicacion
    if(b == 0)//valida que el segundo valor no sea CERO para evitar un error matematico
    {
        printf("\nNo se puede dividir por cero");
    }
    else
    {
        printf("\nLa division de %d / %d es: %d", a, b, division(a,b));//llamado a la funcion Division
    }
    printf("\nEl factorial de !%d es: %d", a, factorial(a));//llamado a la funcion factoria de A
    printf("\nEl factorial de !%d es: %d", b, factorial(b));//llamado a la funcion factoria de B
    return 0;
}


