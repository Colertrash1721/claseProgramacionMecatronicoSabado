#include <stdio.h>

int main() {
    int opcion;
    float temperatura, resultado;

    printf("    CALCULADORA DE TEMPERATURA\n");
    printf("1. Convertir de Fahrenheit a Celsius\n");
    printf("2. Convertir de Celsius a Fahrenheit\n");
    printf("3. Salir del programa\n");

    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
