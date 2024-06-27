//Write a program to find out the max number from given array using function//
#include<stdio.h>
 main()
{
    int arry[5],i,max;
    for(i=0;i<5;i++)
    {
        printf("\n\t Enter the array element : ");
        scanf("%d",&arry[i]);

    }
    

    max=arry[0];
    for(i=0;i<5;i++)
    {
        if(arry[i]>max)
        {
            max=arry[i];
        }
    
        
    }   
    printf(" \n\t Maximum element form the array is : %d",max);
}
