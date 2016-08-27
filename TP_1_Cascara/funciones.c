
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
    float resultado, factorial;
    int i = 0;
    for(i=x;i>0;i--){
        factorial = factorial * i;
        }
    return resultado;
}

