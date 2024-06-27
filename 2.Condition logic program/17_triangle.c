/*7.Write a C program to check whether a triangle can be formed with the given
values for the angles.*/
#include<stdio.h>
main()
{
    int A,B,C,S;

    printf("\n\t angle A:");
    scanf("%d",&A);

    printf("\n\t angle B:");
    scanf("%d",&B);

    printf("\n\t angle C:");
    scanf("%d",&C);
    S=A+B+C;

    printf("\n\ttriangle values are : %d",S);

    if(S==180)
    {
        printf("\n Triangle angles are valid");
    }
    else if (S>=180)
    {
       printf("\n Triangle angles are invalid"); 
    }
    else if (S!=180)
    {
       printf("\n Triangle angles are invalid"); 
    }
    else
    {
        printf("\n\t this not a triangle");
    }


}

