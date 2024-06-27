//convert minutes into second and hours.
#include<stdio.h>
main()
{
	int s,m,h;
	printf("\n\n\t enter the minutes");
	scanf("\n\n\t%d",&m);
	
	s=m*60;
	h=m/60;
	
	printf("\n\n\t%d",s);
	printf("\n\n\t%d",h);
}

