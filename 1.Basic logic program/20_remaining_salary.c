//accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary.

#include<stdio.h>
main()
{
	float i,l,r,a;
	
	printf("\n\n\t enter the salary");
	scanf("\n\n\t%f",&a);
	
	i=a*0.1;
	l=a*0.1;
	r=a-(i+l);
	
	printf("\n\n\t remaining salary:%f",r);
	
}
