/*calculate compound interest (compound interest formula:
a.formula to calculate compound interest annually is given by:
   amount=p(1+r/100)t
b.compound interest=amount-p. */ 
#include<stdio.h>
main()
{
	int a,b,c,d,principal,rate,time=6;
	
	printf("\n\n\t enter the value of principal");
	scanf("\n\n\t %d",&principal);
	printf("\n\n\t enter the value of rate");
	scanf("\n\n\t %d",&rate);
	
	a=rate/100;
	b=principal*(1+a);
	c=b*b*b*b*b*b;
	
	printf("\n\t amount%d",c);
	
	d=c-principal;
	
	printf("\n\n\t compound interest %d",d);
}
