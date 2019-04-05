#include <stdio.h>
#include <stdlib.h>
#include "funcionesCalculadora.h"

// Esta funcion va a realizar la suma de "a" y "b".
int Suma(int a, int b)
{
    int respuesta = 0;
    respuesta = a + b;
    return respuesta;
}
// Esta funcion va a realizar la resta de "a" y "b".
int Resta(int a, int b)
{
   int respuesta = 0;
   respuesta = a - b;
   return respuesta;
}
// Esta funcion va a realizar la multiplicacion  de "a" y "b".
int Multiplicacion(int a, int b)
{
     int respuesta = 0;
     respuesta = a * b;
     return respuesta;
}
// Esta funcion va a realizar la division de "a" y "b".
int Division(int a, int b)
{
     int respuesta = 0;
     respuesta = a / b;
     return respuesta;
}
// Esta funcion va a realizar la factorial de "a" y el de "b".
int Factorial(int a)
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
