/*.WAP to find maximum number among 3 numbers using ternary operator*/
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
	
	(F1>F2 && F1>F3)?printf("F1 is max"):(F2>F1 && F2>F3)?printf("F2 is max"):(F3>F1 && F3>F2)?printf("F3 is max"):printf(" number are same");
}
