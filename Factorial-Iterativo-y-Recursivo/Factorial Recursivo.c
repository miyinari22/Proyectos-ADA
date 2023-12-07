#include <stdio.h>
#include <time.h>

long int factorial(long int fact);

// Ejemplo de uso:
int main()
{
    long int fact;
	clock_t inicio;
	double segundos;
	
	printf("Ingrese el numero a calcular su factorial: ");
	scanf("%d", &fact);
	
	inicio = clock(); /*Inicia el tiempo de ejecucion*/
	
    printf("Factorial de %d es: %d\n", fact, factorial(fact));
	
	
	segundos = ((double)clock() - inicio) /CLOCKS_PER_SEC;
	
	printf("%.10lf Segundos",segundos);

    return 0;
}

long int factorial(long int n)
{
    if (n == 0){
        return 1;
    }else{
        return(n * factorial(n-1));
    }
}
