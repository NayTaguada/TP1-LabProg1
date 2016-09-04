
#include "funciones.h"

float sumar (float x, float y){
    float resultado;
    resultado = x + y;
    return resultado;
}

float restar(float x, float y){
    float resultado;
    resultado = x - y;
    return resultado;
}

float dividir(float x, float y){
    float resultado;
    resultado = x / y;
    return resultado;
}

float multiplicar(float x, float y){
    float resultado;
    resultado = x * y;
    return resultado;
}

float factor(float x){
    float resultado = 0;
    float factorial = 1;
    int i = 0;
    for(i=x;i>0;i--){
        factorial = factorial * i;
        }
    return resultado;
}

int menu(int opcion){

    int opcion;
    char texto[270];
    texto = "1- Ingresar 1er operando (A=x)\n2- Ingresar 2do operando (B=y)\n3- Calcular la suma (A+B)\n4- Calcular la resta (A-B)\n5- Calcular la division (A/B)\n6- Calcular la multiplicacion (A*B)\n7- Calcular el factorial (A!)\n8- Calcular todas las operacione\n9- Salir\n";

    printf("%s",texto);

    scanf("%d",&opcion);

    return opcion;

}
