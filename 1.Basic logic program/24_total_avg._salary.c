//accept 5 employees name and salary and count average and total salary.
#include<stdio.h>
main()
{
	char a[10],b[10],c[10],d[10],f[10];
	int e1,e2,e3,e4,e5,total=0,avg;
	
	printf("\n\n\t enter employes name :");
	scanf("\n\t %s",&a[10]);
	printf("\n\n\t enter employes name :");
	scanf("\n\t %s",&b[10]);
	printf("\n\n\t enter employes name :");
	scanf("\n\t %s",&c[10]);
	printf("\n\n\t enter employes name :");
	scanf("\n\t %s",&d[10]);
	printf("\n\n\t enter employes name :");
	scanf("\n\t %s",&f[10]);
	
	printf("\n\n\t enter a salary");
	scanf("\n\t %d",&e1);
	printf("\n\n\t enter a salary");
	scanf("\n\t %d",&e2);
	printf("\n\n\t enter a salary");
	scanf("\n\t %d",&e3);
	printf("\n\n\t enter a salary");
	scanf("\n\t %d",&e4);
	printf("\n\n\t enter a salary");
	scanf("\n\t %d",&e5);
	
	total=e1+e2+e3+e4+e5;
	avg=total/5;
	
	printf("\n\n\t average salary%d",avg);
	printf("\n\n\t total salary%d",total);
		
}
	
