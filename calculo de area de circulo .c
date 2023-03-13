#include<stdio.h>
#include<stdlib.h>

	int main(void) 
	{
		float r,a, pi=3.14;
		
		printf("Calculo da area de um circulo.\n");
		printf ("Entre com o Raio: \n");
		scanf("%f", &r);
		a= pi*r*r;
		printf("a area do circulo com o raio %2.f e: %0.2f\n", r, a);
		 
		 system ("pause>null");
		 return 0;
		
		
		
		
	}