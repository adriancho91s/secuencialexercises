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
- El programa calcula el total de un articulo con IVA
- Se conoce:
    - referencia 
    - Nombre del artículo
    - valor unitario 
    - unidades disponibles
    Se pide calcular el valor total del articulo (con IVA incluido)
- Salida: El valor total del articulo
*/

//Librerías
#include <stdio.h>
#include <string.h>

//Constantes
const float IVA = 0.19;

//Función principal

int main() {
    
    //Declaración de variables
    int referencia;
    char nombre[30];
    float valorUnitario;
    int unidadesDisponibles;
    float valorTotal;
    
    //Entradas
    printf("Ingrese la referencia del articulo: ");
    scanf("%d", &referencia);
    getchar(); // Capta el salto de línea o retorno de carro
    printf("Ingrese el nombre del articulo: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';// Elimina el salto de línea o retorno de carro de la cadena
    printf("Ingrese el valor unitario del articulo: ");
    scanf("%f", &valorUnitario);
    printf("Ingrese las unidades disponibles del articulo: ");
    scanf("%d", &unidadesDisponibles);
    
    //Proceso
    valorTotal = (valorUnitario * unidadesDisponibles) * (1 + IVA);
    
    //Salida
    printf("\nEl valor total del articulo %s con referencia %d es: %f", nombre, referencia, valorTotal);
    
    return 0;
}