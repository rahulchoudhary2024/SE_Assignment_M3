/*Write a program make a summation of given number (E.g., 1523 Ans: -11)*/
#include <stdio.h>
main() 
{
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
   while (n != 0) 
    {
        i = n % 10; 
        sum = sum + i; 
        n = n / 10; 
    }

        printf("Summation of given number: %d\n", sum);

}
