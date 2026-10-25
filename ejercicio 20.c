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
     for (int i = 0; i < 5; i++) {
          // Usamos aritmetica de punteros ( ptr + i ) para acceder a cada elemento
          printf(" persona %d: Nombre = %s, edad = %d anios\n",
                 i + 1, (ptr + i)->nombre, (ptr + i)->edad);
     }

     // ------------------------------------------------------
     // 2 y 3. Encontrar la persona de mayor y menor edad
     // ------------------------------------------------------
     persona *ptr mayor = ptr;
     persona *ptr menor = ptr;

     for (int i= 1; i < 5; i++) {
          // Comparamos las edades usando el puntero actual (ptr + i)
          if ((ptr + i)->edad > ptrMayor->edad) {
               ptrmayor = ptr + i; // Actualizamos el puntero a la mayor edad
          }
          if ((ptr + i)->edad < ptrMenor->edad) {
               ptrmenor = ptr + i; // Actualizamos el puntero a la menor edad
          }
     }

     printf("\n===EXTREMOS DE EDAD ===\n");
     printf("persona de mayor edad: %s (%d anios)\n", ptrMayor->nombre, ptrMayor->edad);
     printf("persona de menor edad: %s (%d anios)\n", ptrMenor->nombre, ptrMenor->edad);

     return 0;

 

     



