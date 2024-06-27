/*Program of Armstrong Number in C Using  While Loop*/
#include<stdio.h>
main()
{
    int i,rem,sum=0,temp;
  
    printf("\n\t Enter the number for check armstrong number: ");
    scanf("%d",&i);
    temp=i;
    while(i>0)
    {
        rem=i%10;
        sum=sum+(rem*rem*rem);
        i=i/10;

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

