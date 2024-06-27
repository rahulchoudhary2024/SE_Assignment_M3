//find the area of a rectangular prism formula : A=2(wl+hl+hw).
#include<stdio.h>
main()
{
	int l,b,h,a;
	printf("\n\n\t enter the length :");
	scanf("\n\n\t%d",&l);
	printf("\n\n\t enter the breath :");
	scanf("\n\n\t%d",&b);
	printf("\n\n\t enter the height :");
	scanf("\n\n\t%d",&h);
	 
    a=2*((l*b)+(l*h)+(h*b)); 
	printf("\n\n\t area of rectangular prism:%d",a);
}
