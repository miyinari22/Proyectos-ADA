# Matrix Chain Multiplication

Este programa en C resuelve el problema de encontrar la cantidad mínima de operaciones necesarias para multiplicar una cadena de matrices, utilizando dos enfoques: programación dinámica y recursión.

## Compilación

Para compilar el programa, utiliza un compilador de C como GCC:

```bash
gcc multiplicacion_matrices.c -o multiplicacion_matrices
```

## Uso

Ejecuta el programa y sigue las instrucciones para ingresar el número de matrices y sus dimensiones:

```bash
./multiplicacion_matrices
```

El programa solicitará el número de matrices que deseas multiplicar y luego pedirá las dimensiones de cada una. Luego mostrará:

- La matriz `m[][]` que almacena el número mínimo de operaciones necesarias para la multiplicación de cada combinación de matrices.
- La asociación óptima de matrices.
- El número mínimo de operaciones utilizando un enfoque recursivo.

## Funciones

- `imprimeOptimo(i, j)`: Imprime la secuencia óptima de multiplicación de matrices.
- `multiplicacion()`: Utiliza programación dinámica para calcular la cantidad mínima de operaciones necesarias para multiplicar las matrices.
- `minimoOperaciones(p[], i, j)`: Implementa una solución recursiva para encontrar el número mínimo de operaciones para multiplicar las matrices.

## Notas

- El programa utiliza la matriz `m[][]` para almacenar el número mínimo de operaciones y la matriz `s[][]` para los puntos óptimos de separación.
- Proporciona dos soluciones para el problema de multiplicación de matrices: una utilizando programación dinámica y otra usando un enfoque recursivo.