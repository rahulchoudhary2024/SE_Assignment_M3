// Patterns: 2
#include<stdio.h>
 main()
{
	int R,C;
	char i='A';
	
	R=1;
	while(R<=5)
	{
		C=1;
		while(C<=R)
		{
			printf("%c ",i);
			i++;
			C++;
		}
		printf("\n");
		R++;
	}
}
