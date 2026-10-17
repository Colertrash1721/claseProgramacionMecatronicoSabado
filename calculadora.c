#include <stdio.h>

float suma(float a, float b);
float resta(float a, float b);

int main(void) {
    float a, b;
    int opcion;

    printf("===== CALCULADORA =====\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("Elige una opcion: ");
    scanf("%d", &opcion);

    printf("Ingresa el primer numero: ");
    scanf("%f", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &b);

    switch (opcion) {
        case 1:
            printf("Resultado: %.2f\n", suma(a, b));
            break;
        case 2:
            printf("Resultado: %.2f\n", resta(a, b));
            break;
        default:
            printf("Opcion invalida\n");
    }

    return 0;
}

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}