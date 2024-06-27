/*write a c program to read th value of an integer m and display the value of n is 1 
 when m is larger than 0,0 when m id 0 and -1when m is lessm than 0.*/
 
#include<stdio.h>
main()
{
	 int n,m;
	 
	 printf("\n\n\t enter the value of m:");
	 scanf("\n\t%d",&m);
	 
	 if(m>0)
	 { n=1;
	 }
	 else if(m==0)
	 { n=0;
	 }
	 else
	 { n=-1;
	 }
	 
	 printf("\n\n\t %d",n);
}
