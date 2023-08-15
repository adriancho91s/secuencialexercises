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
- Programa que calcula el aporte a salud, aporte a pensión y neto a pagar de un trabajador
- Entrada: Nombre, cargo, sueldo básico mensual
- Salida: Nombre, cargo, sueldo básico mensual, aporte a salud, aporte a pensión, neto a pagar
*/

//Librerías 
#include <stdio.h>
#include <string.h>

//Función principal

int main(){
    //Definición de variables
    char nombre[20], cargo[20];
    float sueldo, salud, pension, neto;
    
    //Entrada de datos
    printf("Ingrese el nombre del trabajador: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0'; //Elimina el salto de línea de la cadena nombre
    printf("Ingrese el cargo del trabajador: ");
    fgets(cargo, sizeof(cargo), stdin);
    cargo[strcspn(cargo, "\n")] = '\0'; //Elimina el salto de línea de la cadena cargo
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);
    
    //Proceso
    salud = sueldo * 0.04;
    pension = sueldo * 0.03375;
    neto = sueldo - salud - pension;
    
    //Salida de datos
    printf("\nNombre: %s", nombre);
    printf("\nCargo: %s", cargo);
    printf("\nSueldo: %.2f", sueldo);
    printf("\nAporte a salud: %.2f", salud);
    printf("\nAporte a pensión: %.2f", pension);
    printf("\nNeto a pagar: %.2f", neto);
    
    return 0;
}