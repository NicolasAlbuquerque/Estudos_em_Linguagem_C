#include <stdio.h>
#include <stdlib.h>
						//Tomada de Decisões e Operadores Lógicos.
	int main()
{
	/*int i =5; // = Atribuição
	
		//if(5==5)// == Comparação Positiva
		//if (5!=5)  != Comparação Negativa/ Diferente
		{
					
			
		}
		else
		{
			
		}
	
	// == Comparação positiva
	// != Comparação negativa
	*/
		// imprimir valor de uma condição
	int i =10;
	
	printf("\n%i\n", i == 1);
	printf("\n%i\n", i != 1);
	
	
	/*     		A IMPRESSÃO DE UMA CONDIÇÃO EXPRESSA DOIS VALORES
	
		1) Positivo -> 1
		2) Negativo -> 0
	
	*/
	
/*
					Inverter Valores
	
	! é um sinal de nagação, igual a expressão Not.
*/ 
			
	printf("\n%i\n", !(i == 1));
	printf("\n%i\n", !(i != 1));
	
	
	
	printf("\nDigite um valor diferente != de 5: \n");
	scanf("%i", &i);
		if (i!=5)
		{
			printf("\n\nA expressao e: \n");
			printf("True");
		}
		
		else
		{
			printf("\n\nA Expressao e: \n");
			printf("False");
		}
			printf("\nDigite um valor diferente != de 5: \n");
	scanf("%i", &i);
		if (!(i!=5))
		{
			printf("\n\nA expressao e: \n");
			printf("True");
		}
		
		else
		{
			printf("\n\nA Expressao e: \n");
			printf("False");
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	// 
	
	return 0;
}