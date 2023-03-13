#include <stdio.h>
#include <stdlib.h>

	int main ()
	{
		float notas [3];
		
		printf("Digite a primeira nota: ");
		scanf("%f", &notas[0]);
		printf("Digite sua segunda notaa: ");
		scanf("%f",&notas[1]);
		notas[2]= (notas[1]+notas[0])/2;
				
		
		printf("A media foi %.1f", notas[2]);
		
		
		
	}