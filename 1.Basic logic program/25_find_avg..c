//accept 5 expense from user and find average of expense.
#include<stdio.h>
main()
{
	int e1,e2,e3,e4,e5,total=0,exp;
	
	printf("\n\n\t enter the expance :");
	scanf("\n\n\t %d",&e1);
	printf("\n\n\t enter the expance :");
	scanf("\n\n\t %d",&e2);
	printf("\n\n\t enter the expance :");
	scanf("\n\n\t %d",&e3);
	printf("\n\n\t enter the expance :");
	scanf("\n\n\t %d",&e4);
	printf("\n\n\t enter the expance :");
	scanf("\n\n\t %d",&e5);
	
	total=e1+e2+e3+e4+e5;
	exp=total/5;
	printf("\n\n\t avg.expance of user: %d",exp);
}
