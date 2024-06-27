/* WAP to make simple calculater (oeration include addition, subtraction,multiplication,
 divison, modulo) using cnditional statement.*/
 
#include<stdio.h>
main()

{
	int x,y,z;
	
	printf("\n\n\t enter the number :");
	scanf("%d",&x);
	printf("\n\n\t enter the number :");
	scanf("%d",&y);
	printf("\n\n\t press 1 for addition :");
	printf("\n\n\t press 2 for subtraction:");
	printf("\n\n\t press 3 for multiplication:");
	printf("\n\n\t press 4 for division :");
	printf("\n\n\t press 5 for close  :");
	printf("\n\n\t enter the number :");
	scanf("%d",&z);
	if (z==1)
	    {
	    	printf("\n\t addition: %d",x+y);
		}
	else if(z==2)
	    {
	    	printf("\n\t subtraction:%d",x-y);
		}
	else if(z==3)
	    {
	    	printf("\n\t multiplication:%d",x*y);
		}
	else if(z==4)
	    {
	    	printf("\n\t division:%d",x/y);
		}
	else if(z==5)
	    {
	    	exit(0);
		}
	else
    {
     printf("\n\t try again");
    }			
}
