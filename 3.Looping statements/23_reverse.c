/* C Program to Reverse a Number Using FOR Loop*/
#include<stdio.h>
main()
{
	int i,n, rem;
	printf("\n\n\t Enter a number to reverse : ");
	scanf("%d",&n); 
	i=0;
	while(n>0)
	{
		rem=n%10;  
		printf("%d",rem);
		n=n/10; 
	}
}

