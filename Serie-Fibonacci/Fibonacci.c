/* Algoritmo serie de Fibonacci
	0,1,1,2,3,5,8,13..
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

int main (int argc, char *argv[])
{
	int n,i;
    
    if (argc > 1){
        n = atoi(argv[1]); 
    }

		for (i = 0; i < n ; i++)
		{
			printf("%d\n",fibonacci());
			sleep(2); /*Simula mostrar los resultados cada 2 segundos*/
		}
	return 0;
}
