/*WAP to print factorial of given number*/
#include<stdio.h>
main()
{
	int i, n, f;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    printf("Enter the value of F : ");
    scanf("%d",&f);
    i=1;
	while(i<=n)
	{
		f=f*i;
		printf(" %d",f);
		i++;
	}
	printf("\n\n\t Factorial of %d is %d",n, f);
	
}
