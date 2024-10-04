#include <stdio.h>
#include <string.h>

int main()
{
    int i,l;
	char c,s[20];
    printf("without using string function");
    printf("\nenter string\n");
    gets(s);
    l=strlen(s);
    for(i=0;i<=(l/2);i++)
    {
        c=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=c;
    }
    printf("reverse of enetered string is:%s\n",s);
    
	return 0;
}
