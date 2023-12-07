#include <stdio.h>
#include <time.h>

int main()
{
	long int c, n, fact = 1;
	clock_t inicio;
	double segundos;
	
    printf("Ingrese el numero a calcular su factorial \n");
    scanf("%d", &n);
	inicio = clock(); 
    // Calcular factorial
    for (c = 1; c <= n; c++){
        fact = fact * c;
    }

    printf("Factorial de %d es: %d\n", n, fact);
	
	segundos = ((double)clock() - inicio) /CLOCKS_PER_SEC;
	
	printf("%f Segundos",segundos);
	
    return 0;
}
