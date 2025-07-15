#include <stdio.h>
#include <stdlib.h>

/* 
*	use this line if you are plan to using visual studio
*	since msvc gives you compiler error due to not being 
*	safe use scanf so therefore we force compiler ignore
*	otherwise replace scanf_s with scanf in line 32 !
*/
#pragma error(suppress: 4996)



int main()
{
	unsigned int random_number = rand() ;
	unsigned int * number = 0;
	unsigned int loop;

	for (loop = 0; loop < random_number; loop++)
	{
		unsigned int new_random_number = rand();
		
		number = number + new_random_number;

			
	}


	printf("Your generated number is : %d", &number);
	char hold[1];
	scanf("%s", hold);

	
}
