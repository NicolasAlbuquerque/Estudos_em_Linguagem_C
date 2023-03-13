#include <stdio.h>
#include <stdlib.h>
	int main()
{	
					/*VALORES FORMATADOS.*/
					
					
					
		//ESPECIFICA QUAL TIPO DE DADO QUEREMOS IMPRIMIR
		
		printf(""); //imprima formatado
		
		/* printf("%tipo_de_saida", Valor_a_ser_impresso");
		
				  ENCADEAR INFORMAÇÕES UTILIZANDO A VIRGULA:
		  		
		    //exemplo de encadeação: printf ("%tipo1 %tipo2", var1 var2); 
	*/	
		int num = 11;	
		printf("%i", num);// % = tipo ,  nome da variável indica o valor a ser impresso.
		
		float f = 2.2;
		printf("%f", f);
						/*				
						
     IMPRESSÃO DOS 5 TIPOS DE DADOAS.
							
		 Ao utilizar o simbolo de porcentagem "%" seguido do tipo da variiavel, é indicado para o programa qual tipo de valor será impresso.
							
			
		1)	integer %i ou %d
		2)	float/duble %f
		3)	char %c
		4)	string %s (cadeia de texto)
		5)	void valor vazio não pode ser impresso.
		//outras formas de imprimir
			a) %u numero inteiro sem sinal, o módulo de umm numeor
			b) %p endereço de memória
			c) %e ou %E iprime valores/numeros com notação cientifica
			d) %% para imprimir um unico simbolo de porcentagem!
						*/
			 
		int x =10;
		printf("%i\n" , x); //\n é utilizado para pular uma linha.
		
		float ff = 4.12;
		printf("%f\n", ff);
					
			 			
		printf("%i - %f\n", x , ff);

		
				return 0;
}