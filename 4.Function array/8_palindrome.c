/*WAP to reverse a string and check that the string is palindrome or not*/
#include <stdio.h>



main()
 {
    
    char str[] = "rahul";
    int l = sizeof(str);
    char rev[l + 1];
    int i = l - 2;
    
    for (int i = l - 1; i >= 0; i--) 
    {
        rev[l - i - 2] = str[i];
    }
    
    int res = strcmp(str, rev);
    if (res == 0) 
    {
        printf("\n %s is a Palindrome", str);
    } 
    else 
    {
        printf("\n %s is not a Palindrome", str);
    }
}
