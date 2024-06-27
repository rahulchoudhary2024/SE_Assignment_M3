/*Write a program in C to separate individual characters from a string*/

#include <stdio.h>
main() 
{
    char str[100];
    int i = 0;


    printf(" \n\n\t Enter a string: ");
    fgets(str, sizeof(str), stdin); 


    while (str[i] != '\0' && str[i] != '\n') 
	{
        printf("\n\n\t Character at position %d: %c", i, str[i]);
        i++;
    }

    return 0;
}

