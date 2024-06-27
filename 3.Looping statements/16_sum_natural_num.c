/*.Calculate the Sum of Natural Numbers Using the While Loop*/
#include<stdio.h>
main()
{
    int I,N,sum=0;
    printf("Enter natural number  for sum : ");
    scanf("%d",&N);
    I=1;
    while(I<=N)
    {
        sum=sum+I;
        
        I++;
    }
    printf("%d",sum);
}
