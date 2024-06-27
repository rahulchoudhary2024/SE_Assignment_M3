//Accept marks from user and check pass or fail
#include<stdio.h>
main()
{
	float s1,s2,s3,s4,s5,s6,per;
	
	printf("enter the marks :");
	scanf("%f",&s1);
	printf("enter the marks :");
	scanf("%f",&s2);
	printf("enter the marks :");
	scanf("%f",&s3);
	printf("enter the marks :");
	scanf("%f",&s4);
	printf("enter the marks :");
	scanf("%f",&s5);
	printf("enter the marks :");
	scanf("%f",&s6);
	
	per=((s1+s2+s3+s4+s5+s6)/600)*100;
	printf("parcentage is :%f",per);
	
	if(per>=33)
	  {
	  	printf("pass..");
	  }
	else
	   {
	   	printf("fail..");
		}   
	
	
	
	
	
	
	
	
	
	
	
}
