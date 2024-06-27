 //WAP to calculate swap 2 number with using of multiplication and division.
#include<stdio.h>
main()
{
	int n1,n2;
	
	printf("\n\n\t enter a value of n1 ");
	scanf("\n\n\t%d",&n1);
	printf("\n\n\tenter a value of n2");
	scanf("\n\n\t%d",&n2);
	
	printf("\n\t n1=%d n2=%d",n1,n2);
	n1=n1*n2;
	n2=n1/n2;
	n1=n1/n2;
	
	printf("\n\t n1=%d n2=%d",n1,n2);
}
