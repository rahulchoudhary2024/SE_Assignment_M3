/*. WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)*/
#include<stdio.h>

main()
{
    int n1,n2;
    char choice;
    printf("\n\t Enter the  number :");
    scanf("%d",&n1);
    printf("\n\t Enter the  number :");
    scanf("%d",&n2);

    printf("\n\t +. Addition");
    printf("\n\t -. Subtraction");
    printf("\n\t *. Multiplication");
    printf("\n\t /. Division");
    printf("\n\t E. Exit");

    printf("\n\t choice a Arithmatic op:");
    scanf(" %c",&choice);
 
    switch(choice)
    {
        case '+' : printf("\n\t Addition : %d",n1+n2);
                break;
        case '-' : printf("\n\t Subtraction : %d",n1-n2);
                break;
        case '*' : printf("\n\t Multiplication : %d",n1*n2);
                break;
        case '/' : printf("\n\t Division : %d",n1/n2);
                break;
        case 'E' : exit(0);
                break;
        default : printf("\n\t Invalid Choice");
                break;
    }


}

