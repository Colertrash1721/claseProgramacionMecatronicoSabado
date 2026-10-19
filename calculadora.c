#include <stdio.h>

float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);

int main(void) {
    float a, b;
    int opcion;

    printf("===== CALCULADORA =====\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
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
        case 3:
            printf("Resultado: %.2f\n", multiplicacion(a, b));
            break;
        case 4:
            printf("Resultado: %.2f\n", division(a, b));
            break;
        default:
            printf("Opcion invalida\n");
    }

    return 0;
}

float suma(float a, float b) {
    return a + b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division por cero no permitida.\n");
        return 0;
    }
}

float resta(float a, float b) {
    return a - b;
}

/* ================================================== */
/* FIN PARTE DE JOSIAS Y FRANKLIN                                */
/* ================================================== */

