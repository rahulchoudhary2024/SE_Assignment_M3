/*.Accept the input month number and print number of days in that
month.*/
#include<stdio.h>
main()
{
    int M;

    printf("\n\t Month num : ");
    scanf("%d",&M);

    switch(M)
    {
        case 1 : printf("\n\t Months of Days :31");
                break;
        case 2 : printf("\n\t Months of Days :28");
                break;
        case 3 : printf("\n\t Months of Days :31");
                break;
        case 4 : printf("\n\t Months of Days :30");
                break;
        case 5 : printf("\n\t Months of Days :31");
                break;
        case 6 : printf("\n\t Months of Days :30");
                break; 
        case 7 : printf("\n\t Months of Days :31");
                break;
        case 8 : printf("\n\t Months of Days :31");
                break;
        case 9 : printf("\n\t Months of Days :30");
                break;
        case 10 : printf("\n\t Months of Days :31");
                break;
        case 11 : printf("\n\t Months of Days :30");
                break;
        case 12 : printf("\n\t Months of Days :31");
                break;    
        default :  printf("\n\t Dear user That Was Not Month Number :(....");
                break;
    }
}
