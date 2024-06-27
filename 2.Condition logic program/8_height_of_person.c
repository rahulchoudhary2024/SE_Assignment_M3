/*WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/

#include<stdio.h>
main()
{
	float height;
	
	printf("enter the height :");
	scanf("%f",&height);
	
	if(height<150)
	{
		printf("person is short");
	}
	else if(height>=150 && height<165 )
	{
		printf("person's height is average");
	}
	else if(height>=165 && height<180)
	{
		printf("person is tall");
	}
	else
	{
		printf("person is very tall");
	}
				  	   	   
	   

}
