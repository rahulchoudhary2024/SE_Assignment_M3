/*.Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)*/
#include<stdio.h>
main()
{
    int i,n,sum=0,temp,rem;
    printf("Enter any number : ");
    scanf("%d",&n);
    temp=n;
    i=n%10;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
    }
    sum=i+rem;
    printf("\n\n\t summation of first and last number  %d:%d",temp,sum);
}
