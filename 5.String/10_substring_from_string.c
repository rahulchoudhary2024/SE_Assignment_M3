/*.Write a program in C to extract a substring from a given string*/
#include<stdio.h>


main()
{
	char str[20], sub[20];
	int s=5,l=3;
	
	printf("\n\n\t Enter a string : ");
	scanf("%s",&str[20]);
	
	strncpy(sub,str+s,l);
	sub[l]= 0;
	
	printf("\n\n\t Extract A Substring : %s",sub);
	
}
