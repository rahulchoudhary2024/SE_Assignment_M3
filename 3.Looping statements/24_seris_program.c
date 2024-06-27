/*Series Program
 . 1 + 2 + 3 + 4 + 5 + ... + n */
 
 #include<stdio.h>
main()
{
	int i,n;

	printf("\n\n\t Enter Number for N : ");
	scanf("%d",&n);
 
	for(i=1;i<=n;i++)
     {
		if(i==n)
               {
               printf("%d",i);
               }
	     else
               {
          
               printf("%d+",i);
               }    
     }

}
