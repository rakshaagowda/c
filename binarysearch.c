#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,bot,n,top,mid,key,temp,A[10],sorted;
    
    system("clear");
    printf("\nEnter the size of the array:");
	scanf("%d",&n);
    
    printf("\nEnter %d elements into array-A: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    printf("elements of array are: ");
    for(j=1;j<n;j++)
    {
        sorted=1;
        for(i=0;i<n-j;i++)
        {
            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
                sorted=0;
            }
        }
        if(sorted)
            break;
    }
    printf("\nSorted elements are:- ");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
        
    printf("\nEnter the key element to be searched: ");
    scanf("%d",&key);
    
    top=0;
    bot=n-1;
    while(top<=bot)
    {
        mid=(top+bot)/2;
        if(key==A[mid])
        {
            printf("\nSearch successfull, %d exists in the array at %d position..",key,(mid+1));
           exit(0);
        }
        
        else
            if(key>A[mid])
              top=mid+1;
            else
              bot=mid-1;
    }
    
    printf("\nSearch failed....%d doesnot exist in the array-A",key);
    return 0;
}
