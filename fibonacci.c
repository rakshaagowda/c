#include <stdio.h>

int main()
{
	int f,f1,f2,n,i;
    
    system("clear");
    printf("\nEnter the number of terms: ");
    scanf("%d",&n);
    
    if(n<0)
        n=-n;
    
    printf("\n%d Fibpnacci numbers are : ",n);
    
    f=f1=0;
    f2=1;
    for(i=1;i<n;i++)
    {
        printf("%d\t",f);
        f1=f2;
        f2=f;
        f=f1+f2;
    }
    
    printf("\n");
	return 0;
}
