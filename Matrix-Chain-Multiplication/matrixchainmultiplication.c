#include <stdio.h>
#include <limits.h>
#define INF 999999999

long int m[20][20];  // Matriz para almacenar el número mínimo de operaciones
int s[20][20];      // Matriz para almacenar puntos óptimos de separación
int p[20], i, j, n;  // Arreglo de dimensiones de las matrices, índices y cantidad de matrices

// Función para imprimir la secuencia óptima de multiplicación de matrices
void imprimeOptimo(int i, int j)
{
    if (i == j)
        printf(" A%d ", i);
    else
    {
        printf("( ");
        imprimeOptimo(i, s[i][j]);
        imprimeOptimo(s[i][j] + 1, j);
        printf(" )");
    }
}

// Función que utiliza programación dinámica para calcular la cantidad mínima de operaciones
void multiplicacion(void)
{
    long int q;
    int k;
    for (i = n; i > 0; i--)
    {
        for (j = i; j <= n; j++)
        {
            if (i == j)
                m[i][j] = 0;
            else
            {
                for (k = i; k < j; k++)
                {
                    q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                    if (q < m[i][j])
                    {
                        m[i][j] = q;
                        s[i][j] = k;
                    }
                }
            }
        }
    }
}

// Función recursiva para encontrar el número mínimo de operaciones
int minimoOperaciones(int p[], int i, int j)
{
    if (i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int c;

    for (k = i; k < j; k++)
    {
        c = minimoOperaciones(p, i, k) +
            minimoOperaciones(p, k + 1, j) +
            p[i - 1] * p[k] * p[j];

        if (c < min)
            min = c;
    }

    return min;
}

int main()
{
    int k;
    printf("Ingrese el numero de matrices: ");
    scanf("%d", &n);

    // Inicialización de matrices
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            m[i][i] = 0;
            m[i][j] = INF;
            s[i][j] = 0;
        }
    }

    printf("\nIngrese las dimensiones: \n");
    for (k = 0; k <= n; k++)
    {
        printf("P%d: ", k);
        scanf("%d", &p[k]);
    }

    multiplicacion(); // Calcula la multiplicación óptima utilizando programación dinámica

    printf("\n Matriz M de Costos:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
            printf("m[%d][%d]: %ld\n", i, j, m[i][j]);
    }

    i = 1, j = n;
    printf("\nAsociacion de Matrices: \n");
    imprimeOptimo(i, j); // Imprime la secuencia óptima de multiplicación de matrices
    printf("\nNumero minimo de operaciones : %d ", minimoOperaciones(p, 1, n)); // Utiliza la solución recursiva

    return 0;
}