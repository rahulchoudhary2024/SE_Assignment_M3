/*Series Program:
  (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) */
#include<stdio.h>
 main()
{
int x,y,z;

	printf("\n\n\t  Enter Number for N :");
	scanf("%d",&z);
     
	for(x=1;x<=z;x++)
     {
		printf("(");
          for(y=1;y<=x;y++)
               {
                    printf("%d",y);
                    if(y<x)
                         {
                              printf("+");
                         }
                    else if(y==x)
                         {
                              printf(")+");
                         }	
               }
     }

}
