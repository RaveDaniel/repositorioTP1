#include <stdio.h>
#include <stdlib.h>
#include "funcionesCalculadora.h"

int main()
{
    // Esta funcion va a realizar la suma, resta ,multiplicacion, division, factorial de A Y B
    int a;
    int b;
    printf("Ingrese A: ");
    scanf("%d", &a);
    printf("Ingrese B: ");
    scanf("%d", &b);

    printf("A = %d", a);
    printf("\nB = %d", b);

    printf("\nLa suma de %d + %d es: %d", a, b, Suma(a,b));
    printf("\nLa resta de %d - %d es: %d", a, b, Resta(a,b));
    printf("\nLa multiplicacion de %d * %d es: %d", a, b, Multiplicacion(a,b));
    if(b == 0)
    {
        printf("\nNo se puede dividir por cero");
    }
    else
    {
        printf("\nLa division de %d / %d es: %d", a, b, Division(a,b));
    }
    printf("\nEl factorial de !%d es: %d", a, Factorial(a));
    printf("\nEl factorial de !%d es: %d", b, Factorial(b));
    return 0;
}


