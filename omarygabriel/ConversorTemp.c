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

     caso 1:
            printf("Ingrese la temperatura en Fahrenheit: ");
            scanf("%f", &temperatura);

            resultado = (temperatura - 32) * 5 / 9;

            printf("%.2f Fahrenheit equivalen a %.2f Celsius\n",
                   temperatura, resultado);
            break;

      
