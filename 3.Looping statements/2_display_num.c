/*WAP to accept 5 numbers from user and display all numbers*/
#include<stdio.h>
main()
{
    int i,n;
    printf("Enter the any number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n\t %d",i);
    }
}
