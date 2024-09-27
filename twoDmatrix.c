#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
	int A[MAX][MAX], B[MAX][MAX], S[MAX][MAX], D[MAX][MAX], i,j,m,n,p,q;
    
    system("clear");
    
    printf("\nEnter the order of matrix-A: ");
    scanf("%d %d",&m,&n);
    
    printf("\nEnter the order of matrix-B: ");
    scanf("%d %d",&p,&q);
  
    if((m!=p)||(n!=q))
    {
        printf("\norder of matrices are not matching\n");
        exit(0);
    }
    
    printf("\nEnter %d elements into matrix-A:\n",(m*n));
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);
            
    printf("\nEnter %d elements into matrix-B:\n",(p*q));
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            scanf("%d",&B[i][j]);
            
            
    printf("elements of matrix-A:-\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",A[i][j]);
      printf("\n");
     }
     
    printf("elements of matrix-B:-\n");   
     for(i=0;i<p;i++)
     {
        for(j=0;j<q;j++)
            printf("%d\t",B[i][j]);   
      printf("\n");
     }
     
   //addition and subtraction of two matrices
   for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            S[i][j]=A[i][j]+B[i][j];
            D[i][j]=A[i][j]-B[i][j];
        }
    
    printf("sum of matrices i.e.,S(m*n):-\n");   
     for(i=0;i<p;i++)
     {
        for(j=0;j<q;j++)
            printf("%d\t",S[i][j]);
        printf("\n");
     }
    printf("sum of matrices i.e.,D(m*n):-\n");   
     for(i=0;i<p;i++)
     {
        for(j=0;j<q;j++)
            printf("%d\t",D[i][j]);
      printf("\n");
     }
	return 0;
}
