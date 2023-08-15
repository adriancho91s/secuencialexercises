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
- El programa recibe un valor de tipo float que corresponde
- a la cantidad de grados centigrados o fahrenheit y los convierte
- en su medida equivalente, primero los grados centigrados que ingrese los pasa
- a grados farehnheit y luego los grados fahrenheit que ingrese los pasa a grados centigrados
- Entrada: número de grados (farenheit o centigrados) tipo float
- Salida: número de grados convertidos (farenheit o centigrados) tipo float
- Restricciones: el número de grados debe ser un número real
*/

//librerías
#include <stdio.h>

//función principal

int main () {
    //Declaración de variables
    float grados, gradosF, gradosC;

    //Entrada de datos
    printf("Ingrese los grados centigrados que desea convertir a farenheit: ");
    scanf("%f", &grados);

    //Primer proceso de conversión
    gradosF = (grados * 1.8) + 32;

    //Salida de datos
    printf("Los grados centigrados %.2f equivalen a %.2f grados farenheit\n", grados, gradosF);

    //Entrada de datos
    printf("Ingrese los grados farenheit que desea convertir a centigrados: ");
    scanf("%f", &grados);

    //Segundo proceso de conversión
    gradosC = (grados - 32) / 1.8;

    //Salida de datos
    printf("Los grados farenheit %.2f equivalen a %.2f grados centigrados\n", grados, gradosC);

    return 0;
}