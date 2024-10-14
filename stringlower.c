#include <stdio.h>
#include <string.h>

int main()
{
	char s[20],S[20];
    int i;
    printf("please enter the string: ");
    gets(s);
    
    //lower case 
    for(i=0;s[i]!='\0';i++)
    {
        
        if((s[i]>='A')&&(s[i]<='Z'))
        {
            s[i]=s[i]+32;
        }
    }
    
    printf("\nlowercase of entered string is:%s",s);
    
    //uppercase
    
    printf("\nplease enter the string: ");
    gets(S);
    
    for(i=0;S[i]!='\0';i++)
    {
        
        if((S[i]>='a')&&(S[i]<='z'))
        {
            
            S[i]=S[i]-32;
        }
    }
    printf("\nuppercase of entered string is:%s",S);
	return 0;
}
