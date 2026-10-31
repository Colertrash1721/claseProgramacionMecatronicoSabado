
/*
Título: Ejercicio 07 - Modificar producto
Matrícula: 2024-1884
Nombre: OMAR DAVID GUZMÁN GUERRERO
Sección: SÁBADOS
*/

#include <stdio.h>

// Definición de la estructura Producto
struct Producto {
    float precio;
    int cantidad;
};

int main() {

    // Declaración e inicialización del producto
    struct Producto producto = {150.50, 10};

    // Declaración de un puntero a la estructura
    struct Producto *ptr = &producto;

    // Mostrar valores originales 
    printf("=== VALORES ORIGINALES ===\n");
    printf("Precio: RD$ %.2f\n", ptr->precio);
    printf("Cantidad: %d unidades\n", ptr->cantidad);

    // Modificar los valores utilizando el puntero
    ptr->precio = 200.75;
    ptr->cantidad = 25;

    // Mostrar nuevos valores
    printf("\n=== NUEVOS VALORES ===\n");
    printf("Precio: RD$ %.2f\n", ptr->precio);
    printf("Cantidad: %d unidades\n", ptr->cantidad);

    return 0;
}
