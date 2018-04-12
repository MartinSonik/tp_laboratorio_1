#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    char seguir='s';
    int opcion=0;
    float resultado;
    float numA=0;
    float numB=0;
        while(seguir=='s')
        {
        printf("1- Ingresar 1er operando (A=%.2f)\n",numA);
        printf("2- Ingresar 2do operando (B=%.2f)\n",numB);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el numero: \n");
                scanf("%f",&numA);
                break;
            case 2:
                printf("Ingrese el numero: \n");
                scanf("%f",&numB);
                break;
            case 3:
                resultado = sumar(numA,numB);
                printf("Suma: %.2f\n",resultado);
                break;
            case 4:
                resultado = restar(numA,numB);
                printf("Resta: %.2f\n",resultado);
                break;
            case 5:
                resultado = dividir(numA,numB);
                printf("Division: %.2f\n",resultado);
                break;
            case 6:
                resultado = multiplicar(numA,numB);
                printf("Multiplicacion: %.2f\n",resultado);
                break;
            case 7:
                resultado = factorial(numA);
                printf("Factorial: %.2f \n",resultado);
                break;
            case 8:
                resultado = sumar(numA,numB);
                printf("Suma: %.2f\n",resultado);
                resultado = restar(numA,numB);
                printf("Resta: %.2f\n",resultado);
                resultado = dividir(numA,numB);
                printf("Division: %.2f\n",resultado);
                resultado = multiplicar(numA,numB);
                printf("Multiplicacion: %.2f\n",resultado);
                resultado = factorial(numA);
                printf("Factorial: %.2f\n",resultado);
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf(" Ingrese una de las opciones indicadas en el menu\n");
                break;
        }
    }
    return 0;
}
