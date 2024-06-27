/*.Program of Armstrong Number in C Using for Loop.*/
#include<stdio.h>
main()
{
    int i,rem,sum=0,temp;
 
    printf("\n\t Enter the number for check armstrong number: ");
    scanf("%d",&i);
    
    for(temp=i;i>0;i=i/10)
    {
        rem=i%10;
        sum=sum+(rem*rem*rem);
        

    }
    if(sum==temp)
    {
        printf("\n\t Enterd number is armstrong number ");
    }
    else
    {
        printf("\n\t Enterd number is Not armstrong number ");
    }
    
}

