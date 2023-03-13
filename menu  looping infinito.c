#include <stdio.h>

	int main()
	{
		int option=0;
		
		while(option <=4)
		{ 
			printf("CADASTRO DE CLIENTE\n");
			printf("1- Incluir\n");
			printf("2- Alterar\n");
			printf("3- Consultar\n");
			printf("4- Excluir\n");
			printf("5- Sair\n");
			scanf("%d", &option);
			
			printf("%d\n", option);
	
		}
		
		return 0;
		
	}