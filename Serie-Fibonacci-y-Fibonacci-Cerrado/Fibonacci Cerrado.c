#include <stdio.h>
#include <math.h>
#include <time.h>

double x = 0.447214; //1/sqrt(5)
double base = 3.23607/2; //1+sqrt(5)/2
double y = -0.618034; //1-sqrt(5)/2
double resultado = 0;

int fibonacci (double i)
{
	resultado = x * pow(base,i) - x * pow (y,i);
	
	return (int)resultado;
}

int main ()
{
	double n, i;
	clock_t inicio;
	double segundos;
	
	printf("Ingrese un numero\n");
	scanf("%lf", &n);
	
	inicio = clock(); 
	for (i = 0; i <= n ; i++)
	{
		printf("%d\n", fibonacci(i));
	}
	
	segundos = ((double)clock() - inicio) /CLOCKS_PER_SEC;
	
	printf("%.8f Segundos",segundos);		
	return 0;
}
