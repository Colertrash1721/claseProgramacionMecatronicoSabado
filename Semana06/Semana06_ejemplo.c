#include <stdio.h>
#include <string.h>

// Definitimos la estructura
struct Estudiante {
    int ID;
    char Matricula[20];
    char Nombre[50];
    char Telefono[12];
    char Carrera[30];
};

//Inicializamos función main

int main(){
    // Accedemos a la estructura e inicializamos los valores de esta
    struct Estudiante estudiante = {1, "2023-0975", "Steven", "8296670530", "Software"};

    // Le asignamos a un puntero los valores de esta estructura para de esta manera tener acceso a los datos
    struct Estudiante *ptr = &estudiante;

    // Imprimimos los resultados
    printf("Nombre: %s\n", estudiante.Nombre);
    printf("Telefono: %s\n", estudiante.Telefono);
    printf("Carrera: %s\n", estudiante.Carrera);

    // Modificando el valor del puntero
    ptr->Nombre[0] = 'J';
    ptr->Nombre[1] = 'u';
    ptr->Nombre[2] = 'a';
    ptr->Nombre[3] = 'n';
    ptr->Nombre[4] = '\0';

    // Valor modificado
    printf("Nombre: %s\n", estudiante.Nombre);
    return 0;
}