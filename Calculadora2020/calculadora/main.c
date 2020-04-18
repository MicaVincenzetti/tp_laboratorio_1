#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

int main()
{
    int x;
    int y;
    float resultado;
    char opcion;

do
    {
            printf(" \n\n     ***MENU DE OPCIONES***  \n\n");
            printf(" \n1) Ingresar 1er operando = A. \n");
            printf("2) Ingresar 2do operando = B. \n");
            printf(" Calcular todas las operaciones:  \n");
            printf("   3) Calcular la suma (A+B)\n");
            printf("   4) Calcular la resta (A-B)\n");
            printf("   5) Calcular la multiplicacion (A*B)\n");
            printf("   6) Calcular la division (A/B)\n");
            printf("   7) Calcular el factorial (A!)\n");
            printf("   8) Calcular el factorial (B!)\n");
            printf(" 9) Informar los resultados de todas las funciones. \n");
            printf("  Salir. \n");

            printf( "\n   Introduzca opcion (1-10):  " );
            fflush( stdin );
            scanf( "%c", &opcion);




    switch(opcion)
        {
            case '1':
                printf("Ingresar 1er operando. \n ");
                scanf("%d", &x);
                printf("El primer numero elegido es: %d.", x);
                break;


            case '2':
                printf("Ingresar 2do operando. \n");
                scanf("%d", &y);
                printf("El segundo numero elegido es: %d. \n\n", y);
                break;


            case '3':
                resultado = sumar(x,y);
                printf("\n -El resultado de %d mas %d = %.2f \n", x,y,resultado);
                break;


            case '4':
                resultado = restar(x,y);
                printf("\n -El resultado de %d menos %d = %.2f \n", x,y,resultado);
                break;


            case '5':
                resultado = multiplicar(x, y);
                printf("\n -El resultado de %d multiplicado por  %d = %.2f \n", x, y, resultado);
                break;


            case '6':
                if(y != 0)
                    {
                        resultado = dividir(x,y);
                        printf("\n -El resultado de %d dividido %d = %.2f \n", x,y,resultado);
                    }else
                    {
                        printf("\n ¡No se puede dividir por 0! \n");
                    }
                break;


            case '7':
               if(x == '0')
                    {
                        printf("\n -El factorial de %d es: 1 \n", x);
                    }else
                if(x < 0)
                    {
                        printf("\n -El factorial de %d no se puede realizar \n",x);
                    }else
                    {
                        resultado = factorialA (x);
                        printf("\n -El factorial de %d es: %.2f \n", x, resultado);
                    }
                break;


            case '8':
                if(y == '0')
                    {
                        printf("\n -El factorial de %d es: 1 \n", y);
                    }else
                if(y < 0)
                    {
                        printf("\n -El factorial de %d no se puede realizar. \n",y);
                    }else
                    {
                        resultado = factorialB (y);
                        printf("\n -El factorial de %d es: %.2f \n", y, resultado);
                    }
                break;


            case '9':
                //SUMA
                resultado = sumar(x,y);
                printf("\n -El resultado de %d mas %d = %.2f \n", x,y,resultado);

                //RESTA
                resultado = restar(x,y);
                printf("\n -El resultado de %d menos %d = %.2f \n", x,y,resultado);

                // MULTIPLICACION
                resultado = multiplicar(x, y);
                printf("\n -El resultado de %d multiplicado por  %d = %.2f \n", x, y, resultado);

                //DIVISION
                if(y != 0)
                    {
                        resultado = dividir(x,y);
                        printf("\n -El resultado de %d dividido %d = %.2f \n", x,y,resultado);
                    }else
                    {
                        printf("\n ¡No se puede dividir por 0! \n");
                    }

                //FACTORIAL DEL PRIMER NUMERO
                if(x == '0')
                    {
                        printf("\n -El factorial de %d es: 1 \n", x);
                    }else
                if(x < 0)
                    {
                        printf("\n -El factorial de %d no se puede realizar \n",x);
                    }else
                    {
                        resultado = factorialA (x);
                        printf("\n -El factorial de %d es: %.2f \n", x, resultado);
                    }

                //FACTORIAL DEL SEGUNDO NUMERO
                if(y == '0')
                    {
                        printf("\n -El factorial de %d es: 1 \n", y);
                    }else
                if(y < 0)
                    {
                        printf("\n -El factorial de %d no se puede realizar \n",y);
                    }else
                    {
                        resultado = factorialB (y);
                        printf("\n -El factorial de %d es: %.2f \n", y, resultado);
                    }


            } //FIN DEL SWICHT

    } while ( opcion != 10 );

        system("PAUSE");
        system("cls");

    return 0;
} //FIN DEL MAIN


