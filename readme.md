# Programación para Mecatrónicos — Miércoles

Repositorio correspondiente a la asignatura **Programación para Mecatrónicos**, impartida los **Sabados**.

Este repositorio será utilizado para compartir, desarrollar y entregar las prácticas y ejercicios asignados durante la materia.

## Contenido

En este repositorio se trabajarán diferentes temas relacionados con la programación, utilizando principalmente el lenguaje **C**.

Entre los temas se incluyen:

- Variables y tipos de datos
- Condicionales
- Ciclos
- Funciones
- Arreglos
- Estructuras (`struct`)
- Punteros (`pointers`)
- Arreglos de estructuras
- Arreglos de punteros
- Y otros conceptos fundamentales de programación

## Organización mediante Branches

Cada estudiante deberá trabajar en su **propio branch**.

El nombre del branch deberá seguir el siguiente formato:

```text
Struct-pointer-NombreParticipante
```

### Ejemplo

```text
Struct-pointer-Steven
```

Dentro de este branch, cada estudiante deberá colocar el ejercicio que le haya sido asignado o seleccionado.

### Ejemplo de estructura

```text
main
│
├── Struct-pointer-Steven
│   └── ejercicio07.c
│
├── Struct-pointer-Juan
│   └── ejercicio12.c
│
└── Struct-pointer-María
    └── ejercicio03.c
```

## Información del estudiante

Cada archivo de código deberá comenzar con un comentario que contenga:

```c
/*
Título: Nombre del ejercicio
Matrícula: TU_MATRICULA
Nombre: TU_NOMBRE
Sección: TU_SECCION
*/
```

## 🚀 Flujo de trabajo

Para comenzar a trabajar:

```bash
git clone URL_DEL_REPOSITORIO
cd NOMBRE_DEL_REPOSITORIO
```

Crear el branch correspondiente:

```bash
git checkout -b Struct-pointer-NombreParticipante
```

Agregar los cambios:

```bash
git add .
```

Crear el commit:

```bash
git commit -m "Agrega ejercicio de structs y pointers"
```

Subir el branch:

```bash
git push -u origin Struct-pointer-NombreParticipante
```

## Importante

- Cada estudiante debe trabajar únicamente en su branch.
- No modificar el trabajo de otros participantes.
- Respetar el formato establecido para los nombres de los branches.
- Los ejercicios deben estar correctamente documentados.
- El código debe ser claro, legible y estar correctamente indentado.
- Cada estudiante es responsable de subir su trabajo al repositorio.

---

### Programación para Mecatrónicos

**Clase:** Sabados  
**Lenguaje principal:** C  
**Repositorio:** Prácticas y actividades de la asignatura