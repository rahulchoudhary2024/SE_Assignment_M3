/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/
#include<stdio.h>
main()
{
    int i,n=10,t=0,c=0,odd=0,even=0;

    
  
    for ( i = 0; i < n; i++)
    {
        if(i%2!=0)
        {
            even=even+i;
            printf("\n\t Even number :%d ",i);
            t++;
            
        }

    }
    
    for ( i = 0; i < n; i++)
    {
        if(i%2==0)
        {
           odd=odd+i;
            printf("\n\t ODD number :%d ",i);
            c++;
        }

    }
    
    printf("\n\t total count of EVEN numbers :%d",t);
    printf("\n\t total count of ODD numbers :%d",c);

 
    printf("\n\t total sum of ODD numbers : %d",odd);
    printf("\n\t total sum of EVEN numbers : %d",even);
   
}
