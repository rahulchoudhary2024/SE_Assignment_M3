/*WAP to show difference between Structure and Union.*/
#include<stdio.h>

struct stud_personal //Union structure
{
	int rollno;           
	char sname[20];
	char city[20];
	
	struct stud_marksheet
	{
		float per;	
		char grade;
	}SM;
	
}SP;


main()
{
	
	
	SP.rollno=101;
	strcpy(SP.sname,"rohit");
	SP.SM.per=70.88;
	
	printf("\n\n\t Rollno : %d",SP.rollno);
	printf("\n\n\t Name : %s",SP.sname);
	printf("\n\n\t Percentages : %f",SP.SM.per); 
	
		
}

