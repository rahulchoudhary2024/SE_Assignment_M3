//WAP to convert years into days and dayes into years.
#include<stdio.h>
main()
{
	int y,d;
	printf("\n\n\t enter years");
	scanf("\n\n\t%d",&y);
	d=y*365;
	printf("\n\n\t%d",d);
	
	printf("\n\t");
	
	printf("enter days");
	scanf("\n\n\t%d",&d);
	y=d/365;
	printf("\n\n\t%d",y);
}
