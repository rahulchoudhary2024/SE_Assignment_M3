//convert temperature fahrenheit to celsius.
#include<stdio.h>
main()
{
	float a,s1,s2,celsius;
	printf("\n\n\t enter the temprature fahrenheit:");
	scanf("\n\n\t%f",&a);
	s1=a-32;
	s2=s1*5;
	celsius=s2/9;
	printf("\n\n\t fahrenheit : %.2f",a);
	printf("\n\n\tfahrenheit to celsius:%.2f",celsius);
}
