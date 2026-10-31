# Ejercicio 07 – Modificar producto

**Asignatura:** Programación para Mecatrónicos  
**Lenguaje:** C  
**Tema:** Estructuras (`struct`) y punteros (`pointers`)

## Descripción del ejercicio

Utilizando la estructura `Producto`, desarrollar un programa en C que permita modificar el precio y la cantidad de un producto mediante el uso de un puntero.

El programa debe mostrar los valores originales del producto y posteriormente presentar los nuevos valores después de realizar las modificaciones.

## Objetivos

- Declarar una estructura llamada `Producto`.
- Crear una variable de tipo `struct Producto`.
- Declarar un puntero que almacene la dirección de memoria de la estructura.
- Utilizar el puntero para modificar los atributos del producto.
- Mostrar los valores originales y los valores modificados.

## Estructura utilizada

La estructura `Producto` contiene los siguientes atributos:

| Atributo | Tipo de dato | Descripción |
|---|---|---|
| precio | `float` | Precio del producto. |
| cantidad | `int` | Cantidad de unidades disponibles. |

## Funcionamiento del programa

El programa realiza las siguientes operaciones:

1. Declara e inicializa un producto con un precio y una cantidad determinados.
2. Crea un puntero que almacena la dirección de memoria del producto.
3. Muestra los valores originales.
4. Utiliza el puntero para modificar el precio y la cantidad.
5. Muestra los nuevos valores del producto.

## Ejemplo de ejecución

**Valores originales:**
- Precio: RD$ 150.50
- Cantidad: 10 unidades

**Valores modificados:**
- Precio: RD$ 200.75
- Cantidad: 25 unidades

## Conceptos aplicados

- Estructuras (`struct`).
- Declaración de punteros.
- Operador de dirección (`&`).
- Operador de acceso a estructuras mediante punteros (`->`).
- Modificación de atributos mediante punteros.
- Entrada y salida de datos (`printf` y `scanf`).

## Archivo fuente

`ejercicio 7.c`

## Información del estudiante

- **Nombre:** OMAR DAVID GUZMAN GUERRERO
- **Matrícula:** 2024-1884
- **Sección:** SABADOS

---

**Programación para Mecatrónicos**  
Ejercicio 07 – Modificar producto.
