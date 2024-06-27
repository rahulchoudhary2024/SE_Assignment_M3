/*WAP to accept 5 numbers from user and display in reverse order using for
loop and array*/
#include <stdio.h>

main() {
    int a[5];
    int i;


    printf("\n Enter 5 numbers:");
    for (i = 0; i < 5; i++) 
    {
        printf("\n Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }


    printf("\n Numbers in reverse order:");
    for (i = 4; i >= 0; i--) 
    {
        printf("\n%d", a[i]);
    }

}
