
#include "funciones.h"

/** \brief funcion que suma dos numeros ingresados
 *
 * \param primer numero ingresado
 * \param segundo numero ingresado
 * \return resultado de la suma
 *
 */


float sumar (float x, float y){
    float resultado;
    resultado = x + y;
    return resultado;
}

/** \brief funcion que resta dos numeros ingresados
 *
 * \param primer numero ingresado
 * \param segundo numero ingresado
 * \return resta de los numeros
 *
 */


float restar(float x, float y){
    float resultado;
    resultado = x - y;
    return resultado;
}

/** \brief funcion que divide dos numeros ingresados
 *
 * \param primer numero ingresado
 * \param segundo numero ingresado
 * \return resultado de division
 *
 */


float dividir(float x, float y){
    float resultado;
    resultado = x / y;
    return resultado;
}

/** \brief funcion que multiplica dos numeros ingresados
 *
 * \param primer numero ingresado
 * \param segundo numero ingresado
 * \return resultado de la multiplicacion
 *
 */


float multiplicar(float x, float y){
    float resultado;
    resultado = x * y;
    return resultado;
}

/** \brief funcion que da el factorial del primer numero ingresado
 *
 * \param primer numero ingresado
 * \param
 * \return resultado del factorial del primer numero
 *
 */


float factor(float x){
    float resultado = 0;
    float factorial = 1;
    int i = 0;
    for(i=x;i>0;i--){
        factorial = factorial * i;
        }
    return resultado;
}

/** \brief funcion que permite visualizar el menu
 *
 * \param opcion ingresada
 * \param
 * \return la opcion seleccionada
 *
 */


int menu(int opcion){

    int opcion;
    char texto[270];
    texto = "1- Ingresar 1er operando (A=x)\n2- Ingresar 2do operando (B=y)\n3- Calcular la suma (A+B)\n4- Calcular la resta (A-B)\n5- Calcular la division (A/B)\n6- Calcular la multiplicacion (A*B)\n7- Calcular el factorial (A!)\n8- Calcular todas las operacione\n9- Salir\n";

    printf("%s",texto);

    scanf("%d",&opcion);

    return opcion;

}
