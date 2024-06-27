/*WAP to find minimum number among 3 numbers using ternary operator*/

#include<stdio.h>
main()
{
	int F1,F2,F3;
	
	printf("input number F1 :");
	scanf("%d",F1);
	printf("input number F2 :");
	scanf("%d",F2);
	printf("input number F3 :");
	scanf("%d",F3);
	
	(F1<F2 && F1<F3)?printf("F1 is mini"):(F2<F1 && F2<F3)?printf("F2 is mini"):(F3<F1 && F3<F2)?printf("F3 is mini"):printf(" number are same");
}
