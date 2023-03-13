#include <stdio.h>

										//LAÇO DE REPETIÇÃO FOR
								
	/*
		for (cotador=1; contador <=10; contaodor++)
		
		
		{
			
			resultado = multiplicando * multiplicador;
			
			printf("\n%d x %2d = %d", multiplicando, multiplicador, resultado);
			
		}

		 return 0;
		
		
		
	}
		
		*/



	int main()
	{
		int multiplicando, resultado, multiplicador;
		/*
			ENTRADA   ,    MULTIPLICAÇÃO    , CONTADOR DO FOR 
		7*/
		
		
		printf("Digite um numero para a sua tabuada, entre 1 e 10 :");
		scanf("%d", &multiplicando);//NUMERO QUE O USUÁRIO DIGITOU
		
		
		
		
		
		for (multiplicador=1; multiplicador<=10; multiplicador++)
		//multiplicador é o nome da variavel contador
		
		{
			
			resultado = multiplicando * multiplicador;
			
			printf("\n%d x %2d = %d", multiplicando, multiplicador, resultado);
			
		}

		 return 0;
		
		
		
	}