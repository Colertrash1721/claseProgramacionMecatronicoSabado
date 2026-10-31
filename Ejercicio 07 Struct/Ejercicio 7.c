
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
