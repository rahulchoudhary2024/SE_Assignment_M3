/*.If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/-*/
#include<stdio.h>
main()
{
    int x,sc; 
    printf("Enter the Bill Amount : ");
    scanf("%d",&x);
    sc=x*0.18;

    if(x>800)
    {
        printf("\n\t => Bill Amount Highr then 800 ");
        printf("\n\t => pay exatra charges ");
        printf("\n\t =>  Extra pay on Your Bill Amount: %d",sc);
    }
    else if(x>=256 && x<800)
    {
        printf("\n\t You have to pay this Amount: %d",x);
    }
    else 
    {
        printf("\n\t Dear User Your Bill Is Not Vaild.....");
    }
}
