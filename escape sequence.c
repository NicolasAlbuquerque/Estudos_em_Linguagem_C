#include <stdio.h>
#include <stdlib.h>

	int main()
{
/*			ESCAPE SEQUENCE ou CÓDIGO DE BARRA INVERTIDA
				
			1)	\n = quebramos uma linha
			2)	\t = imprime um TAB, da tabulação no texto.	
			3) \\ par imprimir uma barra invertida
			4) \" para imprimir aspas duplas	
			5) \' para imprimir aspa simples
			6) \0 aqui finaliza o texto ( os ultimos dois caracteres em C sempre são o \0 é onde informa o printf onde parar de imprimir
*/	
	
	printf("Oi, eu sou o \\Dev\\ C++\n"); //IMPRESSÃO DE BARRA INVERTIDA E QUEBRA DE LINHA
	printf("Oi eu dou o \"Dev\" c ++\n"); //IMPRESSÃO DE ASPAS DUPLAS E QUBRA DE LINHA
	printf("Oi eu sou o \'Dev\' C ++\n\n");// IMPRESSÃO DE
	printf("\t\t\t\tOi, eu sou o \t Dev\t C++");
	
	return 0;
}