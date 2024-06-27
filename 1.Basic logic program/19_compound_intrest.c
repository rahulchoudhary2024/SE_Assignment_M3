//calculate compound interest.
#include<stdio.h>
main()
{
	int a,p,r,t;
	
	printf("\n\n\t enter value of p :");
	scanf("\n\t %d",&p);
	printf("\n\n\t enter the value of r");
	scanf("\n\t %d",&r);
	t=(1+(r%100));
	a=p*t*t;
	printf("\n\n\t compound intrest:%d",a);	

}
