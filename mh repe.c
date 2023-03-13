#include <stdio.h>
#include<stdlib.h>
#include<string.h>
	int main()
	{
		float a, b,c, mh;
		char aluno[32];
	
		
		printf("Entre com o nome do Aluno: ");
		scanf ("%30s", &aluno);
		printf("niniocEntre com a nota de tres provas \n");
		printf("Digite a primeira nota: ");
		scanf("%f", &a);
		printf("Entre com a segunda nota: ");
		scanf("%f", &b);
		printf ("Entre com a terceira nota: ");
		scanf("%f", &c);
		mh = 3/(1/a+1/b+1/c);
		printf("A media harmonica do aluno: %s foi %0.2f", aluno, mh);

	
		
		printf("Entre com o nome do Aluno: ");
		scanf ("%30s", &aluno);
		printf("niniocEntre com a nota de tres provas \n");
		printf("Digite a primeira nota: ");
		scanf("%f", &a);
		printf("Entre com a segunda nota: ");
		scanf("%f", &b);
		printf ("Entre com a terceira nota: ");
		scanf("%f", &c);
		mh = 3/(1/a+1/b+1/c);
		printf("A media harmonica do aluno: %s foi %0.2f", aluno, mh);

		system ("pause>null");
		return 0;




}

