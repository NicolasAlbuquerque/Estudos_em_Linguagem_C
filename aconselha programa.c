#include <stdio.h>
#include <stdlib.h>


	int main()
	{
	
	float dim;
	
	printf("SERVICO INFORMATIZADO DE SUGESTOES!\n\n");
	printf("Quantidade de dinheiro que voce tem sobrando? \n");
	scanf("%f", &dim);
	
		if (dim>=10)
			{
			printf("va ao cinema hoje a noite.\n");
			}
		else
			{
			printf("Fique em casa vendo tv.\n");
			}
	printf("OBRIGADO VOLTE SEMPRE!\n");
	 return 0;	
	}