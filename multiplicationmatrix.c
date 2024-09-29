#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int main()
{
	int A[MAX][MAX],B[MAX][MAX],i,C[MAX][MAX],j,k,sum=0;
    int m,n,p,q;
    printf("please enter order of matrix -A: ");
    scanf("%d %d",&m,&n);
    
    printf("please enter order of matrix -B: ");
    scanf("%d %d",&p,&q);
    
    if(n!=q)
     {
         printf("\nMatrices cannot be multiplied");
       exit(0);
       }
 
    
    printf("\nEnter %d elements into matrix -A: ",(m*n));
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    
    
    printf("\nEnter %d elements into matrix -B: ",(p*q));
    for(i=0;i<q;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                sum=sum+A[i][j]*B[j][k];
            }
                C[i][j]=sum;
            
        }
    }
    
    printf("\nMultiplication:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",C[i][j]);
        }
    }
	return 0;
}
