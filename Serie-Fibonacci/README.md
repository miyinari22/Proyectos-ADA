# Serie de Fibonacci

Este programa en C genera y muestra la serie de Fibonacci hasta un término específico dado por el usuario. La serie de Fibonacci es una secuencia numérica donde cada número es la suma de los dos números anteriores (0, 1, 1, 2, 3, 5, 8, 13, ...).

## Compilación

Para compilar el programa, usa un compilador de C como GCC:

```bash
gcc fibonacci.c -o fibonacci
```

## Uso

Ejecuta el programa proporcionando el número de términos de la serie de Fibonacci que deseas generar:

```bash
./fibonacci <número_de_términos>
```

- Reemplace `<número_de_términos>` con el número deseado de términos de la serie.

El programa generará y mostrará la serie de Fibonacci hasta el término especificado en la consola, con un intervalo de 2 segundos entre cada número para una visualización pausada.

## Ejemplo

Para generar los primeros 10 términos de la serie de Fibonacci:

```bash
./fibonacci 10
```

## Notas

- La serie de Fibonacci se genera siguiendo la fórmula: `0, 1, 1, 2, 3, 5, 8, 13, ...`
- El programa utiliza la función `sleep` para simular una pausa de 2 segundos entre cada término generado.

---
