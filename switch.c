#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

	int  main()
	{
		char nome[32];
		 int idade;
	
		printf("CLASSIFICACAO DE ATLETAS\n");
		printf("Nome do Atleta: \n");
		scanf("%30s", &nome);
		printf("Idade do Atleta: \n");
		printf ("[1] se voce tem de 5 a 10 anos.\n");
		printf ("[2] se voce tem de 11 a 15 anos.\n");
		printf ("[3] se voce tem de 16 a 20 anos.\n");
		printf ("[4] se voce tem de 21 a 15 anos.\n");
		scanf("%i",&idade);
	
			switch (idade)
			{	
			case 1 : (idade >=5  && idade <=10);
			printf("sua categoria e: Infantil.", nome);
			break;
		
			
			case 2: (idade >=11 && idade <= 15) ;
	
			printf("sua categoria e: Juvenil.");
			break;
		
			
			case 3 : (idade >=16 && idade <= 20); 
			
			printf("sua categoria e: Junior.");
			break;
		
			
			case 4 :(idade >=21 && idade <= 25) ;
			 
			printf("sua categoria e: Profissional.");
			break;
		
		
		
				}
			
			system ("pause>null");
			return 0;		
	}