#include <stdio.h>
#include <string.h>
int main()
{
	char s1[50],s2[50];
    int i,l1,l2;
    printf("using string function");
    printf("\nenter two strings\n");
    gets(s1);
    gets(s2);
   // strcat(s1,s2);
    strcat(s2,s1);
    //printf("\nconcatenated string is %s\n",s1);
    printf("\nconcatenated string is %s\n",s2);
    
    printf("without using string function");
    printf("\nenter two strings\n");
    gets(s1);
    gets(s2);
    
    l1=strlen(s1);
    l2=strlen(s2);
    /*printf("\nstring1 concatenated:-");
    for(i=0;i<=l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("\nconcatenated string is %s\n",s1);
   */ 
   printf("\nstring2 concatenated:-");
    for(i=0;i<=l1;i++)
    {
        s2[l2+i]=s1[i];
    }
    printf("\nconcatenated string is %s\n",s2);
	return 0;
}
