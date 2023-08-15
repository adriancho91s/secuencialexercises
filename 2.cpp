/*
- Fecha: 14 de agosto 2023
- Hora: 11:30 pm
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Carlos Alberto Ocampo Sepulveda
- Lenguaje: C
- Version del lenguaje: C Standard Version: C1809
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Tomando la entrada del usuario como el radio de un circulo el programa calcula el area de el mismo
- Entrada: Radio del circulo
- Salida: Area del circulo
- Restricciones: El radio debe ser un numero positivo
*/

//Librerías
#include <stdio.h>

//Funcion principal

int main()
{
    //Declaración de variables
    float radio, area;
    const float PI = 3.14159265358979323846;

    //Entrada
    printf("Por favor, ingrese el radio del circulo: ");
    scanf("%f", &radio);

    //Proceso
    area = PI * radio * radio;

    //Salida
    printf("\nEl area del circulo de radio %.2f es: %f", radio, area);

    return 0;
}