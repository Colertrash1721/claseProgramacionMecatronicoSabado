Nombre: Gabriel jesus suero
Matricula: 2026-1107
Asignatura: programacion para mecatronicos
Correo: 20261107@itla.edu.do
Archivo: ejercicio 20.c

#include <stdio.h>
#include <string.h>

// Definicion de la estructura persona
typedef struct {
    char nombre [ 50 ];
    int edad ;
} persona;

int main () {
    // 1. Crear e inicializar un arreglo de 5 estructuras persona
    persona personas[5] = {
                { " ana", 25 },
                { " carlos", 42 },
                { " beatriz", 19 },
                { " david", 31 },
                { " elena", 58 },
     } ;

     // Puntero que apunta al inicio del arreglo
     persona *ptr = personas;

     // ------------------------------------------------
     // 1. Mostrar todas las personas usando punteros
     // ------------------------------------------------
     printf("=== LISTA DE PERSONAS ===\n");
     for



