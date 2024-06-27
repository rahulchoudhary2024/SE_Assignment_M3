//covert years into days and months

#include<stdio.h>
main()
{
	int d,m,y;
	
	printf("\n\n\t enter the years :");
	scanf("\n\n\t%d",&y);
	m=y*12;
	d=y*365;
	printf("\n\n\t %d",m);
	printf("\n\n\t %d",d);
	
}

