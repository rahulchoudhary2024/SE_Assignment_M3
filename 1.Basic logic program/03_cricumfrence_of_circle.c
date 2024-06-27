//3. WAP to Find Area And Circumference of Circle

#include<stdio.h>

main()
{
    float Pi=3.14, area, circumference, radius;
    
    printf("\n\n\t Enter the radius of circle");
    scanf("\n\n\t %f",&radius);
    
    area = Pi * radius * radius;
    printf("\n\n\t Area of circle is %f",area);
    
    circumference = 2 * Pi * radius;
    printf("\n\n\t Circumference of circle is: %f",circumference);

    
}
