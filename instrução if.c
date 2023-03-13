#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>// manipulação de caracteres.
	int main()
{
	// Instrução IF
	
		char c;
		
	printf("Digite um caracter em letra minuscula: \n");
	scanf("%c", &c);
		
		if (c>= 'a')
		{
			printf("Segue a letra que voce digitou em Maiuscula: > %c < \n",
					toupper (c));
					
		}
				 			

	
	
	
	return 0;
}