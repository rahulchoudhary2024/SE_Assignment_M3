/*. Accept 3 numbers from user using while loop and check each numbers
palindrome*/
#include<stdio.h>
 main()
{
	int i,temp,a,rem,rev;
	
	i=0;
	while(i<3)
	        {	
                a=0;
                printf("\n\n Enter any number to check each numbers palindrome ");
                scanf("%d",&a);
                temp=a;
                rev=0;
                
                
                while(a>0)
                    {
                    rem=a%10;
                    rev=(rev*10)+rem;
                    a=a/10;
                    }
                    
                    if(rev==temp)
                        printf("\n is palidrome");
                    else
                        printf("\n is not palidrome");
                
                i++;	
            }

            

}
