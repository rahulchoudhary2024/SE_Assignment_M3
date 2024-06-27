/*.WAP to check whether a number is negative, positive or zero.*/
#include <stdio.h>
main() 
{
    float number;

    
    printf("Enter a number: ");
    scanf("%f", &number);

    
    if (number > 0) 
	{
        printf("\n\n\tThe number %.2f is positive.", number);
    }
    else if (number < 0) 
	{
        printf("\n\n\t The number %.2f is negative.", number);
    }
    else 
	{
        printf("\n\n\t The number is zero.");
    }

    return 0;
}

