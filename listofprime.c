// goal is to print the list of prime numbers in the given range
#include <stdio.h>


int main()
{
    int n1,n2,n,i,flag;
	printf("\nEnter the lower and upper limit: ");
    scanf("%d %d",&n1,&n2);
    
    printf("\nPrime numbers between %d and %d are:-\n",n1,n2);
    for(n=n1;n<=n2;n++)
    {
        flag=1;
        for(i=2;i<=(n/2);i++)
        {
            if(n%i==0)
            {
               flag=0;
               break;
            }   
        }
        if(flag)
            printf("%d\t",n);
    }
	return 0;
}
