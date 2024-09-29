/* To find the TRACE and NORM of a given matrix A (M x N) by checking the compatibility and print both input & output matrices 
   with suitable headings. Use user-defined functions to find their TRACE and NORM. */



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 5



int A[MAX][MAX], i, j, m, n, trace = 0, sum = 0;
float norm=0;

int main()
{  
   system("clear");
   rep:
   printf("\nEnter the Size/Order/Dim. of the Matrix-A: ");
   scanf("%d %d",&m, &n); 
   
   if(m!=n)
   {
      printf("\nOrder of the Matrix-A must be Sqr. Matrix i.e. M = N...");
      goto rep;
   }
   
   printf("\nInput %d elements into MATRIX-A: ", (m*n) );
   for(i=0; i < m; i++)    
      for(j=0; j < n; j++)
         scanf("%d",&A[i][j]); 
   
   printf("\nElements of MATRIX-A:\n");
   for(i=0; i < m; i++)    
   {
      for(j=0; j < n; j++)
         printf("%d   ",A[i][j]); 
      
      printf("\n");
   }   
   
   //Trace of a Matrix
   for(i=0; i < n; i++)    
      trace += A[i][i];
    
    printf("\n Trace=%d\n",trace);
   
   //Norm of a Matrix
   for (i = 0; i < m; ++i) 
      for (j = 0; j < n; ++j)
         sum += pow(A[i][j],2);
      
   norm = sqrt(sum);
   
   printf("\nNORM is %f \n", norm);
   
   return 0;
}


    


