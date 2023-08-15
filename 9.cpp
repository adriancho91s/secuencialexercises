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
- Este programa convierte de moneda Euro a Peso Colombiano y dolar, según el valor actual
- (14, Aug 2023) 1 Euro = 4.414,36 pesos colombianos
- (14, Aug 2023) 1 Euro = 1,09 dolares
- Entrada: Cantidad de euros
- Salida: Cantidad de pesos colombianos y dolares
*/

//Librerías
#include <stdio.h>

//Función principal

int main() {
    //Declaración de variables
    float euro, dolar, pesoColombiano;

    //Entrada de datos
    printf("Ingrese la cantidad de euros que desea convertir: ");
    scanf("%f", &euro);

    //Proceso
    pesoColombiano = euro * 4414.36;
    dolar = euro * 1.09;

    //Salida de datos
    printf("La cantidad de euros que ingreso es: %.2f\n", euro);
    printf("La cantidad de pesos colombianos que tiene es: %.2f\n", pesoColombiano);
    printf("La cantidad de dolares que tiene es: %.2f\n", dolar);

    return 0;
}