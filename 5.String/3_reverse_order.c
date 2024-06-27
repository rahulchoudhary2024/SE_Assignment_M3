/*Write a program in C to print individual characters of a string in 
reverse order*/

#include<stdio.h>
main()
{
	int i,j;
	char str[20];
	
	printf("\n\n\t Enter a string : ");
	scanf("%s[^\n]",&str[20]);
	
	j=0;
	while(str[j]!=0)
	{
		j++;
	}
	

	
	for(i=j-1;i>=0;i--)
	{
		printf("\n\n\t %c ",str[i]);
	}
}

