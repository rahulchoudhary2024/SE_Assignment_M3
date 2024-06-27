//c program to read integer and print frist three powres(N^1,N^2,N^3).
#include<stdio.h>
main()
{
	int num;
	printf("\n\n\t enter an integer:");
	scanf("\n\t%d",&num);
	
	printf("\n\n\t frist three powers of %d are:\n",num);
	printf("%d^1=%d\n",num,num);
	printf("%d^2=%d\n",num,num*num);
	printf("%d^3=%d\n",num,num*num*num);
	
	return 0;
}
