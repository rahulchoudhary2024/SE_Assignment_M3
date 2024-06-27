/*WAP Find out length of string without using inbuilt function*/




#include<stdio.h>
main()
{
     char str[]="Hello muy name is rahul";
     int l=0;
     while(str[l]!=NULL)
     {
          l++;
     }
     printf("\n\t Length of string is : %d ",l);
     
}
