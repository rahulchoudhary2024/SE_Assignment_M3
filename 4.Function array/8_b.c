/*WAP to reverse a string and check that the string is palindrome or not
Write a program of structure employee that provides the following
b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage*/
#include<stdio.h>

struct Employee 
{
	int emp_no;           
	char emp_name[25];
	char emp_add[50];
	int emp_age;
     int emp[5];
	
}EMP;


main()
{
     int i;
     
     for(i=0;i<5;i++)
	
     {
 
          printf("\n\n\t Enter Employee Name  : ");
          scanf("%s",&EMP.emp_name);
          
          printf("\n\n\t Enter Employe ID No : ");
          scanf("%d",&EMP.emp_no);
          
          printf("\n\n\t Enter Employee Age  : ");
          scanf("%d",&EMP.emp_age);

          printf("\n\n\t Enter Employee Add : ");
          scanf("%s",&EMP.emp_add);

          printf("\n\n\t Name : %s",EMP.emp_name);
          printf("\n\n\t ID : %d",EMP.emp_no);
          printf("\n\n\t Age : %d",EMP.emp_age);
          printf("\n\n\t Address : %s",EMP.emp_add);
     }
}
