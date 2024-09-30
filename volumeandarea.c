#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    float r,vol,area,s;
	printf("\nEnter the radius: ");
    scanf("%f",&r);
    
    vol=((4.0/3.0)*(22.0/7)*r*r*r);
    printf("\nvolume=%.2f",vol);
    
    printf("\nEnter the sides: ");
    scanf("%d %d %d",&a,&b,&c);
    
    s=((a+b+c)/2.0);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\narea is %.2f",area);
	return 0;
}
