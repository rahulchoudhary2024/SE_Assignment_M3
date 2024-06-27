/*.WAP to perform Palindrome number using for loop and function*/
#include <stdio.h>

int Palindrome(int num) 
{
    int r = 0, n = num;
 
    while (num != 0) 
    {
        r = r * 10 + num % 10;
        num /= 10;
    }
    
    if (r == n)
        return 1;
    else
        return 0; 
}

main() 
{
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (Palindrome(number))
        printf("%d is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);
    
    return 0;
}
