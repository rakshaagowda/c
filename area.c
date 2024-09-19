#include <stdio.h>

int main()
{
    
    int perimeter=0,area=0;
    int length=0,breadth=0;
    
	
    printf("please enter length and breadth:\n");
    scanf(" %d",&length);
    scanf("%d",&breadth);
    perimeter=2*(length+breadth);
    area=(length*breadth);
    printf("the area is %d\n",area);
    printf("the perimeter is %d\n",perimeter);
	return 0;
}
