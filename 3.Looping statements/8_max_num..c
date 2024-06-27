/*. Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)*/
#include<stdio.h>
main()
{
    int i,n,j=0,rem;
    printf("enter any number : ");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        rem=n%10; 
        if(rem>j)
        {
            j=rem;
        }
        n=n/10;

    }
    printf("\n Max number form given number : %d",j);
}

