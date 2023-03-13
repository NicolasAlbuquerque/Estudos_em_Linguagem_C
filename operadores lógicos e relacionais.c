#include <stdio.h>
#include <stdlib.h>


	int main ()
	{
		//&& conectivo de ligação E
		//(true) && (true)
		
		int i = 40;
		int condi = (i>20)  && (i<100);
		
		
		
		printf("\n%i", condi);		
		printf("\n%i\n", !condi);
		
		system ("cls");
		//  || conectivo OU
		// (true) || (false) -> 1 ok
		//(false) || (true) ->  1 ok
		// (true) || (True)	->  1 ok
		// (false)||(false) ->  0
		
		int x = 10;
		int condition = 0;
		
		condition = (x==10)|| (x<1);
		printf("\n%i", condition);
		
		condition = (x==0)|| (x !=1000); // != diferente
		printf("\n%i", condition);
			condition = (x==10)|| (x!=0);
		printf("\n%i", condition);
		
			condition = (x!=10)|| (x==1);
		printf("\n%i", condition);
		
		
		
		return 0;
	}