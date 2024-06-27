/*. WAP to find factorial using recursion */
#include <stdio.h>
fact(int n) 
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
main() 
{
    int num;
    printf("\n\n\t Enter any number : ");
    scanf("%d", &num);
    printf("\n\n\t Factorial num : %d",fact(num));
}

