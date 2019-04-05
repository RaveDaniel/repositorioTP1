#include <stdio.h>
#include <stdlib.h>
#include "funcionesCalculadora.h"
#include <string.h>
#include <ctype.h>
// Esta funcion va a realizar la suma de "a" y "b".
int suma(int a, int b)
{
    int respuesta = 0;
    respuesta = a + b;
    return respuesta;
}
// Esta funcion va a realizar la resta de "a" y "b".
int resta(int a, int b)
{
   int respuesta = 0;
   respuesta = a - b;
   return respuesta;
}
// Esta funcion va a realizar la multiplicacion  de "a" y "b".
int multiplicacion(int a, int b)
{
     int respuesta = 0;
     respuesta = a * b;
     return respuesta;
}
// Esta funcion va a realizar la division de "a" y "b".
int division(int a, int b)
{
     int respuesta = 0;
     respuesta = a / b;
     return respuesta;
}
// Esta funcion va a realizar la factorial de "a" y el de "b".
int factorial(int a)
{
     int i;
     int respuesta = 1;
     for(i=1; i<=a; ++i)
        {
            respuesta *= i;
        }
     return respuesta;
}
// Esta funcion va a realizar la factorial de "b".  NO SE PORQUE ESTA FUNCION NO HACE FALTA, SOLO CON EL FACTORIAL DE A HACE EL DE B TAMBIEN.
/*int Factorial(int b)
{
     int i;
     int respuesta = 1;
     for(i=1; i<=b; ++i)
        {
            respuesta *= i;
        }
     return respuesta;
}*/
int esNumerica(char valorA[])//esta funcion valida que sean solo numeros
{
    int i;
    for(i=0; i<strlen(valorA); i++)
    {
        if(!(isdigit(valorA[i])))
        {
            printf("\nError. Ingresa solo numeros :\n");
            return 0;
        }
    }
    return 1;
}
