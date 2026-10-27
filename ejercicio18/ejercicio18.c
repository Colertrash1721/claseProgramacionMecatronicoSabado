/*Título: Producto más caro
Matrícula: 2026-0293
Nombre: Josías Bautista
Sección: Sábados (9-12pm)*/

#include <stdio.h>

#define CANTIDAD 5 // Definición de la cantidad de productos

// Estructura que representa un producto
struct Producto {
    char nombre[30];
    float precio;
};

int main(void) {
    // Arreglo de 5 estructuras Producto con datos de ejemplo
 struct Producto productos[5] = {
        {"Jabon Cerave", 450.00f},
        {"Jabon Palmolive", 85.50f},
        {"Jabon Protex", 180.00f},
        {"Jabon La Roche-Posay", 1250.75f},
        {"Jabon Dove", 320.00f}
    };

    struct Producto *ptr; // Puntero que recorre el arreglo
    struct Producto *masCaro;   // Puntero al producto con el precio mas alto
    
     // Se recorre el arreglo con el puntero para mostrar cada producto
    printf("Lista de productos:\n");
    for (ptr = productos; ptr < productos + 5; ptr++) {
        printf("Nombre: %s | Precio: %.2f\n", ptr->nombre, ptr->precio);
        
    }
        //Se asume que el primer producto es el más caro inicialmente
        masCaro = productos;
        
        // Se recorre otra vez, comparando cada precio con el del mas caro guardado
        for (ptr = productos; ptr < productos + CANTIDAD; ptr++) {
            if (ptr->precio > masCaro->precio) {
                masCaro = ptr;   // Se guarda la direccion del nuevo mas caro
            }
        }
    
    
    // Se muestra el resultado
    printf("\nProducto mas caro: %s (%.2f)\n", masCaro->nombre, masCaro->precio);

    
    return 0;
}

