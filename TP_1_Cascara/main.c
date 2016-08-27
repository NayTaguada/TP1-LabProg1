#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numUno = 0;
    float numDos = 0;
    float suma = 0;
    float resta = 0;
    float division = 0;
    float multp = 0;
    float factorial = 1;
    int i = 0;
    int entero = 0;
    float x;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
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
                printf("Ingrese el primer numero\n");
                scanf("%f",&numUno);
                break;
            case 2:
                printf("Ingrese el segundo numero\n");
                scanf("%f",&numDos);
                break;
            case 3:
                suma = sumar(numUno, numDos);
                /*suma = numUno + numDos; */

                printf("La suma es: %f\n",suma);
                break;
            case 4:
                /*resta = numUno - numDos;*/
                resta = restar(numUno, numDos);
                printf("La resta es: %f\n",resta);
                break;
            case 5:
                if(numDos == 0){
                    printf("No puede realizarse la division si el segundo numero es 0\n");
                    break;
                }else{
                /*division = numUno / numDos;*/
                division = dividir(numUno, numDos);
                printf("La division es: %f\n",division);
                }
                break;
            case 6:
                /*multp = numUno * numDos;*/
                multp = multiplicar(numUno, numDos);
                printf("La multiplicacion es: %f\n",multp);
                break;
            case 7:
                entero = numUno;
                x = numUno - entero;
                if(x =! 0){
                    printf("El numero ingresado es decimal, no se puede realizar el factorial con numero decimal\n");
                }else{
                /*for(i=numUno;i>0;i--){
                    factorial = factorial * i;
                }*/
                factorial = factor(numUno);
                printf("El factorial es: %f\n",factorial);
                }
                break;
            case 8:
                /*suma = numUno + numDos;*/
                suma = sumar(numUno, numDos);
                printf("La suma es: %f\n",suma);
                /*resta = numUno - numDos;*/
                resta = restar(numUno, numDos);
                printf("La resta es: %f\n",resta);
                /*multp = numUno * numDos;*/
                multp = multiplicar(numUno, numDos);
                printf("La multiplicacion es: %f\n",multp);
                if(numDos == 0){
                    printf("Ingrese un numero distinto de 0\n");
                    break;
                }else{
                /*division = numUno / numDos;*/
                division = dividir(numUno, numDos);
                printf("La division es: %f\n",division);
                }
                /*for(i=numUno;i>0;i--){
                    factorial = factorial * i;
                }*/
                factorial = factor(numUno);
                printf("El factorial es: %f\n",factorial);

                break;
            case 9:
                seguir = 'n';
                break;
        }

}
    return 0;
}
