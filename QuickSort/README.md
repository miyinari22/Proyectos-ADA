# Quicksort

Este programa en C implementa el algoritmo de ordenación Quicksort para ordenar un arreglo de números ingresados por el usuario.

## Compilación

Para compilar el programa, utiliza un compilador de C como GCC:

```bash
gcc quicksort.c -o quicksort
```

## Uso

Ejecuta el programa y sigue las instrucciones para ingresar los elementos que deseas ordenar:

```bash
./quicksort
```

El programa le solicitará la cantidad de elementos que quieres en el arreglo y luego te pedirá que ingreses cada uno de los elementos. Luego, mostrará el arreglo ordenado utilizando el algoritmo Quicksort y te proporcionará el tiempo que tomó el proceso de ordenación en segundos.

## Funciones

- `intercambio(vector[], i, j)`: Intercambia dos elementos en el arreglo.
- `quicksort(vector[], inf, sup)`: Implementa el algoritmo Quicksort para ordenar el arreglo.
- `imprimeVector(vector[], elem)`: Muestra el contenido del arreglo después de ser ordenado por Quicksort.

## Notas

- Quicksort es un algoritmo de ordenación eficiente que utiliza la técnica de divide y vencerás.
- Este programa utiliza la función `clock()` para medir el tiempo que tarda el proceso de ordenación.

---
