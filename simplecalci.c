#include <stdio.h>
#include <stdlib.h>


int main()
{
	int choice, n1,n2;
    printf("1.add\n2.sub\n3.mul\n4.mod\n5.div\nenter your choice: ");
    scanf("%d",&choice);

   
    printf("\nEnter two numbers: ");
    scanf("%d %d",&n1,&n2);
    
    switch(choice)
    {
        case 1:printf("\nresult: %d+%d=%d",n1,n2,(n1+n2));
               break;
        case 2:printf("\nresult: %d-%d=%d",n1,n2,(n1-n2));
               break;
        case 3:printf("\nresult: %d*%d=%d",n1,n2,(n1*n2));
               break;
        case 4:printf("\nresult: %d%%%d=%d",n1,n2,(n1%n2));
               break;
        case 5:if(n2==0)
                {
                    printf("div by zero error\n");
                   exit(0);
                    
                }
               else
                   {
                     printf("\nresult: %d/%d=%.2f",n1,n2,((float)n1/n2));
                     break;  
                   }
       default:printf("\ninvalid choice");
    }
	return 0;
}
