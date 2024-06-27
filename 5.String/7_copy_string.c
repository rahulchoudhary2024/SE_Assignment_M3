/*Write a program in C to copy one string to another string*/
#include<stdio.h>

main()
{
	char str1[20] , str2[20];
	int i;
	
	printf("\n\n\t Input a string : ");
	scanf("%s",&str1);
	
	strcpy(str2,str1);
	printf("\n\n\t string after copying : %s",str2);
	
	
}
