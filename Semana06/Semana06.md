# Asignación: Structs y Pointers

## Instrucciones

Se presentan **20 ejercicios** relacionados con el uso de **estructuras (`struct`) y punteros (`pointers`) en C**.

Cada estudiante deberá **seleccionar un solo ejercicio** de la lista y desarrollar su solución en lenguaje C.

El ejercicio será entregado mediante el **repositorio Git de la clase**.

---

## Repositorio de la clase

Todos los estudiantes trabajarán sobre el mismo repositorio proporcionado por el profesor.

Cada estudiante deberá crear un **branch propio** dentro del repositorio.

### Nombre del branch

El branch deberá seguir exactamente el siguiente formato:

```text
Struct-pointer-NombreParticipante
```

### Ejemplo

Si el participante se llama Steven:

```text
Struct-pointer-Steven
```

Dentro de este branch deberá colocar **únicamente el ejercicio que seleccionó**.

---

## Información obligatoria en el código

Al inicio del archivo `.c` deberá colocarse un comentario con:

```c
/*
Título: Nombre del ejercicio seleccionado
Matrícula: TU_MATRICULA
Nombre: TU_NOMBRE
Sección: TU_SECCION
*/
```

### Ejemplo

```c
/*
Título: Modificar edad
Matrícula: 2025-0000
Nombre: Steven
Sección: 001
*/
```

---

# Ejercicios disponibles

### 1. Datos de una persona

Crea una estructura `Persona` con los campos `nombre` y `edad`.

Crea una variable de tipo `Persona` y un puntero que apunte a ella. Utiliza el puntero para mostrar los datos de la persona.

### 2. Modificar edad

Crea una estructura `Persona` con `nombre` y `edad`.

Utiliza un puntero para modificar la edad de la persona y posteriormente muestra el nuevo valor.

### 3. Modificar nombre

Crea una estructura `Persona` que contenga un campo `nombre`.

Utilizando un puntero a la estructura, modifica el nombre carácter por carácter.

**No utilizar `strcpy()`.**

### 4. Datos de un estudiante

Crea una estructura `Estudiante` con los campos `nombre`, `edad` y `nota`.

Utiliza un puntero para mostrar todos los datos del estudiante.

### 5. Modificar nota

Crea una estructura `Estudiante` con nombre y nota.

Utiliza un puntero para modificar la nota del estudiante y muestra el valor antes y después de modificarlo.

### 6. Datos de un producto

Crea una estructura `Producto` con `nombre`, `precio` y `cantidad`.

Crea un puntero hacia un producto y utiliza `->` para mostrar todos sus datos.

### 7. Modificar producto

Utilizando la estructura `Producto`, crea un puntero que permita modificar el precio y la cantidad de un producto.

Muestra los valores originales y los nuevos valores.

### 8. Tres personas

Crea un arreglo de **3 estructuras `Persona`**.

Utiliza un ciclo `for` para mostrar el nombre y la edad de cada persona.

### 9. Recorrer personas con puntero

Crea un arreglo de 3 estructuras `Persona`.

Utiliza un puntero para recorrer el arreglo e imprimir los datos de cada persona.

### 10. Modificar personas con puntero

Crea un arreglo de 3 estructuras `Persona`.

Utiliza un puntero para modificar la edad de las tres personas.

Al finalizar, muestra los nuevos valores.

### 11. Arreglo de punteros

Declara tres variables enteras:

```c
int a = 10;
int b = 20;
int c = 30;
```

Crea un arreglo de punteros que almacene sus direcciones.

Utiliza el arreglo de punteros para mostrar sus valores.

### 12. Modificar valores con punteros

Declara tres variables enteras.

Crea un arreglo de punteros que almacene sus direcciones.

Utiliza los punteros para modificar los valores de las tres variables.

### 13. Punteros a personas

Crea tres variables de tipo `Persona`.

Crea un arreglo de punteros a `Persona` y haz que cada posición apunte a una persona diferente.

Utiliza `->` para mostrar los datos.

### 14. Modificar personas mediante punteros

Crea tres variables de tipo `Persona` y un arreglo de punteros.

Utiliza los punteros para modificar la edad de cada persona.

### 15. Cinco estudiantes

Crea un arreglo de 5 estructuras `Estudiante`.

Cada estudiante debe tener:

- Nombre
- Edad
- Nota

Utiliza un ciclo para mostrar la información de todos los estudiantes.

### 16. Buscar estudiante por nota

Crea un arreglo de 5 estructuras `Estudiante`.

Utiliza un puntero para recorrer el arreglo y mostrar los estudiantes que tengan una nota mayor o igual a 70.

### 17. Mayor edad

Crea un arreglo de 5 estructuras `Persona`.

Utiliza un puntero para recorrer el arreglo y determinar cuál persona tiene la mayor edad.

### 18. Producto más caro

Crea un arreglo de 5 estructuras `Producto`.

Utiliza un puntero para recorrer el arreglo y determinar cuál producto tiene el precio más alto.

### 19. Promedio de estudiantes

Crea un arreglo de 5 estructuras `Estudiante`.

Utiliza un puntero para recorrer el arreglo y calcular el promedio de las notas.

Al finalizar, muestra el promedio.

### 20. Registro de personas

Crea un arreglo de 5 estructuras `Persona`.

Utilizando punteros, muestra:

1. Todas las personas.
2. La persona de mayor edad.
3. La persona de menor edad.

---

# Entrega mediante Git

Cada estudiante deberá realizar el siguiente proceso:

### 1. Clonar el repositorio de la clase

```bash
git clone URL_DEL_REPOSITORIO
```

### 2. Entrar al repositorio

```bash
cd NOMBRE_DEL_REPOSITORIO
```

### 3. Crear su branch

El nombre debe seguir el formato:

```bash
git checkout -b Struct-pointer-NombreParticipante
```

Ejemplo:

```bash
git checkout -b Struct-pointer-Steven
```

### 4. Crear y agregar el ejercicio

Dentro del branch, agregar el archivo correspondiente al ejercicio seleccionado.

Por ejemplo:

```text
ejercicio07.c
```

### 5. Realizar el commit

```bash
git add .
git commit -m "Agrega ejercicio de structs y pointers"
```

### 6. Subir el branch al repositorio

```bash
git push -u origin Struct-pointer-NombreParticipante
```

Ejemplo:

```bash
git push -u origin Struct-pointer-Steven
```

---

## Estructura esperada

El repositorio tendrá diferentes branches, uno por participante:

```text
Repositorio de la clase
│
├── main
│
├── Struct-pointer-Steven
│   └── ejercicio07.c
│
├── Struct-pointer-Juan
│   └── ejercicio12.c
│
├── Struct-pointer-María
│   └── ejercicio03.c
│
└── Struct-pointer-Pedro
    └── ejercicio18.c
```

### Importante

- Cada estudiante debe utilizar **un solo branch propio**.
- El nombre del branch debe seguir el formato establecido.
- Cada estudiante debe seleccionar **un solo ejercicio**.
- No modificar el trabajo de otros participantes.
- El código debe contener la matrícula, nombre, sección y título del ejercicio.
- El branch debe ser subido al repositorio de la clase.
- **No es necesario crear un repositorio individual.**