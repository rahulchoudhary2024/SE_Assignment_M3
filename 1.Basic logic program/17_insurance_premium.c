//calculate person's insurance premium based on salary.
#include<stdio.h>
main()
{
	int s,p,a;
	printf("\n\n\t entr the salary :");
	scanf("%d",&s);
	printf("\n\n\t enter premium parcentage :");
	scanf("%d",&p);
	
	a=s*p/100;
	
	printf("\n\n\t premium insuranc of a person :%d",a);
}
