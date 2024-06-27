/*.Write a C program to calculate profit and loss on a transaction.*/
#include<stdio.h>
main()
{
    int p,s,l,c;
    printf("\n\t Enter the cost price:");
    scanf("%d",&c);
    printf("\n\t Enter the Sell price:");
    scanf("%d",&s);
    p=s-c;
    l=c-s;
    if(s>c)
    {
        printf("\n your Profit :%d",p);
    }
    else if(c>s)
    {
        printf("\n your loss :%d",l);
    }
    else
    {
        printf("\n you have no Profit no Loss");
    }

}
