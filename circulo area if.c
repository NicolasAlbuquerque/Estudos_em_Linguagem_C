#include <stdio.h>
#include <stdlib.h>
 	int main ()
 	{  float r, pi=3.14, a;
 	
 		printf("programa que calcula area de um circulo\n");
 		printf("entre com o raio do circulo: \n");
 		scanf("%f", &r);
 		a= pi*r*r;
 		
		 	if (r>0)
			 	{
			 
 				printf("A area do circulo de Raio %2.f e: %0.2f\n", r, a);
 				
 				}
				 
 				else
				{
			 
		 		printf("Raio nao pode ser nulo ou negativo!\n");
				}
	return 0;		
 		
 		
 		
 		
	 }