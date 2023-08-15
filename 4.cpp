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
- EL programa como valores de entrada 3 números tipo float (A, B, C) 
- Calcula el cuadrado de la suma, el producto, el cubo del producto y 
- la diferencia entre el cuadrado de la suma y el cubo del producto.
- Entrada: 3 números tipo float (A, B, C)
- Salida: El cuadrado de la suma, el producto, el cubo del producto y 
- la diferencia entre el cuadrado de la suma y el cubo del producto.
*/

//Librerías
#include <stdio.h>
#include <math.h>

//Función principal

int main() {
    //Variables
    float A, B, C, suma, cuadradoSuma, producto, cuboProducto, diferencia;
    
    //Entrada
    printf("Ingrese el valor de A: ");
    scanf("%f", &A);
    printf("Ingrese el valor de B: ");
    scanf("%f", &B);
    printf("Ingrese el valor de C: ");
    scanf("%f", &C);
    
    //Proceso
    suma = A + B + C;
    cuadradoSuma = pow(suma, 2);
    producto = A * B * C;
    cuboProducto = pow(producto, 3);
    diferencia = cuadradoSuma - cuboProducto;
    
    //Salida
    printf("El cuadrado de la suma es: %.2f\n", cuadradoSuma);
    printf("El producto es: %.2f\n", producto);
    printf("El cubo del producto es: %.2f\n", cuboProducto);
    printf("La diferencia entre el cuadrado de la suma y el cubo del producto es: %.2f\n", diferencia);
    
    return 0;
}