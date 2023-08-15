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
- Programa que calcula el promedio de notas de un estudiante, recibiendo el código, nombre, nota 1, nota 2 y nota 3
- Entrada: código, nombre, nota 1, nota 2 y nota 3
- Salida: Promedio de notas
*/

//Librerías 
#include <stdio.h>
#include <string.h>

//Función principal

int main(){
    //Definición de variables
    char nombre[20];
    float codigo, nota1, nota2, nota3;
    
    //Entrada de datos
    printf("Ingrese el código del estudiante: ");
    scanf("%f", &codigo);
    getchar();// Captura enter
    printf("Ingrese el nombre del estudiante: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';// Elimina el salto de línea
    printf("Ingrese la nota 1: ");
    scanf("%f", &nota1);
    printf("Ingrese la nota 2: ");
    scanf("%f", &nota2);
    printf("Ingrese la nota 3: ");
    scanf("%f", &nota3);
    
    //Proceso
    float promedio = (nota1 + nota2 + nota3)/3;
    
    //Salida de datos
    printf("\nEl promedio de notas del estudiante \n%s con código %.0f es: %.2f", nombre, codigo, promedio);
    
    return 0;
}