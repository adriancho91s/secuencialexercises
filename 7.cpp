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
- Descripción: Se pide liquidar el valor de horas extras diurnas teniendo en cuenta lo siguiente
    - Valor de la hora trabajada  
    - Número de horas trabajadas durante el mes
    Debe tener en cuenta que las horas extras diurnas tienen un recargo del 35% 
    del valor de la hora trabajada 
- Entrada: Valor de la hora trabajada, Número de horas trabajadas durante el mes
- Salida: Valor de horas extras diurnas
- Restricciones: El valor de la hora trabajada debe ser mayor a 0, el número de horas trabajadas durante el mes debe ser mayor a 0
*/

//Librerías
#include <stdio.h>
#include <string.h>

//Función principal

int main () {
    //Declaración de variables
    float valorHoraTrabajada, numeroHorasTrabajadas, valorHorasExtrasDiurnas;

    //Entrada de datos
    printf("Ingrese el valor de la hora trabajada: ");
    scanf("%f", &valorHoraTrabajada);
    printf("Ingrese el número de horas trabajadas durante el mes: ");
    scanf("%f", &numeroHorasTrabajadas);

    //Proceso
    valorHorasExtrasDiurnas = (valorHoraTrabajada * 1.35) * numeroHorasTrabajadas;

    //Salida
    printf("El valor de las horas extras diurnas es: %.2f", valorHorasExtrasDiurnas);

    return 0;
}