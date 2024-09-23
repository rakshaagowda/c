#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    float disc,root1,root2;
    rep:
	printf("\nEnter co-efficients of quadratic equation: ");
    scanf("%d %d %d",&a,&b,&c);
    
    if((a==0)||(b==0)||(c==0))
    {
        printf("\nenter non zero co-efficients only ");
        goto rep;
    }
    disc=(b*b)-(4*a*c);
    if(disc==0)
    {
        root1=root2=(-b)/(2*a);
        printf("%.2f %.2f",root1,root2);
    }
    else if(disc>0)
          {
               root1=((-b)+(sqrt(disc)))/(2*a);                       
              
            root2=((-b)-(sqrt(disc)))/(2*a);
               printf("%.2f %.2f",root1,root2);             
          }  
         else
             printf("roots are imaginary");

	return 0;
}
