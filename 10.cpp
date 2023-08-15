/*
- Fecha: 14 de agosto 2023
- Hora: 11:30 pm
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Carlos Alberto Ocampo Sepulveda
- Lenguaje: C++
- Version del lenguaje: C++: 4.2.1 
- Versión del compilador: Apple clang version 14.0.0 (clang-1400.0.29.202)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa tomara un valor de entrada (X), con el que evaluará la ecuación y seguidamente arrojará el resultado
- Ecuación: \frac{\frac{\frac{\frac{\frac{\frac{x}{6}+\frac{45}{x}}{x-\frac{-8}{2}}}{12}}{\sqrt{x}}}{5}+x^4}{\sqrt{x}}
- Entrada: número | x ∈ R
- Salida: resultado de evaluar la ecuación en x
- Restricciones: x != 0
*/

//Librerías
#include <stdio.h>
#include <math.h>

//Función principal

int main () {
    //Declaración de variables
    double x, resultado;
    /*
    x es la variable que almacena un valor por el usuario
    resultado es la variable que almacena el resultado de la ecuación
    */

    //Entrada
    printf("Por favor, dígite el valor que le quiere asignar a x: ");
    scanf("%lf", &x);

    //Evaluar la ecuación
    resultado = ((((((((x/6.)+(45./x))/(x-(-8./2.)))/12.)/sqrt(x))/5.)+pow(x,4))/sqrt(x));

    //Salida
    printf("\nEl resultado de la ecuación para un valor %lf  es de %lf", x, resultado);

    return 0;
}