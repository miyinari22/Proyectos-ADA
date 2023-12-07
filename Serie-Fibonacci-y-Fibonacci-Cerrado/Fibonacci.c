/* Algoritmo serie de Fibonacci
	0,1,1,2,3,5,8,13..
*/
	
#include <stdio.h>
#include <time.h>

int primero = 0;
int segundo = 1;
int resultado = 0;

int fibonacci ()
{
	primero = segundo;
	segundo = resultado;
	resultado = primero + segundo;
	return resultado;
}

int main ()
{
	int n,i;
	clock_t inicio;
	double segundos;
	
	printf("Ingrese un numero\n");
	scanf("%d", &n);
	inicio = clock(); 
		for (i = 0; i < n ; i++)
		{
			printf("%d\n",fibonacci());
		}

		segundos = ((double)clock() - inicio) /CLOCKS_PER_SEC;
		
	printf("%.8f Segundos",segundos);		
	return 0;
}
