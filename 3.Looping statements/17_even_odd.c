/*Calculate 5 numbers from user and calculate number of even and odd using
of while loop*/
#include<stdio.h>
main()
{
    int i,n[5],t=0,c=0;

    
    i = 1; 
    while ( i<5)
    {
        printf("\n\t Enert the number :");
        scanf("%d",&i);
          i++;
    }
    while (i<5)
    {
          if(i%2!=0)
             {   
        
            printf("\n\t Even number :%d ",i); 
            t++;
             }
       
             
                if(i%2==0)
                        {

                        printf("\n\t ODD number :%d ",i);
                        c++;
                        }
    }
    
    

    printf("\n\t total count of EVEN numbers :%d",t);
    printf("\n\t total count of ODD numbers :%d",c);

}
