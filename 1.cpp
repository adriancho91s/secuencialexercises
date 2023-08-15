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
- El programa toma dos números dados por el usuario, y realiza las operaciones aritmeticas basicas con ellos, junto con la potencia de los dos numeros
- retorna el resultado de las operaciones en consola
- Entrada: Dos numeros tipo float
- Salida: Resultado de las operaciones aritmeticas basicas y la potencia de los dos numeros
- Restricciones: Los numeros ingresados deben ser tipo float
- Nota: se ajustan dos decimales en la impresión de resultados
*/

//Librerías
#include <stdio.h>
#include <math.h>

//Función Principal

int main () {
    //Declaración de variables 
    float num1, num2, suma, resta, multiplicacion, division, potencia;
    /*
    num1, num2: almacenan los dos números ingresados por el usuario
    suma: almacena el resultado de la suma de los dos números
    resta: almacena el resultado de la resta de los dos números
    multiplicacion: almacena el resultado de la multiplicación de los dos números
    division: almacena el resultado de la división de los dos números
    potencia: almacena el resultado de la potencia de los dos números
    */

    //Solicitud de datos al usuario
    printf("Por favor, ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Por favor, ingrese el segundo número: ");
    scanf("%f", &num2);

    //Operaciones aritmeticas
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;
    potencia = pow(num1, num2);

    //Impresión de resultados
    printf("\nSuma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicación: %.2f\n", multiplicacion);
    printf("División: %.2f\n", division);
    printf("Potencia: %.2f\n", potencia);

    return 0;
}