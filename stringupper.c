#include <stdio.h>
#include <string.h>

int main()
{
	char temp,s[20],S[20];
    int i,l;
    printf("please enter the string: ");
    gets(s);
    l=strlen(s);
    //lower case 
    for(i=0;i<l;i++)
    {
        temp=s[i];
        if((temp>=65)&&(temp<=90))
        {
            temp=temp+32;
            s[i]=temp;
        }
    }
    
    printf("\nlowercase of entered string is:%s",s);
    
    //uppercase
    temp=0;l=0;i=0;
    printf("\nplease enter the string: ");
    gets(S);
    l=strlen(S);
    for(i=0;i<l;i++)
    {
        temp=S[i];
        if((temp>=97)&&(temp<=122))
        {
            temp=temp-32;
            S[i]=temp;
        }
    }
    printf("\nuppercase of entered string is:%s",S);
	return 0;
}
