/*WAP to find the largest of three numbers.*/
#include<stdio.h>

main()
{
    int a,b,c;
    printf("\n\t Enter the Number:");
    scanf("%d",&a);
    printf("\n\t Enter the Number:");
    scanf("%d",&b);
    printf("\n\t Enter the Number:");
    scanf("%d",&c);

    if (a>b && a>c)
        {
            printf("\n\t this num is largest:%d",a);
        }
    else if (b>a && b>c)
        {
            printf("\n\t this num is largest:%d",b);
        }
    else if (c>a && c>b)
        {
            printf("\n\t this num is largest:%d",c);
        }
    else 
        {
                exit(0);
        }      
}

