#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10],s2[10];
    int value,flag=0,i;
    printf("using string function");
    printf("\nenter two strings\n");
    gets(s1);
    gets(s2);
    value=(strcmp(s1,s2));
    
    if(value==0)
        printf("strings are equal");
        
    else
        printf("strings are not equal");
        
     printf("\nwithout using string function\n");
     printf("enter two strings\n");    
   
     gets(s1);
     gets(s2);
    
    for(i=0;(s1[i]!='\0')||(s2[i]!='\0');i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("strings are not equal");
    else 
         printf("strings are equal");
	return 0;
}
